#pragma once
#include "native_display_discovery.h"
#include <map>
#include <set>
#include <string_view>

// These are certificates for complete instruction families, not contracts
// inferred from a callee's address or its C++ name. The provider must expose
// reviewed source bytes/CFGs or the actual target image/CFGs, independently.
namespace dfcn::pe_runtime::bounded_argument_detail {
struct Contract {
    bool proved = false;
    bool read_only = false;
    bool requires_valid_string_storage = false;
    uint32_t extent = 0;
    bool write_only = false;
    uint16_t required_arguments = 0;
    bool discard_return = false;
    bool constructs_valid_string = false;
    uint16_t required_static_cstrings = 0;
};

inline std::vector<unsigned char> bytes(std::string_view value) {
    const auto digit = [](char c) -> unsigned { return c <= '9' ? c - '0' : c - 'a' + 10; };
    std::vector<unsigned char> result;
    for (size_t i = 0; i + 1 < value.size(); i += 2)
        result.push_back(static_cast<unsigned char>((digit(value[i]) << 4) | digit(value[i + 1])));
    return result;
}

// View::graph(address) returns a complete Graph with owner/end, code, flow,
// external_entries. View::read and import_slot use that same image coordinate
// system. No certificate from another image may be reused in this cache.
template<typename View> class Cache {
    View &view_;
    std::map<std::pair<uint32_t, unsigned>, Contract> contracts_;
    std::map<uint32_t, bool> allocations_;

    uint32_t relative(uint32_t address, size_t displacement, size_t next) const {
        const auto *raw = view_.read(address + static_cast<uint32_t>(displacement), 4);
        if (!raw) return 0;
        int32_t delta = 0; std::memcpy(&delta, raw, 4);
        const int64_t target = int64_t(address) + next + delta;
        return target > 0 && target <= UINT32_MAX ? static_cast<uint32_t>(target) : 0;
    }
    bool raw(uint32_t address, std::string_view text, std::initializer_list<size_t> relocations) const {
        const auto expected = bytes(text);
        if (!address || uint64_t(address) + expected.size() > UINT32_MAX) return false;
        const auto *actual = view_.read(address, expected.size());
        if (!actual) return false;
        for (size_t i = 0; i < expected.size(); ++i) {
            bool relocated = false;
            for (const auto start : relocations) if (i >= start && i < start + 4) { relocated = true; break; }
            if (!relocated && actual[i] != expected[i]) return false;
        }
        return true;
    }
    bool body(uint32_t address, std::string_view text, std::initializer_list<size_t> relocations,
              std::initializer_list<size_t> external_jumps = {}) const {
        if (!raw(address, text, relocations)) return false;
        const auto *graph = view_.graph(address);
        if (!graph || graph->owner != address || graph->end != uint64_t(address) + text.size() / 2 ||
                !graph->code.count(address)) return false;
        for (const auto entry : graph->external_entries) if (entry != address) return false;
        std::set<uint32_t> visited;
        std::vector<uint32_t> pending{address};
        while (!pending.empty()) {
            const auto at = pending.back(); pending.pop_back();
            if (!visited.insert(at).second) continue;
            const auto found = graph->code.find(at);
            if (found == graph->code.end()) return false;
            const auto &row = found->second; const auto &op = row.decoded;
            if (!op.len || op.len != row.bytes.size() || (op.flags & F_ERROR) || at < address ||
                    uint64_t(at) + op.len > graph->end) return false;
            const auto *actual = view_.read(at, op.len);
            if (!actual || std::memcmp(actual, row.bytes.data(), op.len)) return false;
            const auto next = at + op.len;
            const bool conditional = (op.opcode >= 0x70 && op.opcode <= 0x7f) ||
                (op.opcode == 0x0f && op.opcode2 >= 0x80 && op.opcode2 <= 0x8f);
            const bool jump = op.opcode == 0xe9 || op.opcode == 0xeb;
            if (conditional || jump) {
                const int64_t destination = int64_t(next) + ((op.flags & F_IMM8) ?
                    int64_t(static_cast<int8_t>(op.imm.imm8)) : int64_t(static_cast<int32_t>(op.imm.imm32)));
                if (destination < address || destination >= graph->end) {
                    if (!jump || std::find(external_jumps.begin(), external_jumps.end(), at - address) == external_jumps.end())
                        return false;
                } else pending.push_back(static_cast<uint32_t>(destination));
            }
            // No unaccounted indirect control flow is part of these families.
            if (op.opcode == 0xff && (op.modrm_reg == 4 || op.modrm_reg == 5)) return false;
            if (!jump && op.opcode != 0xc3 && op.opcode != 0xcc && !graph->flow.nonreturning_calls.count(at))
                pending.push_back(next);
        }
        // A different cold/EH entry must not be concealed by the template.
        for (const auto &[at, row] : graph->code)
            if (!visited.count(at) && row.decoded.opcode != 0xcc) return false;
        return true;
    }
    bool import_jump(uint32_t address, std::string_view library, std::string_view symbol) const {
        const auto slot = view_.import_slot(library, symbol);
        if (!slot) return false;
        std::set<uint32_t> visited;
        for (unsigned depth = 0; address && depth < 8 && visited.insert(address).second; ++depth) {
            const auto *raw = view_.read(address, 2);
            if (!raw) return false;
            if (raw[0] == 0xff && raw[1] == 0x25)
                return view_.read(address, 6) && relative(address, 2, 6) == slot;
            if (raw[0] != 0xe9 || !view_.read(address, 5)) return false;
            address = relative(address, 1, 5);
        }
        return false;
    }
    bool import_call(uint32_t instruction, std::string_view library, std::string_view symbol) const {
        const auto *raw = view_.read(instruction, 6);
        return raw && raw[0] == 0xff && raw[1] == 0x15 &&
            relative(instruction, 2, 6) == view_.import_slot(library, symbol) &&
            view_.import_slot(library, symbol) != 0;
    }
    bool length_error(uint32_t address) const {
        // RCX is replaced by a static message; no incoming argument is passed
        // to the explicitly named nonreturning CRT routine.
        return body(address, "4883ec28488d0d00000000ff1500000000cc", {7, 13}) &&
            import_call(address + 11, "msvcp140.dll", "?_Xlength_error@std@@YAXPEBD@Z");
    }
    bool exception_constructor(uint32_t address) const {
        // Both complete leaf constructors write only the separate exception
        // object in RCX. Incoming RDX (possibly the string) is never consumed.
        return raw(address, "488d050000000048c741100000000048894108488d0500000000488901488bc1c3", {3, 22}) ||
            raw(address, "4883611000488d050000000048894108488d0500000000488901488bc1c3", {8, 19});
    }
    bool allocation_error(uint32_t address) const {
        if (!body(address, "4883ec48488d4c2420e800000000488d1500000000488d4c2420e800000000cc", {10, 17, 27})) return false;
        return exception_constructor(relative(address, 10, 14)) &&
            import_jump(relative(address, 27, 31), "vcruntime140.dll", "_CxxThrowException");
    }
    bool plain_new(uint32_t address) const {
        if (!body(address, "40534883ec20488bd9eb0f488bcbe80000000085c07413488bcbe8000000004885c074e74883c4205bc34883fbff7406e800000000cce800000000cc",
                  {15, 27, 49, 55})) return false;
        return import_jump(relative(address, 15, 19), "api-ms-win-crt-heap-l1-1-0.dll", "_callnewh") &&
            import_jump(relative(address, 27, 31), "api-ms-win-crt-heap-l1-1-0.dll", "malloc") &&
            allocation_error(relative(address, 49, 53)) && allocation_error(relative(address, 55, 59));
    }
    bool copy_constructor(uint32_t address) {
        if (!body(address, "48895c2408488974241048897c241841564883ec2033c00f57c00f1101488941104c8bf248894118488bd948837a180f488b721076034c8b3248bfffffffffffffff7f483bf777724883fe0f77154889711048c741180f000000410f10060f1101eb3e488bc64883c80f483bc7770fb916000000488bf8483bc1480f42f9488d4f01e8000000004c8d4601488903498bd648897310488bc848897b18e800000000488b742438488bc3488b5c2430488b7c24404883c420415ec3e800000000cc",
                  {0x83, 0x9d, 0xbb})) return false;
        // The source object is read at 0,16,24 only. Its buffer is copied as
        // memcpy's read-only source into fresh storage, never written/retained.
        return valid_string_allocator(relative(address, 0x83, 0x87)) &&
            import_jump(relative(address, 0x9d, 0xa1), "vcruntime140.dll", "memcpy") &&
            length_error(relative(address, 0xbb, 0xbf));
    }
    bool destructor(uint32_t address) const {
        if (!body(address, "40534883ec20488b5118488bd94883fa0f762c488b0948ffc24881fa0010000072184c8b41f84883c227492bc8488d41f84883f81f7721498bc8e80000000048c743100000000048c743180f000000c603004883c4205bc3ff1500000000cc",
                  {0x3b, 0x5a})) return false;
        // [RCX-8] is reached only after RCX=[original RCX], on the heap branch.
        // The caller must prove that storage is inline or an owned allocation.
        return import_jump(relative(address, 0x3b, 0x3f), "api-ms-win-crt-heap-l1-1-0.dll", "free") &&
            import_call(address + 0x58, "api-ms-win-crt-runtime-l1-1-0.dll", "_invalid_parameter_noinfo_noreturn");
    }
    bool string_draw(uint32_t address) {
        if (!body(address, "48895c24185556574883ec50488b05000000004833c448894424404963d9488bf948837a10000f84a2000000488d4c2420e80000000090488b4c243085db7416483bcb76118bd3488d4c2420e800000000488b4c243033ed8bdd4885c974658bb4249000000066660f1f8400000000008b87840000003b05000000007d4685c079102bd889af840000004863c3483bc17332488d44242048837c24380f480f474424204863d3448bce0fb61402488bcfe800000000ffc34863c3488b4c2430483bc172ac488d4c2420e800000000488b4c24404833cce800000000488b9c24800000004883c4505f5e5dc3",
                  {0x0f, 0x32, 0x4d, 0x78, 0xb1, 0xca, 0xd7})) return false;
        // Up to copy construction, RDX is the only original-object alias.
        // It is not saved in any register/local. After that call every string
        // access and argument refers to the separate, deep-copied stack local.
        return copy_constructor(relative(address, 0x32, 0x36)) &&
            destructor(relative(address, 0xca, 0xce));
    }
    bool string_draw_plain(uint32_t address) {
        if (!body(address, "405356574883ec50488b05000000004833c448894424404963d9488bf948837a10000f8496000000488d4c2420e80000000090488b4c243085db7416483bcb76118bd3488d4c2420e800000000488b4c243033f68bde4885c974590f1f4400008b87840000003b05000000007d4685c079102bd889b7840000004863c3483bc17332488d44242048837c24380f480f474424204863d341b0010fb61402488bcfe800000000ffc34863c3488b4c2430483bc172ac488d4c2420e800000000488b4c24404833cce8000000004883c4505f5e5bc3",
                  {0x0b, 0x2e, 0x49, 0x68, 0xa1, 0xba, 0xc7})) return false;
        // This whole plain-writer family has the same ownership boundary as
        // the flagged writer: original RDX is read only at size and by the
        // certified deep copy. All later string arguments and mutations use
        // that copy; the original object is never read or forwarded again.
        return copy_constructor(relative(address, 0x2e, 0x32)) &&
            destructor(relative(address, 0xba, 0xbe));
    }
    bool string_compare(uint32_t address) const {
        if (!body(address, "48895c2408574883ec2048837a180f488b7a107603488b12488379180f488b59107603488b09483bfb4c8bc34c0f42c7e80000000085c0740f7921b0ff488b5c24304883c4205fc3483bdf72ee770d32c0488b5c24304883c4205fc3488b5c2430b0014883c4205fc3", {0x31})) return false;
        // Both operands are read only. The sole buffer operation uses the
        // smaller declared size, not a zero-terminated/unbounded scan.
        return import_jump(relative(address, 0x31, 0x35), "vcruntime140.dll", "memcmp");
    }
    bool string_assign(uint32_t address) {
        if (!body(address, "48895c241048896c2418565741574883ec20488b6918498bf04c8bfa488bd94c3bc57721488bf94883fd0f7603488b3948897110488bcfe800000000c6043700e9a500000048bfffffffffffffff7f483bf70f87af000000488bce4c897424404883c90f483bcf771f488bd5488bc748d1ea482bc2483be8770e488d042a488bf9483bc8480f42f8488d4f01e8000000004c8bc648897310498bd748897b18488bc84c8bf0e80000000041c60436004883fd0f762d488b0b488d55014881fa0010000072184c8b41f84883c227492bc8488d41f84883f81f7726498bc8e8000000004c89334c8b742440488b6c2450488bc3488b5c24484883c420415f5f5ec3ff1500000000cce800000000cc", {0x38, 0x8d, 0xa6, 0xde, 0x102, 0x108})) return false;
        // RDX is only a source buffer. Both copy paths consume exactly R8
        // bytes and retain no source pointer. The lookup supplies a distinct
        // freshly allocated destination, never its caller's input/output.
        return import_jump(relative(address, 0x38, 0x3c), "vcruntime140.dll", "memmove") &&
            valid_string_allocator(relative(address, 0x8d, 0x91)) &&
            import_jump(relative(address, 0xa6, 0xaa), "vcruntime140.dll", "memcpy") &&
            import_jump(relative(address, 0xde, 0xe2), "api-ms-win-crt-heap-l1-1-0.dll", "free") &&
            import_call(address + 0x100, "api-ms-win-crt-runtime-l1-1-0.dll", "_invalid_parameter_noinfo_noreturn") &&
            length_error(relative(address, 0x108, 0x10c));
    }
    bool widget_lookup(uint32_t address) {
        if (!body(address, "40535556574154415641574881ec90000000488b05000000004833c448898424880000004d8bf8488bf24c8be148895424304533f6488ba950010000488b7d08488bdd4438771975310f1f8000000000488d4f20498bd7e80000000084c07906488b7f10eb06488bef488b3f4438771974de498b9c2450010000443875197567488d5520498bcfe80000000084c07857483beb745244897424204c8d0d000000004c8d050000000033d2488b4d40e8000000004885c0741d4c89364c897608488b4d484885c97404f0ff41084889064c8b7548eb090f57c00f11064c89364c897608e9e4010000b9c8010000e800000000488be848894424300f57c00f1100c7400801000000c7400c01000000488d050000000048894500488d5d1033d241b8b8010000488bcbe800000000488bcbe800000000488d05000000004889034c89b3800100004c89b3880100004c89b3900100004c89b3980100004c89b3a00100004c89b3a80100004489b3b001000048895c244048896c2448488d8b80000000493bcf7416498bd749837f180f7603498b174d8b4710e8000000004c896308498d8c2460010000f0ff4508488b442440488944243048896c2438498b942468010000493b942470010000741a48890248896a08498bce48894c2438498384246801000010eb0f4c8d442430e800000000488b4c2438bfffffffff4885c974308bc7f00fc1410883f8017524488b5c2438488b03488bcbff108bc7f00fc1430c83f801750b488b4c2438488b01ff5008498bd7488d4c2458e800000000f0ff4508488b44244048894424784889ac24800000004c8d442458488d542430498d8c2450010000e80000000090488b8c24800000004885c974348bc7f00fc1410883f8017528488b9c2480000000488b03488bcbff10f00fc17b0c83ff01750e488b8c2480000000488b01ff5008488d4c2458e800000000498b0424498bccff5020488b44244048890648896e08488bc6488b8c24880000004833cce8000000004881c490000000415f415e415c5f5e5d5bc3", {0x15, 0x58, 0x88, 0x9d, 0xa4, 0xaf, 0xed, 0x110, 0x128, 0x130, 0x137, 0x197, 0x1ec, 0x238, 0x265, 0x2b1, 0x2da})) return false;
        // Complete normal CFG: incoming RDX is retained in RSI and written
        // only at [RSI,+0/+8] (or one 16-byte store). Its temporary stack
        // copy is overwritten by the fresh allocation before any local
        // pointer is passed on. Incoming R8 is retained in R15 and consumed
        // only by compare, bounded source-buffer assign, and deep copy.
        // All container/virtual calls receive the owner or copied objects.
        // The provider independently excludes exception continuations;
        // cleanup-only unwinding cannot resume this normal-return proof.
        // RAX may carry the output address on return, so callers must prove
        // it dead before reuse; no unproved return alias is discarded.
        const auto compare = relative(address, 0x58, 0x5c);
        return compare == relative(address, 0x88, 0x8c) && string_compare(compare) &&
            import_jump(relative(address, 0xaf, 0xb3), "vcruntime140.dll", "__RTDynamicCast") &&
            plain_new(relative(address, 0xed, 0xf1)) &&
            import_jump(relative(address, 0x128, 0x12c), "vcruntime140.dll", "memset") &&
            string_assign(relative(address, 0x197, 0x19b)) &&
            copy_constructor(relative(address, 0x238, 0x23c)) &&
            destructor(relative(address, 0x2b1, 0x2b5));
    }
// Included inside bounded_argument_detail::Cache<View>. These families prove
// normal-return effects from the complete source/target bodies independently.
// body() still requires the provider's complete CFG and EH-continuation proof;
// a partial .pdata fragment or an unclassified exception entry cannot qualify.

    bool widget_text_constructor(uint32_t address) {
        if (!body(address,
            "48896c2410488974241848897c242041564883ec2048bdffffffffffffff7f498bf84c8bf2488bf14c3bc50f87810000004983f80f77174c89411048c741180f000000e800000000c6043700eb4e488bc748895c24304883c80f483bc5770fb916000000488be8483bc1480f42e9488d4d01e8000000004c8bc7488906498bd648897e10488bc848896e18488bd8e800000000c6043b00488b5c2430488b6c2438488b742440488b7c24484883c420415ec3e800000000cc",
            {0x44, 0x73, 0x8f, 0xb3})) return false;
        // RCX is a fresh 32-byte destination, RDX read-only source bytes and
        // R8 their length. Both branches write size/capacity and the final NUL.
        // The heap branch retains only its own independently proved storage.
        const auto copy = relative(address, 0x44, 0x48);
        return copy == relative(address, 0x8f, 0x93) &&
            import_jump(copy, "vcruntime140.dll", "memcpy") &&
            valid_string_allocator(relative(address, 0x73, 0x77)) &&
            length_error(relative(address, 0xb3, 0xb7));
    }

    bool widget_lookup_text(uint32_t address) {
        if (!body(address,
            "48895c242055565741544155415641574881ec90000000488b05000000004833c448898424880000004d8bf0488bf24c8be948895424304533e4488ba950010000488b7d08488bdd44386719752b6690488d4f20498bd6e80000000084c07906488b7f10eb06488bef488b3f4438671974de498b9d50010000443865197567488d5520498bcee80000000084c07857483beb745244896424204c8d0d000000004c8d050000000033d2488b4d40e8000000004885c0741d4c89264c896608488b4d484885c97404f0ff41084889064c8b6548eb090f57c00f11064c89264c896608e9a6010000b988010000e8000000004c8bf848894424300f57c00f1100c7400801000000c7400c01000000488d0500000000498907498d5f1033d241b878010000488bcbe800000000488bcbe8000000009048895c24404c897c2448488d8b80000000493bce7416498bd649837e180f7603498b164d8b4610e8000000004c896b08498d8d60010000f041ff4708488b44244048894424304c897c2438498b9568010000493b957001000074194889024c897a08498bcc48894c24384983856801000010eb0f4c8d442430e800000000488b4c2438bfffffffff4885c974308bc7f00fc1410883f8017524488b5c2438488b03488bcbff108bc7f00fc1430c83f801750b488b4c2438488b01ff5008498bd6488d4c2458e800000000f041ff4708488b44244048894424784c89bc24800000004c8d442458488d542430498d8d50010000e80000000090488b8c24800000004885c974348bc7f00fc1410883f8017528488b9c2480000000488b03488bcbff10f00fc17b0c83ff01750e488b8c2480000000488b01ff5008488d4c2458e800000000498b4500498bcdff5020488b4424404889064c897e08488bc6488b8c24880000004833cce800000000488b9c24e80000004881c490000000415f415e415d415c5f5e5dc3",
            {0x1a, 0x58, 0x87, 0x9c, 0xa3, 0xae, 0xec, 0x10f,
             0x126, 0x12e, 0x15b, 0x1ad, 0x1f9, 0x226, 0x272, 0x29b})) return false;
        // The output pointer is saved only in RSI and local +0x30. Every
        // output write is exactly [RSI,RSI+16); there is no output read or
        // transfer to another call. Before +0x30 is passed as a local object,
        // its old output alias has been replaced by a fresh allocation/pair.
        // R8 is retained in R14 and reaches only compare, bounded assign and
        // deep copy. Container/constructor/virtual calls receive the owner,
        // fresh objects or copies, never either original argument's address.
        // The final RAX may still alias the output across the cookie call;
        // the caller must prove its result is discarded before use.
        const auto compare = relative(address, 0x58, 0x5c);
        return compare == relative(address, 0x87, 0x8b) && string_compare(compare) &&
            import_jump(relative(address, 0xae, 0xb2), "vcruntime140.dll", "__RTDynamicCast") &&
            plain_new(relative(address, 0xec, 0xf0)) &&
            import_jump(relative(address, 0x126, 0x12a), "vcruntime140.dll", "memset") &&
            string_assign(relative(address, 0x15b, 0x15f)) &&
            copy_constructor(relative(address, 0x1f9, 0x1fd)) &&
            destructor(relative(address, 0x272, 0x276));
    }

    bool widget_record_missing(uint32_t address) {
        if (!body(address,
            "48895c2418574883ec50488b05000000004833c44889442440488bd90f57c00f114424200f57c9f30f7f4c243049c7c0ffffffff49ffc042803c020075f6488d4c2420e80000000090488b9388010000483b939001000074250f104424200f11020f104c24300f114a10ba0f000000c6442420004883838801000020eb164c8d442420488d8b80010000e800000000488b5424384883fa0f763548ffc2488b4c2420488bc14881fa00100000721c4883c227488b49f8482bc14883c0f84883f81f7607ff1500000000cce800000000488b4c24404833cce800000000488b5c24704883c4505fc3",
            {0x0d, 0x44, 0x8b, 0xc5, 0xcb, 0xd8})) return false;
        // Only incoming RCX/owner and RDX/C string are consumed. R8 is
        // defined by the bounded NUL scan before its first use. Construction
        // replaces the source by a separate local string before the owner
        // vector receives any data, including its reallocation branch.
        return widget_text_constructor(relative(address, 0x44, 0x48)) &&
            import_call(address + 0xc3, "api-ms-win-crt-runtime-l1-1-0.dll",
                "_invalid_parameter_noinfo_noreturn") &&
            import_jump(relative(address, 0xcb, 0xcf), "api-ms-win-crt-heap-l1-1-0.dll", "free");
    }

    bool widget_lookup_cstring(uint32_t address) {
        if (!body(address,
            "48895c242055565741544155415641574883ec70488b05000000004833c44889442460498be8488bf24889542430488bd948894c2420488954243833c00f57c00f114424404889442450488944245848c7c7ffffffff4c8bc70f1f800000000049ffc04138042875f7488bd5488d4c2440e8000000004c8bbb50010000498b5f084c8b6c24584c8b7424504c8b642440807b1900755766660f1f840000000000488d4b20488d5424404983fd0f490f47d4488b7110488379180f7603488b094c8bc64c3bf64d0f42c6e80000000085c00f84200100000f88230100004c8bfb488b1b807b190074b8488b74243041807f1900753c498d5720488b5a1048837a180f7603488b12488d4c24404983fd0f490f47cc4d8bc6493bde4c0f42c3e80000000085c00f84de0000000f89e1000000b3014983fd0f7632498d5501498bc44881fa00100000721a4883c2274d8b6424f8492bc44883c0f84883f81f0f878d000000498bcce80000000084db488b5c2420740b488bd5488bcbe8000000000f57c00f114424400f57c9f30f7f4c24509048ffc7803c2f0075f74c8bc7488bd5488d4c2440e800000000904c8d442440488bd6488bcbe80000000090488b5424584883fa0f765748ffc2488b4c2440488bc14881fa00100000723e4883c227488b49f8482bc14883c0f84883f81f7629ff1500000000cc493bf60f83ddfeffff488b5b10e9dafeffff4c3bf30f821fffffff32dbe91affffffe800000000488bc6488b4c24604833cce800000000488b9c24c80000004883c470415f415e415d415c5f5e5dc3",
            {0x17, 0x72, 0xca, 0x11e, 0x166, 0x17a, 0x1a5, 0x1b6,
             0x1f1, 0x219, 0x229})) return false;
        // R8 must separately be proved to name a complete immutable image
        // C string. Its terminating byte bounds both scans and the two local
        // constructors; this is not a NativeString argument contract.
        // The independently proved missing-name helper receives only that
        // static pointer and the owner. Output RDX is held in RSI/local
        // storage, and is passed solely to the independently proved lookup.
        // Temporary RSI use as a tree-name length always restores it from
        // +0x30 on exit from that loop before the lookup sees the output.
        const auto construct = relative(address, 0x72, 0x76);
        const auto compare = relative(address, 0xca, 0xce);
        const auto release = relative(address, 0x166, 0x16a);
        return construct == relative(address, 0x1a5, 0x1a9) && widget_text_constructor(construct) &&
            compare == relative(address, 0x11e, 0x122) &&
            import_jump(compare, "vcruntime140.dll", "memcmp") &&
            release == relative(address, 0x219, 0x21d) &&
            import_jump(release, "api-ms-win-crt-heap-l1-1-0.dll", "free") &&
            import_call(address + 0x1ef, "api-ms-win-crt-runtime-l1-1-0.dll",
                "_invalid_parameter_noinfo_noreturn") &&
            widget_record_missing(relative(address, 0x17a, 0x17e)) &&
            widget_lookup_text(relative(address, 0x1b6, 0x1ba));
    }
    bool widget_lookup_stack(uint32_t address) {
        if (!body(address,
            "40535556574154415641574881ec90000000488b05000000004833c448898424880000004d8bf0488bf24c8be148895424304533ff488ba950010000488b7d08488bdd44387f1975310f1f8000000000488d4f20498bd6e80000000084c07906488b7f10eb06488bef488b3f44387f1974de498b9c245001000044387d197567488d5520498bcee80000000084c07857483beb745244897c24204c8d0d000000004c8d050000000033d2488b4d40e8000000004885c0741d4c893e4c897e08488b4d484885c97404f0ff41084889064c8b7d48eb090f57c00f11064c893e4c897e08e9c8010000b9a0010000e800000000488be848894424300f57c00f1100c7400801000000c7400c01000000488d050000000048894500488d5d1033d241b890010000488bcbe800000000488bcbe800000000488d0500000000488903c68378010000004c89bb800100004c89bb8801000048895c244048896c2448488d8b80000000493bce7416498bd649837e180f7603498b164d8b4610e8000000004c896308498d8c2460010000f0ff4508488b442440488944243048896c2438498b942468010000493b942470010000741a48890248896a08498bcf48894c2438498384246801000010eb0f4c8d442430e800000000488b4c2438bfffffffff4885c974308bc7f00fc1410883f8017524488b5c2438488b03488bcbff108bc7f00fc1430c83f801750b488b4c2438488b01ff5008498bd6488d4c2458e800000000f0ff4508488b44244048894424784889ac24800000004c8d442458488d542430498d8c2450010000e80000000090488b8c24800000004885c974348bc7f00fc1410883f8017528488b9c2480000000488b03488bcbff10f00fc17b0c83ff01750e488b8c2480000000488b01ff5008488d4c2458e800000000498b0424498bccff5020488b44244048890648896e08488bc6488b8c24880000004833cce8000000004881c490000000415f415e415c5f5e5d5bc3",
            {0x15, 0x58, 0x88, 0x9d, 0xa4, 0xaf, 0xed, 0x110, 0x128,
             0x130, 0x137, 0x17b, 0x1d0, 0x21c, 0x249, 0x295, 0x2be})) return false;
        // RDX output lives in RSI, and its only stored copy (+0x30) is
        // overwritten by the fresh allocation before any local is passed
        // onward. All original-output accesses write exactly 16 bytes.
        // R8 lives in R14; only the two comparisons, bounded assignment and
        // deep copy consume it. Container/virtual calls see only the owner,
        // allocated widget or copies. Complete CFG/EH proof is still required.
        const auto compare = relative(address, 0x58, 0x5c);
        return compare == relative(address, 0x88, 0x8c) && string_compare(compare) &&
            import_jump(relative(address, 0xaf, 0xb3), "vcruntime140.dll", "__RTDynamicCast") &&
            plain_new(relative(address, 0xed, 0xf1)) &&
            import_jump(relative(address, 0x128, 0x12c), "vcruntime140.dll", "memset") &&
            string_assign(relative(address, 0x17b, 0x17f)) &&
            copy_constructor(relative(address, 0x21c, 0x220)) &&
            destructor(relative(address, 0x295, 0x299));
    }
public:
    explicit Cache(View &view) : view_(view) {}

    // The complete destructor family either leaves incoming RAX untouched
    // (SSO) or defines it before use (heap). It never reads, exports, or
    // passes that incoming value. This is not a general volatile-register
    // assumption for unknown calls.
    bool ignores_incoming_rax(uint32_t address) const { return destructor(address); }

    // A named import is the complete byte-comparison implementation contract:
    // neither byte range is written or retained. Its length still has to be
    // bounded against each caller-local buffer by the caller analysis.
    bool byte_compare(uint32_t address) const {
        return import_jump(address, "vcruntime140.dll", "memcmp");
    }
    bool static_cstring(uint32_t address) const { return view_.static_cstring(address); }

    // Only identifies the actual release function. The caller must still
    // supply its independently proved heap token, then retire that token.
    bool owned_heap_release(uint32_t address) const {
        return import_jump(address, "api-ms-win-crt-heap-l1-1-0.dll", "free");
    }

    bool valid_string_allocator(uint32_t address) {
        if (const auto found = allocations_.find(address); found != allocations_.end()) return found->second;
        allocations_[address] = false;
        // Actual malloc provenance, including the large-allocation alignment
        // header consumed by the destructor. No old-version address is used.
        if (!body(address, "4883ec284885c9750733c04883c428c34881f9001000007231488d4127483bc17631488bc8e800000000488bc84885c074114883c0274883e0e0488948f84883c428c3ff1500000000cc4883c428e900000000e800000000cc",
                  {0x26, 0x45, 0x4f, 0x54}, {0x4e})) return false;
        const auto allocation = relative(address, 0x26, 0x2a);
        const bool valid = allocation && relative(address, 0x4f, 0x53) == allocation && plain_new(allocation) &&
            import_call(address + 0x43, "api-ms-win-crt-runtime-l1-1-0.dll", "_invalid_parameter_noinfo_noreturn") &&
            allocation_error(relative(address, 0x54, 0x58));
        allocations_[address] = valid;
        return valid;
    }

    Contract bounded_call(uint32_t address, unsigned argument_register) {
        const auto key = std::make_pair(address, argument_register);
        if (const auto found = contracts_.find(key); found != contracts_.end()) return found->second;
        Contract value;
        if (argument_register == 2 && (copy_constructor(address) || string_draw(address) || string_draw_plain(address)))
            value = {true, true, true, 32};
        else if (argument_register == 1 && copy_constructor(address))
            // Every normal return writes exactly one valid string object.
            // Its large buffer comes from the independently proved allocator;
            // the source operand is only read. RAX returns the output alias.
            value = {true, false, false, 32, true, 0, true, true};
        else if (argument_register == 1 && destructor(address)) value = {true, false, true, 32};
        else if ((argument_register == 2 || argument_register == 8) &&
                (widget_lookup(address) || widget_lookup_text(address) || widget_lookup_stack(address))) {
            constexpr uint16_t arguments = (1u << 2) | (1u << 8);
            value = argument_register == 2 ? Contract{true, false, false, 16, true, arguments, true} :
                Contract{true, true, true, 32, false, arguments, true};
        }
        else if (argument_register == 2 && widget_lookup_cstring(address))
            value = {true, false, false, 16, true, 0, true, false, static_cast<uint16_t>(1u << 8)};
        contracts_[key] = value;
        return value;
    }
};
} // namespace dfcn::pe_runtime::bounded_argument_detail
