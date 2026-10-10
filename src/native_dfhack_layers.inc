// Every DFHack drawing path uses private output buffers on the real graphicst.
// Lua globals, retained native handles and C++ gps therefore share one drawing
// state. Native parent segments restore the game's own output binding.
using NativeDfhackLayerTexture = std::remove_pointer_t<decltype(graphicst::screentexpos)>;
static void native_dfhack_gpu_suspend() noexcept;
static void native_dfhack_gpu_resume() noexcept;
static void native_dfhack_layer_committed() noexcept;

struct NativeDfhackOutputBinding {
    std::array<void *, 14> pointers{};
    unsigned char *limit = nullptr, *top_limit = nullptr;
    int32_t *refresh = nullptr;
    bool top = false;
    bool display_title = false;
    int32_t background = 0, last_background = 0, refresh_value = 0;
    int16_t force_full_display = 0;
    std::array<unsigned char, offsetof(graphicst, ccolor) - offsetof(graphicst, screenx)> draw{};
    std::array<long, 2> clipx{}, clipy{};
    std::array<uintptr_t, 3> viewports{}, map_ports{};
    void *main_viewport = nullptr, *main_map_port = nullptr;
    std::array<void *, 8> lower{};

    static NativeDfhackOutputBinding capture(const graphicst &gps) noexcept {
        NativeDfhackOutputBinding b;
        b.pointers = {gps.screen, gps.screentexpos, gps.screentexpos_lower,
            gps.screentexpos_anchored, gps.screentexpos_anchored_x,
            gps.screentexpos_anchored_y, gps.screentexpos_flag,
            gps.screen_top, gps.screentexpos_top, gps.screentexpos_top_lower,
            gps.screentexpos_top_anchored, gps.screentexpos_top_anchored_x,
            gps.screentexpos_top_anchored_y, gps.screentexpos_top_flag};
        b.limit = gps.screen_limit; b.top_limit = gps.screen_top_limit;
        b.refresh = gps.screentexpos_refresh_buffer; b.top = gps.top_in_use;
        b.display_title = gps.display_title; b.background = gps.display_background;
        b.last_background = gps.last_display_background; b.refresh_value = gps.refresh_buffer_val;
        b.force_full_display = gps.force_full_display_count;
        std::memcpy(b.draw.data(), &gps.screenx, b.draw.size());
        std::copy_n(gps.clipx, 2, b.clipx.begin());
        std::copy_n(gps.clipy, 2, b.clipy.begin());
        std::memcpy(b.viewports.data(), &gps.viewport, sizeof(b.viewports));
        std::memcpy(b.map_ports.data(), &gps.map_port, sizeof(b.map_ports));
        b.main_viewport = gps.main_viewport; b.main_map_port = gps.main_map_port;
        std::copy_n(gps.lower_viewport, 8, b.lower.begin());
        return b;
    }
    void apply(graphicst &gps) const noexcept {
        gps.screen = static_cast<unsigned char *>(pointers[0]);
        gps.screentexpos = static_cast<NativeDfhackLayerTexture *>(pointers[1]);
        gps.screentexpos_lower = static_cast<NativeDfhackLayerTexture *>(pointers[2]);
        gps.screentexpos_anchored = static_cast<NativeDfhackLayerTexture *>(pointers[3]);
        gps.screentexpos_anchored_x = static_cast<NativeDfhackLayerTexture *>(pointers[4]);
        gps.screentexpos_anchored_y = static_cast<NativeDfhackLayerTexture *>(pointers[5]);
        gps.screentexpos_flag = static_cast<uint32_t *>(pointers[6]);
        gps.screen_top = static_cast<unsigned char *>(pointers[7]);
        gps.screentexpos_top = static_cast<NativeDfhackLayerTexture *>(pointers[8]);
        gps.screentexpos_top_lower = static_cast<NativeDfhackLayerTexture *>(pointers[9]);
        gps.screentexpos_top_anchored = static_cast<NativeDfhackLayerTexture *>(pointers[10]);
        gps.screentexpos_top_anchored_x = static_cast<NativeDfhackLayerTexture *>(pointers[11]);
        gps.screentexpos_top_anchored_y = static_cast<NativeDfhackLayerTexture *>(pointers[12]);
        gps.screentexpos_top_flag = static_cast<uint32_t *>(pointers[13]);
        gps.screen_limit = limit; gps.screen_top_limit = top_limit;
        gps.screentexpos_refresh_buffer = refresh; gps.top_in_use = top;
        gps.display_title = display_title; gps.display_background = background;
        gps.last_display_background = last_background; gps.refresh_buffer_val = refresh_value;
        gps.force_full_display_count = force_full_display;
        std::memcpy(&gps.screenx, draw.data(), draw.size());
        std::copy(clipx.begin(), clipx.end(), gps.clipx);
        std::copy(clipy.begin(), clipy.end(), gps.clipy);
        std::memcpy(&gps.viewport, viewports.data(), sizeof(viewports));
        std::memcpy(&gps.map_port, map_ports.data(), sizeof(map_ports));
        gps.main_viewport = reinterpret_cast<decltype(gps.main_viewport)>(main_viewport);
        gps.main_map_port = reinterpret_cast<decltype(gps.main_map_port)>(main_map_port);
        for (size_t i = 0; i < lower.size(); ++i)
            gps.lower_viewport[i] = reinterpret_cast<decltype(gps.main_viewport)>(lower[i]);
    }
};

// Viewport/map-port objects have scalar layout followed by output pointers.
// Their private arrays start at zero; no native texture contents are copied.
class NativeDfhackMapLayer {
    void *source_ = nullptr;
    bool map_port_ = false;
    int dimx_ = 0, dimy_ = 0;
    size_t prefix_ = 0, fields_ = 0, stride_ = 0;
    std::vector<uint64_t> object_;
    unsigned char *data_ = nullptr;
    size_t bytes_ = 0;
    std::vector<uint8_t> candidates_;
    bool has_writes_ = false;
#ifdef _WIN32
    std::vector<void *> pages_;
#else
    std::vector<unsigned char> fallback_;
#endif
    size_t width(size_t field) const noexcept {
        return map_port_ ? (field == 33 ? 8 : 4) : (field == 1 || field == 6 ? 8 : 4);
    }
public:
    NativeDfhackMapLayer(void *source, bool port) : source_(source), map_port_(port) {
        std::memcpy(&dimx_, static_cast<unsigned char *>(source) + 4, 4);
        std::memcpy(&dimy_, static_cast<unsigned char *>(source) + 8, 4);
        if (dimx_ <= 0 || dimy_ <= 0 || dimx_ > 4096 || dimy_ > 4096) return;
        prefix_ = port ? 0x38 : 0x28; fields_ = port ? 34 : 25;
        const size_t object_bytes = port ? 0x2e0 : 0x1c8;
        object_.resize(object_bytes / 8);
        std::memcpy(object_.data(), source, object_bytes);
        stride_ = (static_cast<size_t>(dimx_) * dimy_ * 8 + 4095) & ~size_t{4095};
        bytes_ = fields_ * stride_;
#ifdef _WIN32
        data_ = static_cast<unsigned char *>(VirtualAlloc(nullptr, bytes_,
            MEM_RESERVE | MEM_COMMIT | MEM_WRITE_WATCH, PAGE_READWRITE));
        if (!data_) throw std::bad_alloc();
        pages_.resize(bytes_ / 4096);
#else
        fallback_.resize(bytes_); data_ = fallback_.data();
#endif
        candidates_.assign(static_cast<size_t>(dimx_) * dimy_, 0);
        auto *bytes = reinterpret_cast<unsigned char *>(object_.data());
        for (size_t i = 0; i < fields_; ++i) {
            void *array = data_ + i * stride_;
            std::memcpy(bytes + prefix_ + i * 8, &array, 8);
            // Renderer history also belongs to this private map object.
            std::memcpy(bytes + prefix_ + (fields_ + i) * 8, &array, 8);
        }
    }
    ~NativeDfhackMapLayer() {
#ifdef _WIN32
        if (data_) VirtualFree(data_, 0, MEM_RELEASE);
#endif
    }
    void *source() const noexcept { return source_; }
    void *view() const noexcept { return data_ ? const_cast<uint64_t *>(object_.data()) : nullptr; }
    bool map_port() const noexcept { return map_port_; }
    int dimx() const noexcept { return dimx_; }
    int dimy() const noexcept { return dimy_; }
    bool dimensions_current() const noexcept {
        int32_t width = 0, height = 0;
        std::memcpy(&width, static_cast<unsigned char *>(source_) + 4, sizeof(width));
        std::memcpy(&height, static_cast<unsigned char *>(source_) + 8, sizeof(height));
        return width == dimx_ && height == dimy_;
    }
    void refresh_layout() noexcept {
        if (object_.empty()) return;
        auto *destination = reinterpret_cast<unsigned char *>(object_.data());
        const auto *source = static_cast<const unsigned char *>(source_);
        // Scrolling, zoom and clip changes reuse the native object. Borrow its
        // current scalar layout and read-only tree/biome metadata, while both
        // current/history output pointer groups remain private.
        std::memcpy(destination, source, prefix_);
        const size_t metadata = prefix_ + fields_ * sizeof(void *) * 2;
        std::memcpy(destination + metadata, source + metadata,
            object_.size() * sizeof(uint64_t) - metadata);
    }
    void collect_writes() noexcept {
        if (!data_) return;
#ifdef _WIN32
        ULONG_PTR count = pages_.size(); ULONG granularity = 0;
        if (GetWriteWatch(0, data_, bytes_, pages_.data(), &count, &granularity)) return;
        has_writes_ = has_writes_ || count != 0;
        for (size_t page = 0; page < count; ++page) {
            const size_t offset = static_cast<unsigned char *>(pages_[page]) - data_;
            const size_t field = offset / stride_;
            const size_t start = (offset % stride_) / width(field);
            const size_t end = std::min(candidates_.size(), start + granularity / width(field));
            if (start < end) std::fill(candidates_.begin() + start, candidates_.begin() + end, 1);
        }
#else
        std::fill(candidates_.begin(), candidates_.end(), 1);
        has_writes_ = true;
#endif
    }
    void clear() noexcept {
        if (!data_) return;
#ifdef _WIN32
        ULONG_PTR count = pages_.size(); ULONG granularity = 0;
        if (!GetWriteWatch(0, data_, bytes_, pages_.data(), &count, &granularity)) {
            for (size_t i = 0; i < count; ++i) std::memset(pages_[i], 0, granularity);
            ResetWriteWatch(data_, bytes_);
        }
#else
        std::memset(data_, 0, bytes_);
#endif
        std::fill(candidates_.begin(), candidates_.end(), 0);
        has_writes_ = false;
    }
    bool any_content() const noexcept { return has_writes_; }
    bool has_content(size_t at) const noexcept {
        if (at >= candidates_.size() || !candidates_[at]) return false;
        for (size_t i = 0; i < fields_; ++i) {
            const auto *value = data_ + i * stride_ + at * width(i);
            uint64_t bits = 0; std::memcpy(&bits, value, width(i));
            if (bits) return true;
        }
        return false;
    }
};

struct NativeDfhackLayerGraphicsDeleter {
    void operator()(graphicst *graphics) const noexcept {
#ifdef _WIN32
        // texblitst is a trivial native value. Release its vector storage
        // through the same host vector destructor used by native rich-text
        // scratch buffers, never through the core's MinGW allocator.
        if (graphics && native_pe_supported()) {
            const auto executable = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
            const auto destroy = native_pe_address(executable, 0x66b70);
            if (destroy) reinterpret_cast<void (*)(void *)>(destroy)(&graphics->texblits);
        }
        delete graphics;
#else
        // The ABI view borrows game textures and metadata vectors. Only the
        // command vector is constructed here and belongs to this layer.
        std::destroy_at(std::addressof(graphics->texblits));
        ::operator delete(graphics);
#endif
    }
};

struct NativeDfhackLayerStorage {
    struct Plane {
        std::vector<unsigned char> screen;
        std::array<std::vector<NativeDfhackLayerTexture>, 5> textures;
        std::vector<uint32_t> flags;
        std::vector<NativeDfhackArtworkPen> artwork_pens;
    };
    std::array<Plane, 2> planes;
    std::vector<int32_t> refresh;
    std::vector<uint8_t> written;
    std::vector<std::unique_ptr<NativeDfhackMapLayer>> maps;
    std::vector<void *> viewport_views, map_port_views;
    std::unique_ptr<graphicst, NativeDfhackLayerGraphicsDeleter> graphics;
    NativeDfhackOutputBinding output;
    int dimx = 0, dimy = 0;
    uint64_t revision = 0, page_revision = 0;
    bool ready = false;

    void *map_view(void *source, bool port) {
        if (!source) return nullptr;
        for (auto &map : maps) {
            if (map->source() != source || map->map_port() != port) continue;
            // Changing only dimensions would leave the private arrays at the
            // old stride. Rebuild first, so every view/main/lower binding made
            // by this prepare pass receives the same current private object.
            if (!map->dimensions_current()) map = std::make_unique<NativeDfhackMapLayer>(source, port);
            else map->refresh_layout();
            return map->view();
        }
        auto map = std::make_unique<NativeDfhackMapLayer>(source, port);
        auto *view = map->view(); maps.push_back(std::move(map)); return view;
    }
    void prepare(const graphicst &gps, const NativeDfhackOutputBinding &native, bool begin) {
        const bool resized = !ready || dimx != gps.dimx || dimy != gps.dimy;
        if (resized) {
            if (gps.dimx <= 0 || gps.dimy <= 0 || gps.dimx > 1000 || gps.dimy > 1000)
                throw std::bad_alloc();
            dimx = gps.dimx; dimy = gps.dimy;
            const size_t count = static_cast<size_t>(dimx) * dimy;
            for (auto &plane : planes) {
                plane.screen.resize(count * 8);
                for (auto &texture : plane.textures) texture.resize(count);
                plane.flags.resize(count);
                plane.artwork_pens.resize(count);
            }
            refresh.resize(count); written.resize(count); maps.clear(); ready = true;
        }
        if (resized || begin) {
            for (auto &plane : planes) {
                std::fill(plane.screen.begin(), plane.screen.end(), 0);
                for (auto &texture : plane.textures) std::fill(texture.begin(), texture.end(), 0);
                std::fill(plane.flags.begin(), plane.flags.end(), 0);
                std::fill(plane.artwork_pens.begin(), plane.artwork_pens.end(), NativeDfhackArtworkPen{});
            }
            std::fill(refresh.begin(), refresh.end(), 0);
            std::fill(written.begin(), written.end(), 0);
            for (auto &map : maps) map->clear();
            output = native;
        }
        for (size_t i = 0; i < planes.size(); ++i) {
            auto &plane = planes[i]; const size_t base = i * 7;
            output.pointers[base] = plane.screen.data();
            for (size_t j = 0; j < plane.textures.size(); ++j)
                output.pointers[base + j + 1] = plane.textures[j].data();
            output.pointers[base + 6] = plane.flags.data();
        }
        output.limit = planes[0].screen.data() + planes[0].screen.size();
        output.top_limit = planes[1].screen.data() + planes[1].screen.size();
        output.refresh = refresh.data();
        const auto prepare_vector = [&](const auto &source, bool port, auto &views) {
            views.clear();
            const size_t count = source[1] >= source[0] ? (source[1] - source[0]) / sizeof(void *) : 0;
            if (count > 256) throw std::bad_alloc();
            views.reserve(count);
            for (size_t i = 0; i < count; ++i) {
                void *pointer = nullptr;
                std::memcpy(&pointer, reinterpret_cast<void *>(source[0] + i * sizeof(void *)), sizeof(pointer));
                views.push_back(map_view(pointer, port));
            }
            const auto first = reinterpret_cast<uintptr_t>(views.data());
            return std::array<uintptr_t, 3>{first, first + views.size() * sizeof(void *),
                first + views.capacity() * sizeof(void *)};
        };
        output.viewports = prepare_vector(native.viewports, false, viewport_views);
        output.map_ports = prepare_vector(native.map_ports, true, map_port_views);
        output.main_viewport = map_view(native.main_viewport, false);
        output.main_map_port = map_view(native.main_map_port, true);
        for (size_t i = 0; i < output.lower.size(); ++i)
            output.lower[i] = map_view(native.lower[i], false);
        // Replace every binding before releasing retired objects. Present
        // traverses this storage, so an old unbound map must neither retain
        // allocation pages nor submit stale foreign drawing.
        std::erase_if(maps, [&](const auto &map) {
            const auto *view = map->view();
            if (!view) return true;
            const auto &views = map->map_port() ? map_port_views : viewport_views;
            if (std::find(views.begin(), views.end(), view) != views.end()) return false;
            if (map->map_port()) return output.main_map_port != view;
            return output.main_viewport != view &&
                std::find(output.lower.begin(), output.lower.end(), view) == output.lower.end();
        });
        if (!graphics) {
#ifdef _WIN32
            graphics.reset(new graphicst{});
#else
            auto *view = static_cast<graphicst *>(::operator new(sizeof(graphicst)));
            std::construct_at(std::addressof(view->texblits));
            graphics.reset(view);
#endif
        }
        // This copies layout, palette and shared texture resources, never
        // pointed-to game cells. Command/output vectors are kept private.
        std::array<unsigned char, sizeof(graphicst::texblits)> texblits{};
        std::memcpy(texblits.data(), &graphics->texblits, texblits.size());
        std::memcpy(graphics.get(), &gps, sizeof(gps));
        std::memcpy(&graphics->texblits, texblits.data(), texblits.size());
        if (begin || resized) {
            uintptr_t first = 0;
            std::memcpy(&first, &graphics->texblits, sizeof(first));
            std::memcpy(reinterpret_cast<unsigned char *>(&graphics->texblits) + sizeof(first),
                &first, sizeof(first));
        }
        output.apply(*graphics);
    }
    void save_draw_state(const graphicst &gps) noexcept {
        const auto current = NativeDfhackOutputBinding::capture(gps);
        output.draw = current.draw; output.clipx = current.clipx; output.clipy = current.clipy;
        output.top = current.top;
        output.display_title = current.display_title; output.background = current.background;
        output.last_background = current.last_background; output.refresh_value = current.refresh_value;
        output.force_full_display = current.force_full_display;
    }
};
static std::recursive_mutex g_native_dfhack_layer_mutex;
static NativeDfhackLayerStorage g_native_dfhack_layer_storage;
static NativeDfhackLayerStorage g_native_dfhack_layer_staging;
static bool g_native_dfhack_layer_staging_pending = false;
static bool g_native_dfhack_layer_commit_pending = false;
static uint64_t g_native_dfhack_layer_revision = 0;
static std::atomic_uint64_t g_native_dfhack_layer_page_revision{0};
static void *g_native_dfhack_layer_page_screen = nullptr;
static void *g_native_dfhack_layer_page_vtable = nullptr;
static thread_local unsigned g_native_dfhack_layer_frame_depth = 0;
static thread_local graphicst *g_native_dfhack_present_graphics = nullptr;

static void native_dfhack_layer_record_artwork_tile(const graphicst *gps,
        const void *pen, int x, int y) noexcept {
    // The drawing scope owns the layer mutex and selects staging.graphics.
    // Its pens therefore move with that frame when staging is published.
    auto &storage = g_native_dfhack_layer_staging;
    if (!pen || !storage.ready || !g_native_dfhack_layer_staging_pending ||
            storage.graphics.get() != gps || x < 0 || y < 0 ||
            x >= storage.dimx || y >= storage.dimy) return;
    const auto *bytes = static_cast<const unsigned char *>(pen);
    NativeDfhackArtworkPen identity;
    identity.ch = bytes[0];
    std::memcpy(&identity.texture, bytes + 4, sizeof(identity.texture));
    const bool frame = identity.ch >= 0xb3 && identity.ch <= 0xda;
    const bool control = identity.ch == '[' || identity.ch == 0x0f ||
        identity.ch == '?' || identity.ch == ']';
    const bool notification = identity.ch == '/' || identity.ch == '\\' ||
        identity.ch == 176 || identity.ch == 177 || identity.ch == 219;
    if (identity.texture <= 0 || !(frame || control || notification)) identity = {};
    auto &pens = storage.planes[static_cast<size_t>(gps->top_in_use)].artwork_pens;
    pens[static_cast<size_t>(x) * storage.dimy + y] = identity;
}

static const std::vector<NativeDfhackArtworkPen> *native_dfhack_layer_artwork_pens(
        const graphicst *gps, bool top) noexcept {
    // Callers retain the layer mutex while borrowing this view. Matching the
    // arrays also supports a shallow read view without selecting another frame.
    if (!gps) return nullptr;
    for (const auto *storage : {&g_native_dfhack_layer_storage, &g_native_dfhack_layer_staging}) {
        if (!storage->ready || storage->dimx != gps->dimx || storage->dimy != gps->dimy ||
                !storage->graphics || storage->graphics->screen != gps->screen ||
                storage->graphics->screen_top != gps->screen_top) continue;
        const auto &pens = storage->planes[static_cast<size_t>(top)].artwork_pens;
        if (pens.size() != static_cast<size_t>(gps->dimx) * gps->dimy) return nullptr;
        return &pens;
    }
    return nullptr;
}

static uint64_t native_dfhack_layer_page_revision() noexcept {
    return g_native_dfhack_layer_page_revision.load(std::memory_order_acquire);
}
static graphicst *native_dfhack_present_graphics() noexcept {
    return g_native_dfhack_present_graphics;
}
static graphicst **native_dfhack_graphics_slot() noexcept {
#ifdef _WIN32
    const auto module = GetModuleHandleW(L"dfhack.dll");
    return module ? reinterpret_cast<graphicst **>(GetProcAddress(module,
        "?gps@global@df@@3PEAUgraphic@2@EA")) : nullptr;
#else
    return static_cast<graphicst **>(dlsym(RTLD_DEFAULT, "_ZN2df6global3gpsE"));
#endif
}
static NativeDfhackOutputBinding native_dfhack_layer_source_binding(const graphicst &gps) noexcept;
static void native_dfhack_layer_save_active() noexcept;
static void native_dfhack_layer_bind_active() noexcept;
static void native_dfhack_layer_abort_active() noexcept;
static bool native_dfhack_prepare_staging(bool begin = false) {
    const auto *gps = native_graphics();
    if (!gps) return false;
    native_dfhack_layer_save_active();
    const auto native = native_dfhack_layer_source_binding(*gps);
    const bool start = begin || !g_native_dfhack_layer_staging_pending;
    auto &s = g_native_dfhack_layer_staging;
    try {
        s.prepare(*gps, native, start);
    } catch (...) {
        native_dfhack_layer_abort_active();
        throw;
    }
    native_dfhack_layer_bind_active();
    if (start) clear_native_dfhack_text_buffer(s.graphics.get());
    s.page_revision = native_dfhack_layer_page_revision();
    g_native_dfhack_layer_staging_pending = true;
    if (start) g_native_dfhack_layer_commit_pending = false;
    return true;
}
static void native_dfhack_publish_staging() noexcept {
    if (!g_native_dfhack_layer_staging_pending || !g_native_dfhack_layer_staging.ready) return;
    auto &s = g_native_dfhack_layer_staging;
    for (auto &map : s.maps) map->collect_writes();
    s.revision = ++g_native_dfhack_layer_revision;
    std::swap(g_native_dfhack_layer_storage, s);
    g_native_dfhack_layer_staging_pending = false;
    g_native_dfhack_layer_commit_pending = false;
    native_dfhack_layer_committed();
}

class NativeDfhackForegroundScope {
    bool previous_ = false;
public:
    inline static thread_local bool active = false;
    NativeDfhackForegroundScope() noexcept : previous_(active) { active = true; NativeUiReadScope::invalidate_reads(); }
    ~NativeDfhackForegroundScope() { active = previous_; NativeUiReadScope::invalidate_reads(); }
};

class NativeDfhackLayerWriteScope {
    std::optional<TranslationStateScope> translation_;
    std::unique_lock<std::recursive_mutex> lock_;
    graphicst *gps_ = nullptr;
    graphicst **slot_ = nullptr;
    graphicst *saved_ = nullptr;
    graphicst *native_ = nullptr;
    NativeDfhackOutputBinding native_output_;
    std::array<unsigned char, sizeof(graphicst::texblits)> native_texblits_{};
    NativeDfhackLayerWriteScope *previous_ = nullptr;
    bool installed_ = false;
    bool private_bound_ = false;
    unsigned paused_ = 0;
    bool native_layout_dirty_ = false;
    inline static thread_local NativeDfhackLayerWriteScope *active_ = nullptr;
    friend class NativeDfhackNativeLayerScope;
    friend NativeDfhackOutputBinding native_dfhack_layer_source_binding(const graphicst &) noexcept;
    friend void native_dfhack_layer_save_active() noexcept;
    friend void native_dfhack_layer_bind_active() noexcept;
    friend void native_dfhack_layer_abort_active() noexcept;

    void save_private() noexcept {
        if (!private_bound_) return;
        auto &storage = g_native_dfhack_layer_staging;
        storage.save_draw_state(*native_);
        storage.output.apply(*gps_);
        // A native push may reallocate this MSVC vector. Keep its current
        // header with the private frame before restoring the native owner.
        std::memcpy(&gps_->texblits, &native_->texblits, sizeof(gps_->texblits));
    }
    void bind_private() noexcept {
        gps_ = g_native_dfhack_layer_staging.graphics.get();
        if (!gps_) return;
        const auto redraw = native_->force_full_display_count;
        g_native_dfhack_layer_staging.output.apply(*native_);
        // Redraw requests schedule the host frame rather than belonging to
        // either output buffer. Keep Lua/C++ requests and native consumption
        // live instead of restoring a retained private frame's old count.
        native_->force_full_display_count = redraw;
        std::memcpy(&native_->texblits, &gps_->texblits, sizeof(gps_->texblits));
        // The private read view is a partial ABI structure, not a replacement
        // for the full native object used by DFHack's generated accessors.
        *slot_ = native_;
        private_bound_ = true;
        NativeUiReadScope::invalidate_reads();
    }
    void restore_native() noexcept {
        if (!private_bound_) return;
        const auto redraw = native_->force_full_display_count;
        native_output_.apply(*native_);
        native_->force_full_display_count = redraw;
        std::memcpy(&native_->texblits, native_texblits_.data(), native_texblits_.size());
        private_bound_ = false;
        NativeUiReadScope::invalidate_reads();
    }
    void abort() noexcept {
        restore_native();
        *slot_ = saved_;
        installed_ = false;
        active_ = previous_;
        g_native_dfhack_layer_staging_pending = false;
        g_native_dfhack_layer_commit_pending = false;
    }
public:
    explicit NativeDfhackLayerWriteScope(bool enter = true, bool synchronize = false) noexcept {
        if (!enter || (active_ && !active_->paused_)) return;
        try {
            translation_.emplace();
            lock_ = std::unique_lock<std::recursive_mutex>(g_native_dfhack_layer_mutex);
            slot_ = native_dfhack_graphics_slot();
            if (!slot_) return;
            native_ = native_graphics();
            if (!native_) return;
            const auto &staging = g_native_dfhack_layer_staging;
            if ((synchronize || !g_native_dfhack_layer_staging_pending ||
                    staging.dimx != native_->dimx || staging.dimy != native_->dimy) &&
                    !native_dfhack_prepare_staging()) return;
            gps_ = g_native_dfhack_layer_staging.graphics.get();
            native_output_ = NativeDfhackOutputBinding::capture(*native_);
            std::memcpy(native_texblits_.data(), &native_->texblits, native_texblits_.size());
            saved_ = *slot_;
            previous_ = active_; active_ = this; installed_ = true;
            bind_private();
        } catch (...) { gps_ = nullptr; }
    }
    ~NativeDfhackLayerWriteScope() {
        if (!installed_) return;
        save_private();
        restore_native();
        *slot_ = saved_; active_ = previous_;
        // An actual render may be called from inside doUpdate. Its storage
        // cannot become committed while that outer write still selects it.
        if (!active_ && !g_native_dfhack_layer_frame_depth &&
                g_native_dfhack_layer_commit_pending) native_dfhack_publish_staging();
    }
    bool valid() const noexcept { return installed_ || (active_ && !active_->paused_); }
    static bool active(const graphicst *gps) noexcept {
        return active_ && !active_->paused_ &&
            (active_->gps_ == gps || native_graphics() == gps);
    }
    static bool in_progress() noexcept { return active_ != nullptr; }
    static graphicst *graphics() noexcept {
        native_dfhack_layer_save_active();
        return active_ && !active_->paused_ ? active_->gps_ : native_graphics();
    }
};

static NativeDfhackOutputBinding native_dfhack_layer_source_binding(const graphicst &gps) noexcept {
    const auto *scope = NativeDfhackLayerWriteScope::active_;
    return scope && !scope->paused_ ? scope->native_output_
                                  : NativeDfhackOutputBinding::capture(gps);
}
static void native_dfhack_layer_save_active() noexcept {
    auto *scope = NativeDfhackLayerWriteScope::active_;
    if (scope && !scope->paused_) scope->save_private();
}
static void native_dfhack_layer_bind_active() noexcept {
    auto *scope = NativeDfhackLayerWriteScope::active_;
    if (scope && !scope->paused_) scope->bind_private();
}
static void native_dfhack_layer_abort_active() noexcept {
    auto *scope = NativeDfhackLayerWriteScope::active_;
    if (scope && !scope->paused_) scope->abort();
}

static graphicst *native_dfhack_graphics() noexcept {
    return NativeDfhackLayerWriteScope::graphics();
}

class NativeDfhackLayerUpdateScope {
    NativeDfhackLayerWriteScope write_;
public:
    explicit NativeDfhackLayerUpdateScope(bool enter = true) noexcept : write_(enter, true) {}
    bool valid() const noexcept { return write_.valid(); }
};

class NativeDfhackFrameTransactionScope {
    std::optional<TranslationStateScope> translation_;
    std::unique_lock<std::recursive_mutex> lock_;
    bool entered_ = false, outer_ = false;
public:
    explicit NativeDfhackFrameTransactionScope(bool enter = true, void *screen = nullptr) noexcept {
        if (!enter) return;
        if (g_native_dfhack_layer_frame_depth) {
            ++g_native_dfhack_layer_frame_depth; entered_ = true; return;
        }
        try {
            translation_.emplace();
            lock_ = std::unique_lock<std::recursive_mutex>(g_native_dfhack_layer_mutex);
            if (screen) {
                void *vtable = nullptr;
                std::memcpy(&vtable, screen, sizeof(vtable));
                if (screen != g_native_dfhack_layer_page_screen ||
                        vtable != g_native_dfhack_layer_page_vtable) {
                    g_native_dfhack_layer_page_screen = screen;
                    g_native_dfhack_layer_page_vtable = vtable;
                    g_native_dfhack_layer_page_revision.fetch_add(1, std::memory_order_release);
                    g_native_dfhack_layer_staging_pending = false;
                }
            }
            if (!native_dfhack_prepare_staging(g_native_dfhack_layer_commit_pending)) return;
            g_native_dfhack_layer_frame_depth = 1; entered_ = outer_ = true;
        } catch (...) {}
    }
    ~NativeDfhackFrameTransactionScope() {
        if (!entered_) return;
        --g_native_dfhack_layer_frame_depth;
        if (!outer_) return;
        if (NativeDfhackLayerWriteScope::in_progress()) g_native_dfhack_layer_commit_pending = true;
        else native_dfhack_publish_staging();
    }
    bool valid() const noexcept { return entered_; }
};

class NativeDfhackNativeLayerScope {
    NativeDfhackLayerWriteScope *scope_ = nullptr;
    bool synchronize_ = false;
public:
    explicit NativeDfhackNativeLayerScope(bool synchronize = true) noexcept
        : scope_(NativeDfhackLayerWriteScope::active_), synchronize_(synchronize) {
        if (!scope_) return;
        if (synchronize_) {
            scope_->native_layout_dirty_ = true;
            native_dfhack_gpu_suspend();
        }
        if (!scope_->paused_++) {
            scope_->save_private();
            scope_->restore_native();
            *scope_->slot_ = scope_->native_;
        }
    }
    ~NativeDfhackNativeLayerScope() {
        if (!scope_) return;
        if (!--scope_->paused_) {
            try {
                // Native rendering can resize or replace its buffers. These
                // current bindings, including its vector, are restored when
                // the surrounding foreign segment eventually returns.
                scope_->native_output_ = NativeDfhackOutputBinding::capture(*scope_->native_);
                std::memcpy(scope_->native_texblits_.data(), &scope_->native_->texblits,
                    scope_->native_texblits_.size());
                if (scope_->native_layout_dirty_ && !native_dfhack_prepare_staging())
                    throw std::bad_alloc();
                scope_->bind_private();
            } catch (...) {
                if (scope_->installed_) scope_->abort();
            }
            scope_->native_layout_dirty_ = false;
        }
        if (synchronize_) native_dfhack_gpu_resume();
    }
};

static bool native_dfhack_layer_write_active(const graphicst *gps) noexcept {
    return NativeDfhackLayerWriteScope::active(gps);
}
static bool native_dfhack_layer_ui_written(const graphicst *gps, int x, int y) noexcept {
    const bool writing = native_dfhack_layer_write_active(gps);
    const auto &s = writing ? g_native_dfhack_layer_staging : g_native_dfhack_layer_storage;
    if (!writing && s.graphics.get() != gps) return false;
    if (!s.ready || !gps || x < 0 || y < 0 || x >= s.dimx || y >= s.dimy) return false;
    const size_t at = static_cast<size_t>(x) * s.dimy + y;
    if (s.written[at]) return true;
    for (const auto &p : s.planes) {
        if (p.screen[at * 8] || p.flags[at]) return true;
        for (const auto &t : p.textures) if (t[at]) return true;
    }
    return false;
}
static void native_dfhack_layer_note_ui_write(const graphicst *gps, int x, int y) noexcept {
    auto &s = g_native_dfhack_layer_staging;
    if (native_dfhack_layer_write_active(gps) && x >= 0 && y >= 0 && x < s.dimx && y < s.dimy)
        s.written[static_cast<size_t>(x) * s.dimy + y] |= uint8_t{1} << static_cast<size_t>(gps->top_in_use);
}

class NativeDfhackLayerPresentScope {
    TranslationStateScope translation_;
    std::unique_lock<std::recursive_mutex> lock_{g_native_dfhack_layer_mutex};
    graphicst *gps_ = nullptr;
    graphicst *previous_ = nullptr;
    std::optional<NativeDfhackForegroundScope> foreground_;
public:
    NativeDfhackLayerPresentScope() noexcept {
        auto &s = g_native_dfhack_layer_storage;
        auto *gps = native_graphics();
        if (!gps) return;
        // SDL-only callbacks can publish before any foreign grid render.
        // Give them an empty committed input without publishing staging.
        if (!s.ready || s.dimx != gps->dimx || s.dimy != gps->dimy ||
                s.page_revision != native_dfhack_layer_page_revision()) {
            try {
                s.prepare(*gps, NativeDfhackOutputBinding::capture(*gps), true);
                clear_native_dfhack_text_buffer(s.graphics.get());
                s.page_revision = native_dfhack_layer_page_revision();
                s.revision = ++g_native_dfhack_layer_revision;
            } catch (...) { return; }
        }
        if (!s.graphics) return;
        gps_ = s.graphics.get(); previous_ = g_native_dfhack_present_graphics;
        g_native_dfhack_present_graphics = gps_; foreground_.emplace();
    }
    ~NativeDfhackLayerPresentScope() {
        if (gps_) g_native_dfhack_present_graphics = previous_;
    }
    bool valid() const noexcept { return gps_ != nullptr; }
    graphicst *graphics() const noexcept { return gps_; }
    const auto &maps() const noexcept { return g_native_dfhack_layer_storage.maps; }
};

static void clear_native_dfhack_layers() noexcept {
    try {
        TranslationStateScope translation;
        std::lock_guard<std::recursive_mutex> lock(g_native_dfhack_layer_mutex);
        g_native_dfhack_layer_storage = {};
        g_native_dfhack_layer_staging = {};
        g_native_dfhack_layer_staging_pending = false;
        g_native_dfhack_layer_commit_pending = false;
        g_native_dfhack_layer_page_screen = g_native_dfhack_layer_page_vtable = nullptr;
        g_native_dfhack_layer_page_revision.fetch_add(1, std::memory_order_release);
    } catch (...) {}
}
