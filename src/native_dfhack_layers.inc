// Every DFHack drawing path uses private output buffers on the real graphicst.
// Lua globals, retained native handles and C++ gps therefore share one drawing
// state. Native parent segments restore the game's own output binding.
using NativeDfhackLayerTexture = std::remove_pointer_t<decltype(graphicst::screentexpos)>;
static void native_dfhack_gpu_suspend() noexcept;
static void native_dfhack_gpu_resume() noexcept;
static void native_dfhack_layer_committed() noexcept;
static bool native_dfhack_text_capture_has_content(const graphicst *gps) noexcept;
static bool native_dfhack_layer_write_active(const graphicst *gps) noexcept;
struct NativeDfhackTextFrame;
static std::shared_ptr<const NativeDfhackTextFrame> capture_native_dfhack_text_frame(
    const graphicst *source, const graphicst *copy);
static std::shared_ptr<const NativeDfhackTextFrame> use_native_dfhack_text_frame(
    std::shared_ptr<const NativeDfhackTextFrame> frame);

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
    void apply(graphicst &gps, bool include_map_output = true) const noexcept {
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
        if (include_map_output) {
            std::memcpy(&gps.viewport, viewports.data(), sizeof(viewports));
            std::memcpy(&gps.map_port, map_ports.data(), sizeof(map_ports));
            gps.main_viewport = reinterpret_cast<decltype(gps.main_viewport)>(main_viewport);
            gps.main_map_port = reinterpret_cast<decltype(gps.main_map_port)>(main_map_port);
            for (size_t i = 0; i < lower.size(); ++i)
                gps.lower_viewport[i] = reinterpret_cast<decltype(gps.main_viewport)>(lower[i]);
        }
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
    std::vector<size_t> dirty_offsets_;
    bool has_writes_ = false;
    bool dirty_offsets_valid_ = false;
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
        candidates_.assign(static_cast<size_t>(dimx_) * dimy_, 0);
#ifdef _WIN32
        pages_.resize(bytes_ / 4096);
        dirty_offsets_.reserve(pages_.size());
        data_ = static_cast<unsigned char *>(VirtualAlloc(nullptr, bytes_,
            MEM_RESERVE | MEM_COMMIT | MEM_WRITE_WATCH, PAGE_READWRITE));
        if (!data_) throw std::bad_alloc();
#else
        fallback_.resize(bytes_); data_ = fallback_.data();
#endif
        auto *bytes = reinterpret_cast<unsigned char *>(object_.data());
        for (size_t i = 0; i < fields_; ++i) {
            void *array = data_ + i * stride_;
            std::memcpy(bytes + prefix_ + i * 8, &array, 8);
            // Renderer history also belongs to this private map object.
            std::memcpy(bytes + prefix_ + (fields_ + i) * 8, &array, 8);
        }
    }
    NativeDfhackMapLayer(const NativeDfhackMapLayer &source)
        : source_(source.source_), map_port_(source.map_port_),
          dimx_(source.dimx_), dimy_(source.dimy_), prefix_(source.prefix_),
          fields_(source.fields_), stride_(source.stride_), object_(source.object_),
          bytes_(source.bytes_), candidates_(source.candidates_),
          dirty_offsets_(source.dirty_offsets_), has_writes_(source.has_writes_),
          dirty_offsets_valid_(source.dirty_offsets_valid_) {
        if (!source.data_) return;
#ifdef _WIN32
        pages_.resize(bytes_ / 4096);
        dirty_offsets_.reserve(pages_.size());
        data_ = static_cast<unsigned char *>(VirtualAlloc(nullptr, bytes_,
            MEM_RESERVE | MEM_COMMIT | MEM_WRITE_WATCH, PAGE_READWRITE));
        if (!data_) throw std::bad_alloc();
        if (dirty_offsets_valid_) {
            for (const size_t offset : dirty_offsets_)
                std::memcpy(data_ + offset, source.data_ + offset,
                    std::min(size_t{4096}, bytes_ - offset));
        } else if (has_writes_) {
            std::memcpy(data_, source.data_, bytes_);
        }
#else
        fallback_.assign(source.data_, source.data_ + bytes_);
        data_ = fallback_.data();
#endif
        auto *object = reinterpret_cast<unsigned char *>(object_.data());
        for (size_t field = 0; field < fields_; ++field) {
            void *array = data_ + field * stride_;
            std::memcpy(object + prefix_ + field * sizeof(void *), &array, sizeof(array));
            std::memcpy(object + prefix_ + (fields_ + field) * sizeof(void *), &array, sizeof(array));
        }
    }
    NativeDfhackMapLayer &operator=(const NativeDfhackMapLayer &) = delete;
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
        dirty_offsets_valid_ = false;
        dirty_offsets_.clear();
        if (GetWriteWatch(0, data_, bytes_, pages_.data(), &count, &granularity)) {
            has_writes_ = true;
            std::fill(candidates_.begin(), candidates_.end(), 1);
            return;
        }
        dirty_offsets_valid_ = true;
        has_writes_ = has_writes_ || count != 0;
        for (size_t page = 0; page < count; ++page) {
            const size_t offset = static_cast<unsigned char *>(pages_[page]) - data_;
            dirty_offsets_.push_back(offset);
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
        dirty_offsets_.clear();
        dirty_offsets_valid_ = false;
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
    bool borrowed_commands = false;
    void operator()(graphicst *graphics) const noexcept {
        // A frozen/paint view points into its frame's owned POD command bytes.
        // Native consumption only reads them; its vector destructor must not
        // free that separate owner through the host's allocator.
        if (graphics && borrowed_commands)
            std::memset(&graphics->texblits, 0, sizeof(graphics->texblits));
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
    uint64_t translation_fingerprint = 0;
    bool translation_has_content = false;
    bool translation_content_ready = false;
    std::shared_ptr<const NativeDfhackTextFrame> text_frame;
    std::vector<unsigned char> command_bytes;

    std::shared_ptr<NativeDfhackLayerStorage> snapshot() const {
        if (!ready || !graphics) return {};
        auto copy = std::make_shared<NativeDfhackLayerStorage>();
        copy->planes = planes;
        copy->refresh = refresh;
        copy->written = written;
        copy->dimx = dimx; copy->dimy = dimy;
        copy->revision = revision; copy->page_revision = page_revision;
        copy->ready = true;
        copy->translation_fingerprint = translation_fingerprint;
        copy->translation_has_content = translation_has_content;
        copy->translation_content_ready = translation_content_ready;
#ifdef _WIN32
        copy->graphics = decltype(graphics)(new graphicst{}, NativeDfhackLayerGraphicsDeleter{true});
#else
        auto *view = static_cast<graphicst *>(::operator new(sizeof(graphicst)));
        std::construct_at(std::addressof(view->texblits));
        copy->graphics = decltype(graphics)(view, NativeDfhackLayerGraphicsDeleter{true});
#endif
        std::memcpy(copy->graphics.get(), graphics.get(), sizeof(graphicst));
        std::array<uintptr_t, 3> commands{};
        std::memcpy(commands.data(), &graphics->texblits, sizeof(commands));
        if (commands[1] < commands[0] || commands[2] < commands[1] ||
                commands[1] - commands[0] > size_t{256} * 1024 * 1024 ||
                (commands[1] - commands[0]) % 12) throw std::bad_alloc();
        if (commands[1] != commands[0])
            copy->command_bytes.assign(reinterpret_cast<const unsigned char *>(commands[0]),
                reinterpret_cast<const unsigned char *>(commands[1]));
        const uintptr_t command_begin = copy->command_bytes.empty() ? 0 :
            reinterpret_cast<uintptr_t>(copy->command_bytes.data());
        const std::array<uintptr_t, 3> command_view{command_begin,
            command_begin + copy->command_bytes.size(), command_begin + copy->command_bytes.size()};
        std::memcpy(&copy->graphics->texblits, command_view.data(), sizeof(command_view));
        copy->maps.reserve(maps.size());
        for (const auto &map : maps)
            copy->maps.push_back(map && map->any_content()
                ? std::make_unique<NativeDfhackMapLayer>(*map) : nullptr);
        const auto mapped = [&](void *view) -> void * {
            if (!view) return nullptr;
            for (size_t index = 0; index < maps.size(); ++index)
                if (maps[index] && maps[index]->view() == view)
                    return copy->maps[index] ? copy->maps[index]->view() : nullptr;
            return nullptr;
        };
        for (void *view : viewport_views) copy->viewport_views.push_back(mapped(view));
        for (void *view : map_port_views) copy->map_port_views.push_back(mapped(view));
        copy->output = NativeDfhackOutputBinding::capture(*graphics);
        for (size_t index = 0; index < copy->planes.size(); ++index) {
            auto &plane = copy->planes[index]; const size_t base = index * 7;
            copy->output.pointers[base] = plane.screen.data();
            for (size_t texture = 0; texture < plane.textures.size(); ++texture)
                copy->output.pointers[base + texture + 1] = plane.textures[texture].data();
            copy->output.pointers[base + 6] = plane.flags.data();
        }
        const auto vector_view = [](const auto &values) {
            const uintptr_t first = reinterpret_cast<uintptr_t>(values.data());
            return std::array<uintptr_t, 3>{first, first + values.size() * sizeof(void *),
                first + values.capacity() * sizeof(void *)};
        };
        copy->output.viewports = vector_view(copy->viewport_views);
        copy->output.map_ports = vector_view(copy->map_port_views);
        copy->output.main_viewport = mapped(copy->output.main_viewport);
        copy->output.main_map_port = mapped(copy->output.main_map_port);
        for (auto &view : copy->output.lower) view = mapped(view);
        copy->output.limit = copy->planes[0].screen.data() + copy->planes[0].screen.size();
        copy->output.top_limit = copy->planes[1].screen.data() + copy->planes[1].screen.size();
        copy->output.refresh = copy->refresh.data();
        copy->output.apply(*copy->graphics);
        copy->text_frame = capture_native_dfhack_text_frame(graphics.get(), copy->graphics.get());
        return copy;
    }

    void cache_translation_input() noexcept {
        translation_content_ready = false;
        if (!ready || !graphics) return;
        uint64_t fingerprint = 14695981039346656037ULL;
        bool grid_content = false;
        size_t grid_bytes = 0;
        const auto nonzero = [](const void *data, size_t size) {
            const auto *at = static_cast<const unsigned char *>(data);
            size_t offset = 0;
            for (; size - offset >= sizeof(uint64_t); offset += sizeof(uint64_t)) {
                uint64_t word = 0;
                std::memcpy(&word, at + offset, sizeof(word));
                if (word) return true;
            }
            for (; offset < size; ++offset) if (at[offset]) return true;
            return false;
        };
        const auto inspect = [&](const void *data, size_t size) {
            grid_bytes += size;
            if (!grid_content) grid_content = nonzero(data, size);
        };
        for (const auto &plane : planes) {
            inspect(plane.screen.data(), plane.screen.size());
            inspect(plane.flags.data(), plane.flags.size() * sizeof(plane.flags[0]));
            for (const auto &textures : plane.textures)
                inspect(textures.data(), textures.size() * sizeof(textures[0]));
            for (const auto &pen : plane.artwork_pens) {
                grid_bytes += sizeof(pen.texture) + sizeof(pen.ch);
                grid_content = grid_content || pen.texture != 0 || pen.ch != 0;
            }
        }
        const auto bytes = [&](const void *data, size_t size) {
            const auto *at = static_cast<const unsigned char *>(data);
            for (size_t i = 0; i < size; ++i) {
                fingerprint ^= at[i];
                fingerprint *= 1099511628211ULL;
            }
        };
        const auto value = [&](const auto &field) { bytes(&field, sizeof(field)); };
        if (grid_content) {
            for (const auto &plane : planes) {
                bytes(plane.screen.data(), plane.screen.size());
                bytes(plane.flags.data(), plane.flags.size() * sizeof(plane.flags[0]));
                for (const auto &textures : plane.textures)
                    bytes(textures.data(), textures.size() * sizeof(textures[0]));
                for (const auto &pen : plane.artwork_pens) {
                    value(pen.texture);
                    value(pen.ch);
                }
            }
        } else {
            // Each zero byte multiplies FNV by its prime. Advance the exact
            // same fingerprint in logarithmic time after the word-sized scan.
            uint64_t factor = 1099511628211ULL;
            for (size_t count = grid_bytes; count; count >>= 1) {
                if (count & 1) fingerprint *= factor;
                factor *= factor;
            }
        }
        // Typed sources can exist without visible glyphs. Their empty FNV
        // value is still nonzero, so only actual current captures prove text.
        const bool text_content = native_dfhack_text_capture_has_content(graphics.get());
        const auto text_key = native_dfhack_text_capture_key(graphics.get());
        value(text_key);
        bool content = grid_content || text_content;
        content = content || std::any_of(written.begin(), written.end(),
            [](auto byte) { return byte != 0; });
        content = content || std::any_of(maps.begin(), maps.end(),
            [](const auto &map) { return map && map->any_content(); });
        // Commands and map writes are conservative content evidence, but
        // neither was part of the logical-grid translation key.
        std::array<uintptr_t, 2> commands{};
        std::memcpy(commands.data(), &graphics->texblits, sizeof(commands));
        content = content || commands[0] != commands[1];
        translation_fingerprint = fingerprint ? fingerprint : 1;
        translation_has_content = content;
        translation_content_ready = true;
    }

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
            translation_content_ready = false;
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
static std::atomic<std::shared_ptr<const NativeDfhackLayerStorage>> g_native_dfhack_layer_published;
static std::atomic_bool g_native_dfhack_layer_notification_pending{false};
static std::atomic<uint64_t> g_native_dfhack_layer_retirement{0};
static constexpr int64_t kNativeDfhackNoRenderRefresh = std::numeric_limits<int64_t>::min();
static std::atomic<int64_t> g_native_dfhack_render_refresh{kNativeDfhackNoRenderRefresh};
static std::atomic<int16_t> g_native_dfhack_render_force{0};
// The update thread can hold the private writer across an entire DFHack tick.
// Publish the restored native header before entering that writer so display
// never falls back to the preceding frame's swapped screen/viewport pointers.
// This short handoff is independent of the private writer and translation locks.
static std::mutex g_native_dfhack_display_source_mutex;
alignas(graphicst) static std::array<unsigned char, sizeof(graphicst)> g_native_dfhack_display_source{};
static bool g_native_dfhack_display_source_ready = false;

static void native_dfhack_publish_display_source(const graphicst &graphics) noexcept {
    std::lock_guard<std::mutex> lock(g_native_dfhack_display_source_mutex);
    std::memcpy(g_native_dfhack_display_source.data(), &graphics, sizeof(graphicst));
    g_native_dfhack_display_source_ready = true;
}
static bool native_dfhack_copy_display_source(graphicst &graphics) noexcept {
    std::lock_guard<std::mutex> lock(g_native_dfhack_display_source_mutex);
    if (!g_native_dfhack_display_source_ready) return false;
    std::memcpy(&graphics, g_native_dfhack_display_source.data(), sizeof(graphicst));
    return true;
}
static void native_dfhack_invalidate_display_source() noexcept {
    std::lock_guard<std::mutex> lock(g_native_dfhack_display_source_mutex);
    g_native_dfhack_display_source_ready = false;
}

static uint64_t g_native_dfhack_layer_retired = 0;
static bool g_native_dfhack_layer_staging_pending = false;
static bool g_native_dfhack_layer_commit_pending = false;
static uint64_t g_native_dfhack_layer_revision = 0;
static std::atomic_uint64_t g_native_dfhack_layer_page_revision{0};
static void *g_native_dfhack_layer_page_screen = nullptr;
static void *g_native_dfhack_layer_page_vtable = nullptr;
static thread_local unsigned g_native_dfhack_layer_frame_depth = 0;
static thread_local graphicst *g_native_dfhack_present_graphics = nullptr;
static thread_local const NativeDfhackLayerStorage *g_native_dfhack_read_storage = nullptr;
static thread_local bool g_native_dfhack_callback_writes_pending = false;

static void native_dfhack_queue_render_schedule(int32_t refresh, int16_t force,
        int16_t initial_force) noexcept {
    g_native_dfhack_render_refresh.store(refresh, std::memory_order_release);
    // The display header borrows the producer's existing redraw countdown.
    // Returning that unchanged value as a new request can re-arm a redraw
    // the producer has already consumed while SDL was painting. Only a
    // request raised during this display belongs in the feedback queue.
    if (force <= initial_force) return;
    auto pending = g_native_dfhack_render_force.load(std::memory_order_relaxed);
    while (pending < force && !g_native_dfhack_render_force.compare_exchange_weak(
            pending, force, std::memory_order_release, std::memory_order_relaxed)) {}
}
static void native_dfhack_apply_render_schedule(graphicst &graphics) noexcept {
    // Called under native output ownership. SDL never waits for that owner
    // merely to return its refresh stamp and outstanding redraw requests.
    const auto refresh = g_native_dfhack_render_refresh.exchange(
        kNativeDfhackNoRenderRefresh, std::memory_order_acq_rel);
    if (refresh != kNativeDfhackNoRenderRefresh)
        graphics.refresh_buffer_val = static_cast<int32_t>(refresh);
    const auto force = g_native_dfhack_render_force.exchange(0, std::memory_order_acq_rel);
    if (force > 0)
        graphics.force_full_display_count = std::max(graphics.force_full_display_count, force);
}

static std::shared_ptr<const NativeDfhackLayerStorage> native_dfhack_published_frame() noexcept {
    return g_native_dfhack_layer_published.load(std::memory_order_acquire);
}
static const NativeDfhackLayerStorage *native_dfhack_layer_read_storage() noexcept {
    return g_native_dfhack_read_storage;
}
class NativeDfhackLayerFrameReadScope {
    std::shared_ptr<const NativeDfhackLayerStorage> frame_;
    const NativeDfhackLayerStorage *previous_ = nullptr;
    std::shared_ptr<const NativeDfhackTextFrame> previous_text_;
    graphicst *previous_graphics_ = nullptr;
public:
    explicit NativeDfhackLayerFrameReadScope(
            std::shared_ptr<const NativeDfhackLayerStorage> frame = {})
        : frame_(frame ? std::move(frame) : native_dfhack_published_frame()),
          previous_(g_native_dfhack_read_storage),
          previous_graphics_(g_native_graphics_read_view) {
        g_native_dfhack_read_storage = frame_.get();
        if (frame_ && frame_->graphics)
            g_native_graphics_read_view = frame_->graphics.get();
        previous_text_ = use_native_dfhack_text_frame(frame_ ? frame_->text_frame : nullptr);
    }
    ~NativeDfhackLayerFrameReadScope() {
        use_native_dfhack_text_frame(std::move(previous_text_));
        g_native_graphics_read_view = previous_graphics_;
        g_native_dfhack_read_storage = previous_;
    }
    const auto &frame() const noexcept { return frame_; }
    const NativeDfhackLayerStorage *storage() const noexcept { return frame_.get(); }
};
class NativeDfhackOwnerReadScope {
    graphicst *previous_ = nullptr;
    const NativeDfhackLayerStorage *previous_storage_ = nullptr;
    std::shared_ptr<const NativeDfhackTextFrame> previous_text_;
public:
    NativeDfhackOwnerReadScope()
        : previous_(g_native_graphics_read_view),
          previous_storage_(g_native_dfhack_read_storage),
          previous_text_(use_native_dfhack_text_frame({})) {
        g_native_graphics_read_view = nullptr;
        g_native_dfhack_read_storage = nullptr;
    }
    ~NativeDfhackOwnerReadScope() {
        g_native_graphics_read_view = previous_;
        g_native_dfhack_read_storage = previous_storage_;
        use_native_dfhack_text_frame(std::move(previous_text_));
    }
};
static void native_dfhack_retire_writer_storage() {
    const auto retirement = g_native_dfhack_layer_retirement.load(std::memory_order_acquire);
    if (retirement == g_native_dfhack_layer_retired) return;
    g_native_dfhack_layer_storage = {};
    g_native_dfhack_layer_staging = {};
    g_native_dfhack_layer_staging_pending = false;
    g_native_dfhack_layer_commit_pending = false;
    g_native_dfhack_layer_page_screen = g_native_dfhack_layer_page_vtable = nullptr;
    g_native_dfhack_layer_retired = retirement;
}
static void native_dfhack_notify_commit() noexcept {
    if (g_native_dfhack_layer_notification_pending.exchange(false, std::memory_order_acq_rel))
        native_dfhack_layer_committed();
}
// Native buffer ownership must be serialized before the real graphicst can
// borrow private output pointers across a DFHack update or render callback.
static std::atomic_bool g_native_dfhack_graphics_ownership_ready{false};

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
    // Readers pin a complete owned frame; writers use only their own scratch.
    if (!gps) return nullptr;
    const auto *storage = native_dfhack_layer_read_storage();
    if (!storage) {
        if (!native_dfhack_layer_write_active(gps)) return nullptr;
        storage = &g_native_dfhack_layer_staging;
    }
    if (!storage->ready || storage->dimx != gps->dimx || storage->dimy != gps->dimy ||
            !storage->graphics || storage->graphics->screen != gps->screen ||
            storage->graphics->screen_top != gps->screen_top) return nullptr;
    const auto &pens = storage->planes[static_cast<size_t>(top)].artwork_pens;
    if (pens.size() != static_cast<size_t>(gps->dimx) * gps->dimy) return nullptr;
    return &pens;
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
    const auto *gps = native_graphics_owner();
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
    if (s.page_revision != native_dfhack_layer_page_revision() ||
            g_native_dfhack_layer_retired !=
                g_native_dfhack_layer_retirement.load(std::memory_order_acquire)) return;
    try {
        for (auto &map : s.maps) map->collect_writes();
        s.cache_translation_input();
        s.revision = ++g_native_dfhack_layer_revision;
        auto frame = s.snapshot();
        if (!frame) return;
        g_native_dfhack_layer_published.store(std::move(frame), std::memory_order_release);
        std::swap(g_native_dfhack_layer_storage, s);
        g_native_dfhack_layer_staging_pending = false;
        g_native_dfhack_layer_commit_pending = false;
        g_native_dfhack_callback_writes_pending = false;
        g_native_dfhack_layer_notification_pending.store(true, std::memory_order_release);
    } catch (...) {
        // Keep the last owned publication if this frame could not be frozen.
    }
}

class NativeDfhackForegroundScope {
    bool previous_ = false;
public:
    inline static thread_local bool active = false;
    NativeDfhackForegroundScope() noexcept : previous_(active) { active = true; NativeUiReadScope::invalidate_reads(); }
    ~NativeDfhackForegroundScope() { active = previous_; NativeUiReadScope::invalidate_reads(); }
};

class NativeDfhackLayerWriteScope {
#ifndef _WIN32
    std::optional<TranslationStateScope> native_translation_;
#endif
    std::unique_lock<std::recursive_mutex> lock_;
    std::optional<NativeDfhackOwnerReadScope> native_read_;
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
        native_dfhack_apply_render_schedule(*native_);
        native_dfhack_publish_display_source(*native_);
        *slot_ = saved_;
        installed_ = false;
        active_ = previous_;
        g_native_dfhack_layer_staging_pending = false;
        g_native_dfhack_layer_commit_pending = false;
    }
public:
    explicit NativeDfhackLayerWriteScope(bool enter = true, bool synchronize = false,
            bool write_intent = true) noexcept {
        if (!enter || g_native_process_exiting.load(std::memory_order_acquire)) return;
        if (active_ && !active_->paused_) {
            if (write_intent) g_native_dfhack_callback_writes_pending = true;
            return;
        }
        try {
#ifndef _WIN32
            // Linux's native renderer still reads the real graphicst. Its
            // existing T -> M boundary protects those shared pointer fields.
            native_translation_.emplace();
#endif
            lock_ = std::unique_lock<std::recursive_mutex>(g_native_dfhack_layer_mutex);
            if (g_native_process_exiting.load(std::memory_order_acquire)) return;
            native_read_.emplace();
            native_dfhack_retire_writer_storage();
            if (!g_native_dfhack_graphics_ownership_ready.load(std::memory_order_acquire)) return;
            slot_ = native_dfhack_graphics_slot();
            if (!slot_) return;
            native_ = native_graphics_owner();
            if (!native_) return;
            const auto &staging = g_native_dfhack_layer_staging;
            if ((synchronize || !g_native_dfhack_layer_staging_pending ||
                    !staging.ready || !staging.graphics ||
                    staging.page_revision != native_dfhack_layer_page_revision() ||
                    staging.dimx != native_->dimx || staging.dimy != native_->dimy) &&
                    !native_dfhack_prepare_staging()) return;
            gps_ = g_native_dfhack_layer_staging.graphics.get();
            native_dfhack_apply_render_schedule(*native_);
            native_output_ = NativeDfhackOutputBinding::capture(*native_);
            std::memcpy(native_texblits_.data(), &native_->texblits, native_texblits_.size());
            native_dfhack_publish_display_source(*native_);
            saved_ = *slot_;
            previous_ = active_; active_ = this; installed_ = true;
            bind_private();
            if (write_intent) g_native_dfhack_callback_writes_pending = true;
        } catch (...) { gps_ = nullptr; }
    }
    ~NativeDfhackLayerWriteScope() {
        if (!installed_) return;
        save_private();
        restore_native();
        native_dfhack_apply_render_schedule(*native_);
        native_dfhack_publish_display_source(*native_);
        *slot_ = saved_; active_ = previous_;
        // An actual render may be called from inside doUpdate. Its storage
        // cannot become committed while that outer write still selects it.
        if (!active_ && !g_native_dfhack_layer_frame_depth &&
                g_native_dfhack_layer_commit_pending) native_dfhack_publish_staging();
        lock_.unlock();
        native_dfhack_notify_commit();
    }
    bool valid() const noexcept { return installed_ || (active_ && !active_->paused_); }
    static bool active(const graphicst *gps) noexcept {
        return active_ && !active_->paused_ &&
            (active_->gps_ == gps || active_->native_ == gps);
    }
    static bool in_progress() noexcept { return active_ != nullptr; }
    static graphicst *graphics() noexcept {
        native_dfhack_layer_save_active();
        return active_ && !active_->paused_ ? active_->gps_ : native_graphics_owner();
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

static void native_dfhack_commit_callback_writes() noexcept {
    // GPU-only callbacks never enter a CPU writer. Publish only captured
    // drawing calls from this callback thread, without holding M across SDL.
    if (!g_native_dfhack_callback_writes_pending) return;
    g_native_dfhack_callback_writes_pending = false;
    try {
        {
            std::lock_guard<std::recursive_mutex> lock(g_native_dfhack_layer_mutex);
            NativeDfhackOwnerReadScope native_reads;
            native_dfhack_retire_writer_storage();
            if (NativeDfhackLayerWriteScope::in_progress() ||
                    g_native_dfhack_layer_frame_depth) {
                if (g_native_dfhack_layer_staging_pending)
                    g_native_dfhack_layer_commit_pending = true;
            } else {
                native_dfhack_publish_staging();
            }
        }
        native_dfhack_notify_commit();
    } catch (...) {}
}

class NativeDfhackLayerUpdateScope {
    NativeDfhackLayerWriteScope write_;
public:
    // A pending frame already owns its private arrays and map bindings.
    // Native render segments refresh their layout before returning; reshape,
    // zoom, release and page changes retire those bindings independently.
    // Keep raw onUpdate writes inside the same ownership scope without
    // rebuilding its unchanged viewport/map-port list on every game tick.
    explicit NativeDfhackLayerUpdateScope(bool enter = true) noexcept : write_(enter) {}
    bool valid() const noexcept { return write_.valid(); }
};

class NativeDfhackFrameTransactionScope {
#ifndef _WIN32
    std::optional<TranslationStateScope> native_translation_;
#endif
    std::unique_lock<std::recursive_mutex> lock_;
    std::optional<NativeDfhackOwnerReadScope> native_read_;
    bool entered_ = false, outer_ = false;
public:
    explicit NativeDfhackFrameTransactionScope(bool enter = true, void *screen = nullptr) noexcept {
        if (!enter || g_native_process_exiting.load(std::memory_order_acquire)) return;
        if (g_native_dfhack_layer_frame_depth) {
            ++g_native_dfhack_layer_frame_depth; entered_ = true; return;
        }
        try {
#ifndef _WIN32
            native_translation_.emplace();
#endif
            lock_ = std::unique_lock<std::recursive_mutex>(g_native_dfhack_layer_mutex);
            if (g_native_process_exiting.load(std::memory_order_acquire)) return;
            native_read_.emplace();
            native_dfhack_retire_writer_storage();
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
        lock_.unlock();
        native_dfhack_notify_commit();
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
                if (scope_->native_layout_dirty_)
                    native_dfhack_publish_display_source(*scope_->native_);
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
    const auto *storage = writing ? &g_native_dfhack_layer_staging : native_dfhack_layer_read_storage();
    if (!storage) return false;
    const auto &s = *storage;
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
    NativeDfhackLayerFrameReadScope reader_;
    graphicst *gps_ = nullptr;
    graphicst *previous_ = nullptr;
    std::optional<NativeDfhackForegroundScope> foreground_;
public:
    explicit NativeDfhackLayerPresentScope(
            std::shared_ptr<const NativeDfhackLayerStorage> frame) noexcept
        : reader_(std::move(frame)) {
        const auto *s = reader_.storage();
        if (!s || !s->ready || !s->graphics ||
                s->page_revision != native_dfhack_layer_page_revision()) return;
        gps_ = s->graphics.get(); previous_ = g_native_dfhack_present_graphics;
        g_native_dfhack_present_graphics = gps_; foreground_.emplace();
    }
    ~NativeDfhackLayerPresentScope() {
        if (gps_) g_native_dfhack_present_graphics = previous_;
    }
    bool valid() const noexcept { return gps_ != nullptr; }
    graphicst *graphics() const noexcept { return gps_; }
    const NativeDfhackLayerStorage *storage() const noexcept { return reader_.storage(); }
    const auto &frame() const noexcept { return reader_.frame(); }
    const auto &maps() const noexcept {
        static const std::vector<std::unique_ptr<NativeDfhackMapLayer>> empty;
        return storage() ? storage()->maps : empty;
    }
};

static void clear_native_dfhack_layers() noexcept {
    // SDL retires visibility immediately; the next writer releases scratch
    // under its own ownership lock. No render/translation lock waits for M.
    g_native_dfhack_layer_page_revision.fetch_add(1, std::memory_order_release);
    g_native_dfhack_layer_published.store({}, std::memory_order_release);
    g_native_dfhack_layer_retirement.fetch_add(1, std::memory_order_release);
}
