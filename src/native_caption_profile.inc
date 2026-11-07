// Executable identities and native ABI lookup only. Caption ownership,
// capture, patch installation and teardown live in native_caption_hooks.inc.
#ifdef _WIN32
// The separate detail rows are owned only between the main-name draw and
// the location chooser's footer. A target without these rows must still prove
// the actual main-name formatter, both resize arms, draw and footer path.
DFCN_NATIVE_CHOOSER_SUFFIX("location_chooser.detail_rows", 0x3b9270, 0x3bbb50,
    0x3bbb75, 0x3bc1dd, 0x3bc1f5, 0x3bc22b)
// These intervals are actual canonical string lifetimes. The row pass must
// prove their formatter/literal methods, resize arms, draw and natural loop
// before it may classify the two status rows as absent on another build.
DFCN_NATIVE_CHOOSER_ROW("location_chooser.guild_status", 0x3b9270, 0x3b9811, 0x3b9796, 0x3b97e4, 1)
DFCN_NATIVE_CHOOSER_ROW("location_chooser.faith_status", 0x3b9270, 0x3ba6d1, 0x3ba5de, 0x3ba691, 2)
// This exact built-in fallback changed wording between native builds.
// It is an assignment-role variant only inside the complete faith row proof.
DFCN_NATIVE_CHOOSER_LITERAL_VARIANT("location_chooser.faith_status", "(No particular deity)", "(No Specific Deity)")
// Retain the literal source contracts for normal address-data generation.
// Construction is independent of page/widget availability; each observer is
// resolved and installed as its own transaction after the shared text entries.
static std::vector<NativeCaptionInlineResize> native_inline_caption_reference_sites() {
    std::vector<NativeCaptionInlineResize> inline_resizes;
    // Adventure action rows obtain the complete caption through the virtual
    // calls at 0x885572/0x885586, then inline the shrinking resize at 0x8855b1.
    // The existing 0xe1230 entry cannot see this store. Replace its five whole
    // instructions with an equivalent resize call, before 0x8855ef/602/615
    // write the dots; the shared draw at 0x885628 then pairs the full source.
    // This straight-line block has no interior branch targets. The following
    // 0x8855db cmp replaces its flags; rax/rcx/rdx/r9 are assigned before use,
    // r10/r11 and volatile XMM values are dead, and native draw ignores r8.
    // The caller's eight pushes and sub rsp,0x108 retain 16-byte alignment
    // and existing shadow space. The relay tail-jumps to the wrapper, adding
    // only this call's return address; all nonvolatile registers remain intact.
    inline_resizes = {{0x8855b1,
        {0x48,0x89,0x5d,0x90, 0x48,0x8d,0x45,0x80,
         0x48,0x83,0x7d,0x98,0x0f, 0x48,0x0f,0x47,0x45,0x80,
         0xc6,0x04,0x18,0x00},
        // rcx = &caption (rbp-0x80), rdx = width (rbx), r8b = zero fill.
        {0x48,0x8d,0x4d,0x80, 0x48,0x89,0xda, 0x45,0x31,0xc0}},
        // The independent action-interruption popup uses 13ea8f0's complete
        // Hold/Hang-from terrain caption, then shortens rbp-9 inline before
        // addst at 8a6d9f. Preserve the whole terrain and both directions.
        // No branch enters these five instructions; cmp rbx,3 replaces flags
        // and the dot stores reload their volatile registers. Seven pushes
        // and sub rsp,0x90 retain aligned calls and the native shadow space.
        // Both configured PE bodies are in data/extracted/adventure-interrupt.
        {0x8a6d24,
         {0x48,0x89,0x5d,0x07,0x48,0x8d,0x45,0xf7,
          0x48,0x83,0x7d,0x0f,0x0f,0x48,0x0f,0x47,0x45,0xf7,
          0xc6,0x04,0x18,0x00},
         {0x48,0x8d,0x4d,0xf7,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // The same length guard also admits width-1 and appends one NUL
        // before writing the dots. Convert its append count to total width.
        {0x8a6d49, {0xe8,0x62,0xa5,0x83,0xff},
         {0x48,0x03,0x51,0x10}, true},
        // The abilities renderer independently shortens its complete CDI
        // or pronoun-expanded body-action caption inline. Preserve the same
        // rbp-0x28 owner before the dots and addst at 0x8aa822. No branch
        // enters these five instructions; cmp rbx,3 replaces their flags,
        // all volatile registers are dead or reset before use, and the
        // native frame already supplies aligned calls and shadow space.
        {0x8aa7ab,
         {0x48,0x89,0x5d,0xe8,0x48,0x8d,0x45,0xd8,
          0x48,0x83,0x7d,0xf0,0x0f,0x48,0x0f,0x47,0x45,0xd8,
          0xc6,0x04,0x03,0x00},
         // rcx = &caption (rbp-0x28), rdx = width (rbx), r8b = zero.
         {0x48,0x8d,0x4d,0xd8,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // Its length guard also admits width-1. Preserve that one-byte
        // padding case before the same three dot stores.
        {0x8aa7d0, {0xe8,0xdb,0x6a,0x83,0xff},
         {0x48,0x03,0x51,0x10}, true},
        // The ability's target list builds complete unit/item designations
        // and "this location" in rbp-0x48, then uses the same independent
        // inline shortening and padding branches. Its cmp rbx,3 resets
        // flags; volatile registers are reset before addst at 0x8a9325.
        {0x8a92ae,
         {0x48,0x89,0x5d,0xc8,0x48,0x8d,0x45,0xb8,
          0x48,0x83,0x7d,0xd0,0x0f,0x48,0x0f,0x47,0x45,0xb8,
          0xc6,0x04,0x03,0x00},
         {0x48,0x8d,0x4d,0xb8,0x48,0x89,0xda,0x45,0x31,0xc0}},
        {0x8a92d3, {0xe8,0xd8,0x7f,0x83,0xff},
         {0x48,0x03,0x51,0x10}, true},
        // At length == width-1, the same caller instead appends one zero byte
        // at 0x8855d6 and still writes the dots. Convert the append count into
        // total width, then use the equivalent shared resize operation with
        // the one-byte dot-padding capture enabled only for this binding.
        {0x8855d6, {0xe8,0xd5,0xbc,0x85,0xff},
         {0x48,0x03,0x51,0x10}, true},
        // The shared inventory/selection renderer shortens the name in two
        // width branches (inventory and item/action chooser), and the body
        // location in a third. All three inline the length/terminator stores
        // rather than reaching the shared resize entry. Preserve their full
        // NativeStrings before the final dots and addst at 88378b/8838c0.
        // Each replaced block has no interior branch target. The following
        // cmp edi,3 replaces flags; the dot stores reload rax/rcx/rdx and the
        // draw resets rcx/rdx/r9 and ignores r8. Remaining live values are
        // nonvolatile registers. Eight pushes and sub rsp,0x108 retain aligned
        // calls and the caller's shadow space, as on its append branches.
        {0x8836aa,
         {0x48,0x89,0x55,0x98,0x48,0x8d,0x45,0x88,
          0x48,0x83,0x7d,0xa0,0x0f,0x48,0x0f,0x47,0x45,0x88,
          0xc6,0x04,0x02,0x00},
         // rdx already holds total width; rcx = &name (rbp-0x78).
         {0x48,0x8d,0x4d,0x88,0x45,0x31,0xc0}},
        {0x883711,
         {0x48,0x89,0x55,0x98,0x48,0x8d,0x45,0x88,
          0x48,0x83,0x7d,0xa0,0x0f,0x48,0x0f,0x47,0x45,0x88,
          0xc6,0x04,0x10,0x00},
         {0x48,0x8d,0x4d,0x88,0x45,0x31,0xc0}},
        {0x883846,
         {0x48,0x89,0x55,0xe0,0x48,0x8d,0x45,0xd0,
          0x48,0x83,0x7d,0xe8,0x0f,0x48,0x0f,0x47,0x45,0xd0,
          0xc6,0x04,0x10,0x00},
         // rdx already holds total width; rcx = &location (rbp-0x30).
         {0x48,0x8d,0x4d,0xd0,0x45,0x31,0xc0}},
        // At length == width-1, each branch instead appends one zero byte.
        // Convert its append count to total width before the equivalent
        // resize, admitting that one-byte padding for exact dot matching.
        {0x8836cc, {0xe8,0xdf,0xdb,0x85,0xff},
         {0x48,0x03,0x51,0x10}, true},
        {0x883733, {0xe8,0x78,0xdb,0x85,0xff},
         {0x48,0x03,0x51,0x10}, true},
        {0x883868, {0xe8,0x43,0xda,0x85,0xff},
         {0x48,0x03,0x51,0x10}, true},
        // The adventure Companions list builds its complete identity through
        // 0x86e668/0x86e6fa, then shortens the rbp-0x30 string to 33 cells
        // inline. Capture before the length/terminator stores so addst at
        // 0x86e7da can bind the full name, profession, sex and tame status.
        // The length guard requires at least 34 bytes, so the append branch
        // cannot be reached. No branch enters this straight-line block;
        // RAX/flags are reset by the dot stores and RCX/RDX/R9 by the draw,
        // which ignores R8. Other volatile registers are dead. Seven pushes
        // plus sub rsp,0x1c0 provide aligned calls and existing shadow space.
        {0x86e766,
         {0x48,0xc7,0x45,0xe0,0x21,0x00,0x00,0x00,
          0x48,0x8d,0x45,0xd0,0x48,0x83,0x7d,0xe8,0x0f,
          0x48,0x0f,0x47,0x45,0xd0,0xc6,0x40,0x21,0x00},
         // rcx = &identity (rbp-0x30), edx = 33, r8b = zero fill.
         {0x48,0x8d,0x4d,0xd0,0xba,0x21,0x00,0x00,0x00,0x45,0x31,0xc0}},
        // Nobles' office-symbol chooser formats the complete item at
        // 0x425d10, then shrinks rbp+0x80 inline to 22 cells. Capture before
        // its length/terminator stores and dots, so addst at 0x425dd8 owns
        // the full material, name and item noun rather than clipped words.
        // No branch enters this block. cmp rbx,3 replaces flags; RAX and
        // RCX/RDX/R9 are reset before use and addst ignores R8. The other
        // volatile registers are dead. Eight pushes and sub rsp,0x278
        // retain aligned calls and the caller's existing shadow space.
        {0x425d34,
         {0x48,0x89,0x9d,0x90,0x00,0x00,0x00,
          0x48,0x8d,0x85,0x80,0x00,0x00,0x00,
          0x48,0x83,0xbd,0x98,0x00,0x00,0x00,0x0f,
          0x48,0x0f,0x47,0x85,0x80,0x00,0x00,0x00,
          0xc6,0x04,0x03,0x00},
         // rcx = &caption (rbp+0x80), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x8d,0x80,0x00,0x00,0x00,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // The symbol's optional assigned position is copied and capitalized
        // in rbp+0x120, then shortened to the same 22-cell ink width. Preserve
        // that separate complete source for its lower-row addst at 0x425f59.
        // This equivalent shrink has the same frame and volatile-register
        // lifetime as the item block above; cmp rbx,3 resets its flags.
        {0x425eb5,
         {0x48,0x89,0x9d,0x30,0x01,0x00,0x00,
          0x48,0x8d,0x85,0x20,0x01,0x00,0x00,
          0x48,0x83,0xbd,0x38,0x01,0x00,0x00,0x0f,
          0x48,0x0f,0x47,0x85,0x20,0x01,0x00,0x00,
          0xc6,0x04,0x03,0x00},
         // rcx = &position (rbp+0x120), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x8d,0x20,0x01,0x00,0x00,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // Both Nobles holder loops obtain the full name/office from
        // 0x1330c30, then inline resize before writing the final three dots.
        // Read that complete live NativeString through the shared capture
        // before the equivalent resize changes it; the draws at 0x426802
        // and 0x427871 retain the same owner and bind the exact visible text.
        // Neither straight-line block has interior branch targets. Their
        // following cmp rbx,3 replaces flags, rax is reset before dot stores,
        // and rcx/rdx/r9 are reset for draw (which ignores r8). Other volatile
        // registers are dead. Eight pushes plus sub rsp,0x278 provide aligned
        // calls and shadow space, as on the existing native append branches.
        {0x42675e,
         {0x48,0x89,0x9d,0xf0,0x00,0x00,0x00,
          0x48,0x8d,0x85,0xe0,0x00,0x00,0x00,
          0x48,0x83,0xbd,0xf8,0x00,0x00,0x00,0x0f,
          0x48,0x0f,0x47,0x85,0xe0,0x00,0x00,0x00,
          0xc6,0x04,0x03,0x00},
         // rcx = &caption (rbp+0xe0), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x8d,0xe0,0x00,0x00,0x00,0x48,0x89,0xda,0x45,0x31,0xc0}},
        {0x4277cd,
         {0x48,0x89,0x9d,0x10,0x01,0x00,0x00,
          0x48,0x8d,0x85,0x00,0x01,0x00,0x00,
          0x48,0x83,0xbd,0x18,0x01,0x00,0x00,0x0f,
          0x48,0x0f,0x47,0x85,0x00,0x01,0x00,0x00,
          0xc6,0x04,0x18,0x00},
         // rcx = &caption (rbp+0x100), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x8d,0x00,0x01,0x00,0x00,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // Objects' claim column assembles the complete owner/relationship in
        // rbp+0xd0, then shrinks it inline before the three dot stores and
        // width-zero addst at 0x3a1574. Capture the same live string before
        // shortening; the shared draw retains its exact row and full source.
        // No branch enters this block. The next cmp rbx,3 replaces flags;
        // RAX/RDX/R9 are reset before use and addst ignores R8. Restore ECX
        // from the caller's saved column: its screenx store at 0x3a1550
        // otherwise consumes a volatile value across this added call. Other
        // volatile registers are dead. Eight pushes and sub rsp,0x238 retain
        // aligned calls and shadow space, as on the native append branch.
        {0x3a14b0,
         {0x48,0x89,0x9d,0xe0,0x00,0x00,0x00,
          0x48,0x8d,0x85,0xd0,0x00,0x00,0x00,
          0x49,0x83,0xff,0x0f,
          0x48,0x0f,0x47,0x85,0xd0,0x00,0x00,0x00,
          0xc6,0x04,0x03,0x00},
         // rcx = &caption (rbp+0xd0), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x8d,0xd0,0x00,0x00,0x00,0x48,0x89,0xda,0x45,0x31,0xc0},
         false, {0x8b,0x4c,0x24,0x54}},
        // The fortress Tasks worker column rebuilds name/profession at
        // 0x3981ce, but shrinks that live string inline instead of calling
        // resize. Its width is (left+0x51)-(left+0x2c)-7 = 30 cells.
        // Capture before the length/terminator stores; the three native dot
        // stores and addst at 0x398283 retain the same rbp+0x48 owner.
        // No branch enters this block. The following cmp rbx,3 replaces
        // flags; rax/rcx/rdx/r9 are reset before use and addst ignores r8.
        // Other volatile registers are dead. Seven pushes and sub rsp,0x1b0
        // preserve aligned calls and shadow space, also used by the native
        // append branch at 0x398231.
        {0x39820c,
         {0x48,0x89,0x5d,0x58,0x48,0x8d,0x45,0x48,
          0x48,0x83,0x7d,0x60,0x0f,0x48,0x0f,0x47,0x45,0x48,
          0xc6,0x04,0x18,0x00},
         // rcx = &caption (rbp+0x48), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x4d,0x48,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // The same Tasks row builds its activity at 0x3984b6 and shrinks
        // rbp+0x68 inline to 23 cells before addst at 0x398549. Preserve
        // the complete typed task before its subject becomes "Stray Pi...".
        // The length guard requires at least 24 bytes, so the append branch
        // is unreachable. No branch enters this straight-line block; the
        // following dot stores reset RAX/flags, and the draw resets RCX,
        // RDX/R9 and ignores R8. Other volatile registers are dead. The
        // same seven pushes and sub rsp,0x1b0 retain aligned calls/shadow
        // space; RSI's zero fill is preserved by the native resize call.
        {0x3984cf,
         {0x48,0x89,0x4d,0x78,0x48,0x8d,0x45,0x68,
          0x48,0x83,0xbd,0x80,0x00,0x00,0x00,0x0f,
          0x48,0x0f,0x47,0x45,0x68,0x40,0x88,0x70,0x17},
         // rcx = &caption (rbp+0x68), rdx = 23, r8b = zero fill.
         {0x48,0x8d,0x4d,0x68,0xba,0x17,0x00,0x00,0x00,0x45,0x31,0xc0}},
        // Stone use copies each complete material name and economic-use
        // sentence, then shrinks both strings inline. Capture before those
        // stores so the shared draws at 0x438a75/0x438d98 can retain full
        // captions even when the native English ends in a partial "G...".
        // Neither straight-line block has interior branch targets. RAX and
        // flags are reset before the dot stores; RCX/RDX/R9 are reset for
        // addst, which ignores R8. Other volatile registers are dead, and
        // the economic-use path reloads its cached pointer R14 at 0x438d48.
        // Eight pushes and sub rsp,0x118 retain aligned calls/shadow space.
        // Name length is at least 18 for width 17; uses length is at least
        // width+1. Their append branches therefore need no padding capture.
        {0x438a07,
         {0x48,0x89,0x75,0xe8,0x48,0x8d,0x45,0xd8,
          0x48,0x83,0x7d,0xf0,0x0f,0x48,0x0f,0x47,0x45,0xd8,
          0xc6,0x40,0x11,0x00},
         // rcx = &name (rbp-0x28), rdx = width (rsi), r8b = zero fill.
         {0x48,0x8d,0x4d,0xd8,0x48,0x89,0xf2,0x45,0x31,0xc0}},
        {0x438d20,
         {0x48,0x89,0x5d,0xc0,0x48,0x8d,0x45,0xb0,
          0x48,0x83,0xff,0x0f,0x49,0x0f,0x47,0xc6,
          0xc6,0x04,0x18,0x00},
         // rcx = &uses (rbp-0x50), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x4d,0xb0,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // Work orders builds the complete job caption at 0x393b86, then
        // shrinks rbp+0xe0 inline before replacing its last three bytes.
        // Capture that live source so addst at 0x393c72 retains the actual
        // item size, material and noun even when the screen ends in dots.
        // The guard requires length > width (right-left-3), making append
        // unreachable. No branch enters this block. The following cmp rbx,3
        // replaces flags, dot stores reset RAX, and draw resets RCX/RDX/R9
        // and ignores R8; other volatile registers are dead. Eight pushes
        // plus sub rsp,0x2d8 provide aligned calls and shadow space.
        {0x393bce,
         {0x48,0x89,0x9d,0xf0,0x00,0x00,0x00,
          0x48,0x8d,0x85,0xe0,0x00,0x00,0x00,
          0x48,0x83,0xbd,0xf8,0x00,0x00,0x00,0x0f,
          0x48,0x0f,0x47,0x85,0xe0,0x00,0x00,0x00,
         0x44,0x88,0x3c,0x03},
         // rcx = &caption (rbp+0xe0), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x8d,0xe0,0x00,0x00,0x00,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // The current-order details header has the same inline shortening
        // after its complete caption builder at 0x390497. This branch has
        // width <= length; leave the separate append path intact. No branch
        // enters the replaced block. cmp rbx,3 and the dot stores reset
        // flags/RAX; addst at 0x390582 resets RCX/RDX/R9 and ignores R8.
        // Other volatile registers are dead. Seven pushes plus sub rsp,0x550
        // retain aligned calls and shadow space; nonvolatile XMM6 is kept.
        {0x3904d9,
         {0x48,0x89,0x9d,0xc0,0x00,0x00,0x00,
          0x48,0x8d,0x85,0xb0,0x00,0x00,0x00,
          0x48,0x83,0xbd,0xc8,0x00,0x00,0x00,0x0f,
          0x48,0x0f,0x47,0x85,0xb0,0x00,0x00,0x00,
          0xc6,0x04,0x03,0x00},
         // rcx = &caption (rbp+0xb0), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x8d,0xb0,0x00,0x00,0x00,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // Interrogation list title: report.title is copied at 0x478e94,
        // then rbp+0x10 is shortened inline before the three dot stores.
        // The list's Officer field follows the same path at 0x478fdd.
        // Both guards require length >= width+1, so their append arms are
        // unreachable. No branch enters either replaced block. The next
        // cmp rbx,3 resets flags; dot stores reset RAX, and the shared draw
        // resets RCX/RDX/R9 and ignores R8. Other volatile values are dead.
        // Eight pushes and sub rsp,0x148 provide aligned calls/shadow space.
        {0x478ebb,
         {0x48,0x89,0x5d,0x20,0x48,0x8d,0x45,0x10,
          0x48,0x83,0x7d,0x28,0x0f,0x48,0x0f,0x47,0x45,0x10,
          0xc6,0x04,0x18,0x00},
         // rcx = &caption (rbp+0x10), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x4d,0x10,0x48,0x89,0xda,0x45,0x31,0xc0}},
        {0x478fdd,
         {0x48,0x89,0x5d,0x20,0x48,0x8d,0x45,0x10,
          0x48,0x83,0x7d,0x28,0x0f,0x48,0x0f,0x47,0x45,0x10,
          0xc6,0x04,0x18,0x00},
         {0x48,0x8d,0x4d,0x10,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // The zone's Add/select location chooser (0x3b9270) draws each
        // record name, deity/faith and guild description as separate fields.
        // Unlike Places, it shrinks all three live strings inline before
        // addst at 0x3bbbcb/0x3bbec4/0x3bc04c. Retain their complete sources
        // before dots split deity epithets such as "Demonperplexed...".
        // No branch enters these straight-line blocks. cmp rbx,3 replaces
        // flags, the dot stores reset RAX, and the draws reset RCX/RDX/R9
        // and ignore R8. Other volatile values are dead. Seven pushes and
        // sub rsp,0x160 retain aligned calls and existing shadow space.
        {0x3bbb50,
         {0x48,0x89,0x5d,0x00,0x48,0x8d,0x45,0xf0,
          0x48,0x83,0x7d,0x08,0x0f,0x48,0x0f,0x47,0x45,0xf0,
          0xc6,0x04,0x18,0x00},
         // rcx = &name (rbp-0x10), rdx = width (rbx), r8b = zero fill.
         {0x48,0x8d,0x4d,0xf0,0x48,0x89,0xda,0x45,0x31,0xc0}},
        {0x3bbe4d,
         {0x48,0x89,0x5d,0x20,0x48,0x8d,0x45,0x10,
          0x48,0x83,0x7d,0x28,0x0f,0x48,0x0f,0x47,0x45,0x10,
          0xc6,0x04,0x18,0x00},
         // rcx = &deity/faith (rbp+0x10), rdx = width (rbx).
         {0x48,0x8d,0x4d,0x10,0x48,0x89,0xda,0x45,0x31,0xc0}},
        {0x3bbfd5,
         {0x48,0x89,0x5d,0x00,0x48,0x8d,0x45,0xf0,
          0x48,0x83,0x7d,0x08,0x0f,0x48,0x0f,0x47,0x45,0xf0,
          0xc6,0x04,0x03,0x00},
         // rcx = &guild description (rbp-0x10), rdx = width (rbx).
         {0x48,0x8d,0x4d,0xf0,0x48,0x89,0xda,0x45,0x31,0xc0}},
        // Each chooser guard also admits length == width-1 and appends
        // one zero byte before writing the same three dots. Convert that
        // append count into total width, using the existing one-byte padding
        // capture. RCX and zero R8 are already set by the native caller.
        {0x3bbb75, {0xe8,0x36,0x57,0xd2,0xff},
         {0x48,0x03,0x51,0x10}, true},
        {0x3bbe72, {0xe8,0x39,0x54,0xd2,0xff},
         {0x48,0x03,0x51,0x10}, true},
        {0x3bbffa, {0xe8,0xb1,0x52,0xd2,0xff},
         {0x48,0x03,0x51,0x10}, true}};
    // Guild rows use the same resize-and-dots path as the faith chooser.
    // Retain each complete profession caption and requested/existing tier.
    inline_resizes.push_back({0x3b9811, {0xe8,0x1a,0x7a,0xd2,0xff}, {}, true});
    inline_resizes.push_back({0x3b9aae, {0xe8,0x7d,0x77,0xd2,0xff}, {}, true});
    inline_resizes.push_back({0x3b9bf6, {0xe8,0x35,0x76,0xd2,0xff}, {}, true});
    // The guild card shortens the entity name to 20 bytes before drawing.
    inline_resizes.push_back({0x3ba123, {0xe8,0x08,0x71,0xd2,0xff}, {}, true});
    // The faith chooser clips at length >= width-1 and can append one zero
    // byte before replacing its last three cells with dots. Preserve the
    // complete owner through that exact native path, as for other captions.
    inline_resizes.push_back({0x3ba6d1, {0xe8,0x5a,0x6b,0xd2,0xff}, {}, true});
    inline_resizes.push_back({0x3ba91c, {0xe8,0x0f,0x69,0xd2,0xff}, {}, true});
    inline_resizes.push_back({0x3baa70, {0xe8,0xbb,0x67,0xd2,0xff}, {}, true});
    // The header and assigned-unit paths write dots after their native
    // resize calls. Preserve their complete NativeString before that edit;
    // the header's width-1 branch can grow by one zero byte.
    inline_resizes.push_back({0x3b1832, {0xe8,0xf9,0xf9,0xd2,0xff}, {}, true});
    inline_resizes.push_back({0x3b8488, {0xe8,0xa3,0x8d,0xd2,0xff}, {}, true});
    // Construction material rows inline both name-width branches before
    // addst at 38270a. The generic resize hook never sees these stores.
    // Replace their complete length/terminator blocks with the same resize
    // capture, preserving the original caption before the native dots.
    // The following jumps lead to cmp rdi/r14,3, which replaces flags;
    // dot stores reload RAX and the draw resets RCX/RDX/R9 and ignores R8.
    // All remaining live values are nonvolatile. Eight pushes and sub
    // rsp,0x178 provide aligned calls and the native shadow space.
    inline_resizes.push_back({0x3825a5,
        {0x48,0x89,0x7d,0xd8,0x48,0x8d,0x45,0xc8,
         0x48,0x83,0x7d,0xe0,0x0f,0x48,0x0f,0x47,0x45,0xc8,
         0xc6,0x04,0x38,0x00},
        // rcx = &name (rbp-0x38), rdx = selected width (rdi).
        {0x48,0x8d,0x4d,0xc8,0x48,0x8b,0xd7,0x45,0x33,0xc0}});
    inline_resizes.push_back({0x38268c,
        {0x4c,0x89,0x75,0xd8,0x48,0x8d,0x45,0xc8,
         0x48,0x83,0x7d,0xe0,0x0f,0x48,0x0f,0x47,0x45,0xc8,
         0x42,0xc6,0x04,0x30,0x00},
        // rcx = &name (rbp-0x38), rdx = unselected width (r14).
        {0x48,0x8d,0x4d,0xc8,0x49,0x8b,0xd6,0x45,0x33,0xc0}});
    // Replace only the inline length/terminator stores with the identical native
    // resize operation. Each block is straight-line, has no interior entry, and
    // is followed by fresh draw arguments or a compare that resets flags. The
    // caller has aligned stack/shadow space; all nonvolatile registers survive.
    // Caption's width-1 growth branch writes dots, so retain its unpadded source.
    inline_resizes.push_back({0x27caa7,
        {0x48,0x89,0x5d,0x00,0x48,0x8d,0x45,0xf0,0x48,0x83,0x7d,0x08,0x0f,
         0x48,0x0f,0x47,0x45,0xf0,0xc6,0x04,0x18,0x00},
        {0x48,0x8d,0x4d,0xf0,0x48,0x89,0xda,0x45,0x31,0xc0}});
    inline_resizes.push_back({0x27cb13,
        {0xe8,0x98,0x47,0xe6,0xff}, {0x48,0x03,0x51,0x10}, true});
    inline_resizes.push_back({0x27cea1,
        {0x48,0x89,0x55,0x20,0x48,0x8d,0x45,0x10,0x49,0x83,0xff,0x0f,
         0x48,0x0f,0x47,0x45,0x10,0xc6,0x04,0x10,0x00},
        {0x48,0x8d,0x4d,0x10,0x45,0x31,0xc0}, false, {}, true});
    inline_resizes.push_back({0x27d16d,
        {0x48,0x89,0x55,0xe0,0x48,0x8d,0x45,0xd0,0x48,0x83,0x7d,0xe8,0x0f,
         0x48,0x0f,0x47,0x45,0xd0,0xc6,0x04,0x10,0x00},
        {0x48,0x8d,0x4d,0xd0,0x45,0x31,0xc0}, false, {}, true});
    return inline_resizes;
}
static bool native_inline_caption_observer_contract(const NativeCaptionInlineResize &site) {
    if (!site.suffix.empty()) return false;
    const auto op = pe_runtime::inline_resize_detail::canonical_operation(site.original.data(), site.original.size());
    return (op && op.length == site.original.size()) ||
        (site.original.size() == 5 && site.original.front() == 0xe8 && site.arguments.empty());
}

static bool native_inline_caption_append_contract(const NativeCaptionInlineResize &site) {
    if (!site.zero_pad_one || site.plain_shrink || !site.suffix.empty() ||
            site.original.size() != 5 || site.original[0] != 0xe8 ||
            site.arguments != std::vector<unsigned char>{0x48,0x03,0x51,0x10}) return false;
    int32_t displacement = 0;
    std::memcpy(&displacement, site.original.data() + 1, sizeof(displacement));
    // This declaration's old relay converted append's count into resize's
    // total width. Observe the count without altering the actual native ABI.
    return int64_t(site.address) + 5 + displacement == 0xe12b0;
}

static uintptr_t resolve_native_caption_append_target(uintptr_t base) {
    // RCX is the string, RDX the additional count, R8B the fill byte. The
    // retained complete entry reads capacity/size, checks available space,
    // then stores size+count. This is not string::resize(size, fill).
    static constexpr unsigned char append_abi[]{
        0x48,0x89,0x5c,0x24,0x18,0x55,0x56,0x57,0x41,0x55,0x41,0x56,
        0x48,0x83,0xec,0x20,0x48,0x8b,0x69,0x18,0x48,0x8b,0xf2,
        0x4c,0x8b,0x71,0x10,0x48,0x8b,0xc5,0x49,0x2b,0xc6,
        0x45,0x0f,0xbe,0xe8,0x48,0x8b,0xf9,0x48,0x3b,0xd0,0x77,0x2f,
        0x49,0x8d,0x04,0x16,0x48,0x89,0x41,0x10};
    return base && native_pe_match(base, 0xe12b0, append_abi, std::size(append_abi))
        ? native_pe_address(base, 0xe12b0) : 0;
}

static bool resolve_native_inline_caption_append_site(uintptr_t base, uintptr_t append,
        NativeCaptionInlineResize &site) {
    const auto &state = pe_runtime::state();
    if (!base || !append || !pe_runtime::usable(state) || site.address > UINT32_MAX ||
            !native_inline_caption_append_contract(site)) return false;
    const auto reference = static_cast<uint32_t>(site.address);
    if (!native_pe_bytes(reference, site.original)) return false;
    const auto native = native_pe_rva(reference);
    if (!native || native > UINT32_MAX || uint64_t(native) + 5 > state.size ||
            native > UINTPTR_MAX - base) return false;
    int32_t displacement = 0;
    std::memcpy(&displacement, site.original.data() + 1, sizeof(displacement));
    if (site.original[0] != 0xe8 || int64_t(base + native) + 5 + displacement != int64_t(append))
        return false;
    address_runtime::InlineResizeBinding binding{};
    binding.reference = reference;
    binding.native_instruction = static_cast<uint32_t>(native);
    binding.length = 5;
    binding.frame_register = 1;
    binding.width_register = 2;
    binding.flags = pe_runtime::inline_resize_detail::call_form | 2u;
    site.discovered = binding;
    site.address = native;
    site.arguments.clear();
    return true;
}

static bool resolve_native_inline_caption_site(uintptr_t base, uintptr_t resize,
        NativeCaptionInlineResize &site) {
    using namespace pe_runtime::inline_resize_detail;
    const auto &state = pe_runtime::state();
    if (!base || !resize || !pe_runtime::usable(state) ||
            !native_inline_caption_observer_contract(site) || site.address > UINT32_MAX) return false;
    const auto reference = static_cast<uint32_t>(site.address);
    const uint32_t flags = (site.plain_shrink ? 1u : 0u) | (site.zero_pad_one ? 2u : 0u);
    const auto found = std::find_if(state.inline_resizes.begin(), state.inline_resizes.end(),
        [&](const auto &binding) { return binding.reference == reference; });
    address_runtime::InlineResizeBinding binding{};
    if (found != state.inline_resizes.end()) {
        if (std::find_if(std::next(found), state.inline_resizes.end(),
                [&](const auto &other) { return other.reference == reference; }) != state.inline_resizes.end() ||
                std::find(state.missing_inline_resizes.begin(), state.missing_inline_resizes.end(), reference) !=
                    state.missing_inline_resizes.end() ||
                (found->flags & ~operation_forms) != flags || !found->owner) return false;
        binding = *found;
        if (!binding.native_instruction || binding.length < 5 || binding.length > 128 ||
                uint64_t(binding.native_instruction) + binding.length > state.size ||
                binding.native_instruction > UINTPTR_MAX - base) return false;
        site.original.resize(binding.length);
        if (!native_history_copy_bytes(base + binding.native_instruction,
                site.original.data(), site.original.size())) return false;
    } else {
        // Only the exact reviewed baseline identities may use their literal
        // instruction contract without a generated observer binding. Missing
        // proof on every other executable leaves this operation untouched.
        if (state.edition != 1 && state.edition != 2) return false;
        if (!native_pe_bytes(reference, site.original)) return false;
        const auto native = native_pe_rva(reference);
        if (!native || native > UINT32_MAX || uint64_t(native) + site.original.size() > state.size ||
                native > UINTPTR_MAX - base) return false;
        binding.reference = reference;
        binding.native_instruction = static_cast<uint32_t>(native);
        binding.length = static_cast<uint32_t>(site.original.size());
        binding.flags = flags;
        if (site.original.size() == 5 && site.original.front() == 0xe8) {
            binding.flags |= call_form;
            binding.frame_register = 1;
            binding.width_register = 2;
        } else {
            const auto target = canonical_operation(site.original.data(), site.original.size());
            if (!target) return false;
            binding.frame_register = target.frame;
            binding.width_register = target.width;
            binding.object_displacement = target.object;
        }
    }
    if (!valid_forms(binding.flags)) return false;
    if (binding.flags & call_form) {
        if (binding.length != 5 || binding.frame_register != 1 || binding.width_register != 2 ||
                binding.object_displacement || site.original.front() != 0xe8) return false;
        int32_t displacement = 0;
        std::memcpy(&displacement, site.original.data() + 1, sizeof(displacement));
        if (int64_t(base + binding.native_instruction) + 5 + displacement != int64_t(resize)) return false;
    } else if (binding.flags & guard_form) {
        const auto guard = resize_guard(site.original.data(), site.original.size());
        const auto target = int64_t(binding.native_instruction) + guard.length + guard.displacement;
        if (!guard.length || guard.width != binding.width_register ||
                (binding.frame_register != 4 && binding.frame_register != 5) || target <= 0 || target >= state.size) return false;
    } else {
        const auto target = operation(site.original.data(), site.original.size());
        if (!target || target.length != binding.length || target.frame != binding.frame_register ||
                target.width != binding.width_register || target.object != binding.object_displacement ||
                bool(target.constant_width) != bool(binding.flags & constant_end_form)) return false;
    }
    site.discovered = binding;
    site.address = binding.native_instruction;
    site.arguments.clear();
    return true;
}

#include "native_caption_widget_profile_pe.inc"
#include "native_caption_semantic_profile_pe.inc"

// The shared text entries do not depend on any particular page's callers,
// inline clipping blocks, widget observers or temporary frame coordinates.
// Keep their exact instruction contracts usable when those additions are
// unavailable in an otherwise identified executable.
static bool resolve_native_basic_caption_profile(NativeCaptionProfile &profile) {
    profile = {};
    profile.base = native_history_profile_base();
    if (!profile.base || !native_pe_supported()) return false;
    profile.resize_target = 0xe1230;
    profile.draw_target = 0xad9960;
    profile.resize_entry_prefix = {0x48,0x8b,0x41,0x10,0x48,0x3b,0xd0};
    profile.draw_entry_prefix = {0x40,0x53,0x56,0x57,0x48,0x83,0xec,0x50};
    const unsigned char resize_guard[]{0x48,0x8b,0x41,0x10,0x48,0x3b,0xd0,0x77};
    if (!native_pe_bytes(profile.draw_target, profile.draw_entry_prefix)) return false;
    profile.draw = reinterpret_cast<NativeCaptionDrawFn>(native_pe_address(profile.base, profile.draw_target));
    profile.draw_target = native_pe_rva(profile.draw_target);
    if (!profile.draw || !profile.draw_target) return false;
    // Clipping observation is an independent capability. The draw entry can
    // still capture complete native strings when resize is not identified.
    if (native_pe_match(profile.base, profile.resize_target, resize_guard, sizeof(resize_guard)) &&
            native_pe_bytes(profile.resize_target, profile.resize_entry_prefix)) {
        profile.resize = reinterpret_cast<NativeCaptionResizeFn>(
            native_pe_address(profile.base, profile.resize_target));
        profile.resize_target = native_pe_rva(profile.resize_target);
    } else {
        profile.resize_target = 0;
    }
    if (!profile.resize || !profile.resize_target) {
        profile.resize = nullptr;
        profile.resize_target = 0;
        profile.resize_entry_prefix.clear();
    }
    profile.flag_draw_entry_prefix = {
        0x48,0x89,0x5c,0x24,0x18,0x55,0x56,0x57,0x48,0x83,0xec,0x50};
    if (native_pe_bytes(0xad9870, profile.flag_draw_entry_prefix))
        profile.flag_draw = reinterpret_cast<NativeCaptionFlagDrawFn>(native_pe_address(profile.base, 0xad9870));
    profile.top_draw_entry_prefix = {
        0x48,0x89,0x5c,0x24,0x18,0x48,0x89,0x74,0x24,0x20,0x57,0x48,0x83,0xec,0x50};
    if (native_pe_bytes(0xad9a40, profile.top_draw_entry_prefix))
        profile.top_simple_draw = reinterpret_cast<NativeCaptionSimpleDrawFn>(native_pe_address(profile.base, 0xad9a40));
    // This separately identified caller remains an editable string even
    // when the optional textbox vtable observer is not installed.
    profile.textbox_widget.text_return_address = native_pe_address(profile.base, 0x1419581);
    // The shared addst entry receives ui_look_list's actual display_str even
    // without a private hover viewport or its six producer-boundary hooks.
    // A missing record layout disables only this source classification. Each
    // record's enum and payload still need their own runtime field evidence.
    const native_history_abi::FieldOffset look_text{0x28, "lookinfost", "display_str"};
    const native_history_abi::FieldOffset look_type{0, "lookinfost", "type"};
    if (look_text.contains(0, sizeof(NativeString), sizeof(NativeString)) &&
            look_type.contains(0, sizeof(int32_t), sizeof(int32_t))) {
        profile.map_caption_text_offset = look_text.runtime();
        profile.map_hover_list = native_reference_address(profile.base,
            native_history_layout::ui_look_list_rva);
        for (const uintptr_t reference : {uintptr_t{0x3f9558}, uintptr_t{0x3f977a},
                uintptr_t{0xb02ff9}, uintptr_t{0xb03231}}) {
            if (const auto caller = native_pe_address(profile.base, reference))
                profile.map_hover_returns.push_back(caller);
        }
    }
    return true;
}
static bool resolve_native_caption_profile(NativeCaptionProfile &profile) {
    const auto *base = reinterpret_cast<const unsigned char *>(GetModuleHandleW(nullptr));
    if (!base) return false;
    if (!native_pe_supported()) return false;
    profile.base = reinterpret_cast<uintptr_t>(base);
    const size_t render_index = native_object_virtual_slot(
        "abstract_interfacest", "render", 3, "void(uint32_t)", 1);
    const size_t arrange_index = native_object_virtual_slot(
        "abstract_interfacest", "arrange", 4, "void()", 0);
    if (render_index == SIZE_MAX || arrange_index == SIZE_MAX) return false;
    const auto slot = [](uintptr_t table, size_t index) -> void ** {
        return table ? reinterpret_cast<void **>(table) + index : nullptr;
    };
    // RTTI establishes the owner table; the semantic contract establishes
    // the target method slot and the fields retained by these widgets.
    profile.truncated_widget = {
        slot(native_pe_address(profile.base, 0x162dc10), render_index),
        {0x10, "widget", "rect"}, {0x150, "widget_text", "str"},
        {0x180, "widget_text_truncated", "original_str"}, {0x175, "widget_text", "just"}};
    // Only widgets::textbox owns editable str/flags/maxlen/textbox_type.
    // The abstract interface render precedes the widget destructor at slot 3.
    const auto textbox_table = native_pe_address(profile.base, 0x1710d18);
    profile.textbox_widget = {textbox_table,
        slot(textbox_table, render_index),
        reinterpret_cast<void *>(native_pe_address(profile.base, 0x14191e0)),
        native_pe_address(profile.base, 0x1419581)};
    // container::render invokes widget::render before drawing its children.
    // Save the complete page before Tooltip overwrites it, as on ELF; rect
    // and name retain the shared widget offsets used by the capture.
    profile.tooltip_container_slot = slot(native_pe_address(profile.base, 0x15eb4a8), render_index);
    profile.tooltip_container_render = reinterpret_cast<void *>(native_pe_address(profile.base, 0x1414c10));
    // The fixed fortress toolbar uses a separate inline floating card.
    profile.legacy_toolbar_tooltip = true;
    // widgets::text_multiline::render (0x14198c0) uses its own temporary
    // string vector via 0x52def0, never curses_text_boxst::add_paragraph.
    // 0x14198d2..0x14198f1 takes max(rect.x2-rect.x1+1, min_w), and
    // 0x1419920..0x1419983 draws each original row at (rect.x1, rect.y1+i)
    // through addst_flag. Capture that render scope through its vtable;
    // no shared-vector layout or persistent borrowed strings are needed.
    const auto multiline_table = native_pe_address(profile.base, 0x15f6ee8);
    const auto multiline_slot = slot(multiline_table, render_index);
    // This profile is also resolved after caption installation by the
    // announcement adapter. The installer owns mutable-slot validation.
    profile.multiline_widget = {
        multiline_slot, {0x10, "widget", "rect"}, {0x150, "widget_text", "str"},
        {0xc4, "widget", "min_w"}, native_pe_address(profile.base, 0x1419988),
        reinterpret_cast<void *>(native_pe_address(profile.base, 0x14198c0)),
        slot(multiline_table, arrange_index),
        reinterpret_cast<void *>(native_pe_address(profile.base, 0x1419860)),
        reinterpret_cast<NativeCaptionWidgetArrangeFn>(native_pe_address(profile.base, 0x14101a0)),
        {0xc8, "widget", "min_h"}};
    const auto base_widget_table = native_pe_address(profile.base, 0x1785a80);
    if (!base_widget_table || native_object_virtual_method(
            reinterpret_cast<void *const *>(base_widget_table), "abstract_interfacest", "arrange",
            4, "void()", 0) != reinterpret_cast<void *>(profile.multiline_widget.base_arrange) ||
            !profile.truncated_widget.rect.contains(0, 16, 16) ||
            !profile.truncated_widget.text.contains(0, sizeof(NativeString), sizeof(NativeString)) ||
            !profile.truncated_widget.original_text.contains(0, sizeof(NativeString), sizeof(NativeString)) ||
            !profile.truncated_widget.justification.contains(0, 1, 1) ||
            !profile.multiline_widget.minimum_width.contains(0, 4, 4) ||
            !profile.multiline_widget.minimum_height.contains(0, 4, 4)) return false;
    // The void arrange at slot 4 estimates min_h with str.size/width+1.
    // rows_container (0x1415670) and scroll_rows (0x1415dab) call this slot
    // before reading max(rect.height,min_h) for the next child's top offset.
    // Correct its word-wrap count before returning, then use the base arrange
    // to update rect without repeating the multiline height estimate.
    profile.resize_target = 0xe1230;
    profile.draw_target = 0xad9960;
    // The two fortress report hover renderers count their native row vector, then
    // clear screen and draw HOVER_RECTANGLE at gps+0x1924 before any text.
    // The row-count hook redirects both inline producers into the private
    // notification output until their last body addst. Both use paragraph
    // +0x48 for width and the same anchor.
    // Native bounds are [left, bottom-rows-3] through [left+width+4, bottom].
    profile.announcement_page = {0x6ee50, {0x3fa9eb, 0x3facde},
        reinterpret_cast<const int32_t *>(native_pe_address(profile.base, 0x18a93bc)),
        reinterpret_cast<const int32_t *>(native_pe_address(profile.base, 0x18a93c0)), 0x48};
    // The expanded alert/all-report/unit-report window clears a different
    // fixed rectangle before assembling its rows. Its single four-register
    // caller owns the complete private output scope for every branch.
    // Reference 40d64b..40d728: left=int32(R8)+4, top=4, 94 by 35 cells.
    profile.announcement_popup_call = 0x3fa6f8;
    profile.announcement_popup_target = 0x40d5f0;
    // Both native string::resize implementations take (this, size, fill).
    profile.resize = reinterpret_cast<NativeCaptionResizeFn>(native_pe_address(profile.base, profile.resize_target));
    profile.draw = reinterpret_cast<NativeCaptionDrawFn>(native_pe_address(profile.base, profile.draw_target));
    // All 98 item classes and 57 building classes converge on these title
    // calls; the remaining three calls are the engraving/terrain sheets.
    // These are return addresses of verified E8 calls to addst, never a
    // text/coordinate guess. Other executable profiles leave this empty.
    profile.info_titles.sites = {
        {native_pe_address(profile.base, 0x154a28), NativeInfoTitleKind::Item},
        // ViewSheets/ITEM_LIST formats each complete item before shortening
        // its caption. Books can supply just their work title, with no item
        // actions, count or quality marks to identify the row by its skin.
        {native_pe_address(profile.base, 0x15a261), NativeInfoTitleKind::ItemList},
        // Nobles' office-symbol chooser owns separate item, assignment and
        // value fields. Item/assignment ink is shortened to 22 cells, while
        // their columns extend 24 cells up to the optional Value label.
        {native_pe_address(profile.base, 0x425ddd), NativeInfoTitleKind::NobleSymbolItem, 24},
        {native_pe_address(profile.base, 0x425f5e), NativeInfoTitleKind::NobleSymbolPosition, 24},
        {native_pe_address(profile.base, 0x426057), NativeInfoTitleKind::NobleSymbolValue, 7},
        {native_pe_address(profile.base, 0x4260af), NativeInfoTitleKind::NobleSymbolAmount},
        {native_pe_address(profile.base, 0x18057a), NativeInfoTitleKind::Building},
        // Coffin details draw the associated tomb's stored name directly.
        {native_pe_address(profile.base, 0x195db5), NativeInfoTitleKind::Building},
        {native_pe_address(profile.base, 0x158a79), NativeInfoTitleKind::Engraving},
        {native_pe_address(profile.base, 0x158af4), NativeInfoTitleKind::Terrain},
        {native_pe_address(profile.base, 0x158f72), NativeInfoTitleKind::PlannedEngraving},
        // Display furniture manually draws each item and its independent
        // status over a picture strip. Bind these addst callers directly:
        // neither the outer sheet nor a generic rectangle owns the fields.
        {native_pe_address(profile.base, 0x18b338), NativeInfoTitleKind::Item},
        {native_pe_address(profile.base, 0x18b3c0), NativeInfoTitleKind::DisplayStatus},
        {native_pe_address(profile.base, 0x18b417), NativeInfoTitleKind::DisplayStatus},
        // The Adventure chooser's quantity popup draws the selected item's
        // complete c65450 designation immediately above its numeric prompt.
        // Give that same item-name field to the shared native title reader.
        {native_pe_address(profile.base, 0x88472f), NativeInfoTitleKind::Item}};
    // World missions use one complete title draw for every goal in the
    // removable list and another in the selected mission's detail frame.
    // Both pass width zero; the list first calls resize at 0x1c6677, so
    // the shared capture retains the full source before its three dots.
    // Unverified executable profiles leave these caller bindings empty.
    profile.mission_title_returns = {
        native_pe_address(profile.base, 0x1c66da), native_pe_address(profile.base, 0x1c8f44)};
    // The render entry publishes its actual sheet argument; the building
    // title resolves its active ID through the native building collection.
    profile.info_titles.building_slot = 0;
    profile.info_titles.sheet_slot = 0;
    profile.info_titles.building_name = {0xd0, "building", "name"};
    profile.info_titles.editing_name = {0x1d59, "view_sheets_interfacest", "building_entering_nickname"};
    // ITEM_LIST's right edge is read through its discovered frame operands.
    // Its L+7 text start and R-L-15 capacity leave the scrollbar at R-8.
    profile.info_titles.item_list_right_slot = 0;
    profile.info_titles.item_list_right_inset = 8;
    // The native farm formatter publishes its real receiver and output.
    // Preserve an authored name even when its spelling is "Farm Plot".
    profile.info_titles.farm_name_return_address = native_pe_address(profile.base, 0x39e048);
    // The crop draw copies the selected plant's complete RAW name (+0x70)
    // at record top+2, including Item Tagger's suffixes, without resizing.
    profile.info_titles.farm_crop_return_address = native_pe_address(profile.base, 0x39e1f3);
    profile.info_titles.farm_building_slot = 0;
    // The spoor constructor alone shortens record+0x28 to 50 bytes here;
    // 0x407efd..0x40849d append its direction and optional party ownership.
    // Fortress and adventure map loops pass that same string directly.
    // Rebuilding the record invalidates captures before any new text is set.
    profile.map_track_shorten_call = 0x407ef8;
    profile.map_track_shorten_target = 0x52d910;
    // The LOOK stack string has a separate pre-draw shortening call. Its
    // actual target retains the native <=50-byte fast path before 0x52d910.
    profile.adventure_look_track_shorten_call = 0x7f4e21;
    profile.adventure_look_track_shorten_target = 0x52dee0;
    // unit-name render (0x14237a0) rebuilds its captions on every draw.
    // 0x1330c30 supplies name/profession together; the narrow two-line path
    // instead uses 0x1330500 for the name and 0x1330880 for the profession.
    // The final path uses 0x1330260 for a name without its profession.
    // All four calls remove vowels in place; if still too long, the caller
    // writes length/terminator inline and replaces its last three cells.
    // No further resize call intervenes. The same NativeString owners at
    // 0x18b00b8/0x18b00d8 reach width-zero addst at 0x1423d2e,
    // 0x1423d73 or 0x1423faf, preserving each line's actual coordinates.
    profile.roster_shorten_target = 0x52d910;
    profile.roster_shorten_calls = {0x14239b9, 0x1423b20, 0x1423c24, 0x1423e8c};
    profile.map_caption_build = reinterpret_cast<NativeCaptionBuildFn>(native_pe_address(profile.base, 0x406860));
    const native_history_abi::FieldOffset look_text{0x28, "lookinfost", "display_str"};
    if (!look_text.contains(0, sizeof(NativeString), sizeof(NativeString))) return false;
    profile.map_caption_text_offset = look_text.runtime();
    profile.map_hover_list = native_reference_address(native_history_profile_base(),
        native_history_layout::ui_look_list_rva);
    // Fortress/arena (0x3f9553/0x3f9775) and adventure
    // (0xb02ff4/0xb0322c) each have classic and graphical hover loops.
    // All four pass lookinfost::display_str at +0x28 directly to addst.
    // The return address establishes that owner before reading its enum.
    profile.map_hover_returns = {
        native_pe_address(profile.base, 0x3f9558), native_pe_address(profile.base, 0x3f977a),
        native_pe_address(profile.base, 0xb02ff9), native_pe_address(profile.base, 0xb03231)};
#include "native_adventure_look_caption_profile.inc"
    // Three complete stores to the incoming shadow space; no relative
    // address or branch is displaced by the shared entry-hook trampoline.
    profile.map_caption_build_prefix = {
        0x48,0x89,0x5c,0x24,0x10,0x48,0x89,0x74,0x24,0x18,
        0x48,0x89,0x7c,0x24,0x20};
    // 53.16's top_addst specialization loops through top_addchar (0x1bb000),
    // writing screen_top. Unlike the ELF export, its native callers provide
    // no width/justification arguments. The entire relocatable prefix ends
    // before its RIP-relative cookie read at 0xad9a4f.
    profile.top_simple_draw = reinterpret_cast<NativeCaptionSimpleDrawFn>(native_pe_address(profile.base, 0xad9a40));
    profile.top_draw_entry_prefix = {
        0x48,0x89,0x5c,0x24,0x18,0x48,0x89,0x74,0x24,0x20,
        0x57,0x48,0x83,0xec,0x50};
    // The flagged base entry uses the same string/width ABI plus its fifth
    // stack argument; addchar_flag writes one base row and retains sflag.
    profile.flag_draw = reinterpret_cast<NativeCaptionFlagDrawFn>(native_pe_address(profile.base, 0xad9870));
    profile.flag_draw_entry_prefix = {
        0x48,0x89,0x5c,0x24,0x18,0x55,0x56,0x57,0x48,0x83,0xec,0x50};
    // Character inventory names also use these entries, outside the embark
    // call-site list: 0x169e1a/0x169e9b (name), 0x169f78/0x169ff9
    // (location), and 0x16ae68/0x16aee9 (nested item). Each pair resizes
    // and draws the same NativeString with fill/just/width all zero. Bind
    // the shared clipped-caption capture so every such row retains its full
    // source before the native caller writes the final three dots.
    // End before resize's short branch and draw's RIP-relative cookie load;
    // both prefixes contain complete, position-independent instructions.
    profile.resize_entry_prefix = {0x48,0x8b,0x41,0x10,0x48,0x3b,0xd0};
    profile.draw_entry_prefix = {0x40,0x53,0x56,0x57,0x48,0x83,0xec,0x50};
    profile.signatures = {
        {profile.resize_target, {0x48,0x8b,0x41,0x10,0x48,0x3b,0xd0,0x77}},
        {profile.draw_target, {0x40,0x53,0x56,0x57,0x48,0x83,0xec,0x50}},
        {0x154a23, {0xe8,0x38,0x4f,0x98,0x00}},
        {0x15a25c, {0xe8,0xff,0xf6,0x97,0x00}},
        {0x180575, {0xe8,0xe6,0x93,0x95,0x00}},
        {0x158a74, {0xe8,0xe7,0x0e,0x98,0x00}},
        {0x158aef, {0xe8,0x6c,0x0e,0x98,0x00}},
        {0x158f6d, {0xe8,0xee,0x09,0x98,0x00}},
        {0x88472a, {0xe8,0x31,0x52,0x25,0x00}},
        {0x1c66d5, {0xe8,0x86,0x32,0x91,0x00}},
        {0x1c8f3f, {0xe8,0x1c,0x0a,0x91,0x00}},
        {0x3bb2f7, {0xe8,0x64,0xe6,0x71,0x00}},
        {0x3bb6b7, {0xe8,0xa4,0xe2,0x71,0x00}},
        {0x3bb665, {0xe8,0xf6,0xe2,0x71,0x00}},
        {0x3bb5d3, {0xe8,0x88,0xe3,0x71,0x00}},
        {0x3bb580, {0xe8,0xdb,0xe3,0x71,0x00}},
        {0x3bb711, {0xe8,0x4a,0xe2,0x71,0x00}},
        {0x3bbbcb, {0xe8,0x90,0xdd,0x71,0x00}},
        {0x3bbec4, {0xe8,0x97,0xda,0x71,0x00}},
        {0x3bc04c, {0xe8,0x0f,0xd9,0x71,0x00}},
        {0x3bc0c7, {0xe8,0x94,0xd8,0x71,0x00}},
        {0x3bc14e, {0xe8,0x0d,0xd8,0x71,0x00}},
        {0x3bc1c4, {0xe8,0x97,0xd7,0x71,0x00}},
        // Places/Zones still consumes these separately gated frame locals.
        {0x39ac30, {0x48,0x8d,0xac,0x24,0xe0,0xfe,0xff,0xff,
            0x48,0x81,0xec,0x20,0x02,0x00,0x00}},
        {0x39b939, {0x48,0x63,0x06,0x48,0x8d,0x0c,0x40,
            0x48,0x8b,0x44,0xce,0x08,0x4c,0x8b,0x3c,0xd0,
            0x4c,0x89,0x7c,0x24,0x40}},
        {0x39c67e, {0x48,0x8b,0x7c,0x24,0x40}},
        // Farm getName keeps its ordinary this/output ABI and owned-name
        // branch gate; its caller's stack displacement is no longer used.
        {0x54f330, {0x48,0x83,0xb9,0xe0,0x00,0x00,0x00,0x00,
            0x48,0x8b,0xc2,0x74,0x22,0x48,0x8d,0x91,0xd0,0x00,0x00,0x00}},
        {0x1419983, {0xe8,0xe8,0xfe,0x6b,0xff}},
        {0x1419860, {0x40,0x53,0x48,0x83,0xec,0x20,0x48,0x8b,0xd9,
            0xe8,0x32,0x69,0xff,0xff}},
        {0x14101a0, {0x40,0x53,0x48,0x83,0xec,0x50,0xf6,0x81,
            0xa0,0x00,0x00,0x00,0x08}}};
    profile.inline_resizes = native_inline_caption_reference_sites();
    profile.sites = {
        {0x105cda3,0x105ce01,NativeFieldKind::EmbarkItem},
        {0x105eee9,0x105ef47,NativeFieldKind::EmbarkItem},
        {0x105fc25,0x105fc83,NativeFieldKind::EmbarkItem},
        {0x1060878,0x10608d9,NativeFieldKind::EmbarkItem},
        {0x10613f2,0x1061450,NativeFieldKind::EmbarkItem},
        // Adventure equipment uses separate selected/available item loops.
        // Each pair resizes and draws the same native name at its item cursor;
        // the selected loop reuses that string for the point cost only AFTER
        // this draw. Capture here so long generated-material names retain
        // their complete item noun and use the shared equipment compositor.
        {0x631a66,0x631ac1,NativeFieldKind::EmbarkItem},
        {0x632b21,0x632b7c,NativeFieldKind::EmbarkItem},
        {0x62729b,0x6272fa,NativeFieldKind::Origin},
        // Legends categories 3/4 share title/type ownership and layout.
        // Artifacts: title uses [rbp+0x168]; getDescription at 0xd41ca7
        // fills [rbp+0x88], capitalized before resize(...,19,0) and addst.
        // Capture both live strings before the caller writes its three dots.
        {0xd41c18,0xd41c77,NativeFieldKind::BookTitle},
        {0xd41cd1,0xd41d1f,NativeFieldKind::BookType},
        // Codices: native title and capitalized item description.
        {0xd42094,0xd420f3,NativeFieldKind::BookTitle},
        {0xd42141,0xd42183,NativeFieldKind::BookType}};
    populate_native_caption_semantic_profile(profile);
    profile.signatures.push_back({0x39e1ee, {0xe8,0x6d,0xb7,0x73,0x00}});
    // Guild and faith subpage callers use the same normal profile signature
    // gate as the new detail fields, for both supported native PE editions.
    profile.signatures.push_back({0x3b985e, {0xe8,0xfd,0x00,0x72,0x00}});
    profile.signatures.push_back({0x3b9afa, {0xe8,0x61,0xfe,0x71,0x00}});
    profile.signatures.push_back({0x3b9c42, {0xe8,0x19,0xfd,0x71,0x00}});
    profile.signatures.push_back({0x3b9fc4, {0xe8,0x97,0xf9,0x71,0x00}});
    profile.signatures.push_back({0x3ba00d, {0xe8,0x4e,0xf9,0x71,0x00}});
    profile.signatures.push_back({0x3ba07d, {0xe8,0xde,0xf8,0x71,0x00}});
    profile.signatures.push_back({0x3ba169, {0xe8,0xf2,0xf7,0x71,0x00}});
    profile.signatures.push_back({0x3ba1d6, {0xe8,0x85,0xf7,0x71,0x00}});
    profile.signatures.push_back({0x3ba218, {0xe8,0x43,0xf7,0x71,0x00}});
    profile.signatures.push_back({0x3ba280, {0xe8,0xdb,0xf6,0x71,0x00}});
    profile.signatures.push_back({0x3ba71b, {0xe8,0x40,0xf2,0x71,0x00}});
    profile.signatures.push_back({0x3ba968, {0xe8,0xf3,0xef,0x71,0x00}});
    profile.signatures.push_back({0x3baabc, {0xe8,0x9f,0xee,0x71,0x00}});
    profile.signatures.push_back({0x3bae35, {0xe8,0x26,0xeb,0x71,0x00}});
    profile.signatures.push_back({0x3bae62, {0xe8,0xf9,0xea,0x71,0x00}});
    profile.signatures.push_back({0x3baebb, {0xe8,0xa0,0xea,0x71,0x00}});
    profile.signatures.push_back({0x3baf7b, {0xe8,0xe0,0xe9,0x71,0x00}});
    profile.signatures.push_back({0x3bb04d, {0xe8,0x0e,0xe9,0x71,0x00}});
    profile.signatures.push_back({0x3b1832, {0xe8,0xf9,0xf9,0xd2,0xff}});
    profile.signatures.push_back({0x3b8488, {0xe8,0xa3,0x8d,0xd2,0xff}});
#include "native_adventure_crafting_profile.inc"
    profile.signatures.push_back({0x381630,
        {0x40,0x55,0x53,0x56,0x57,0x41,0x54,0x41,0x55,
         0x41,0x56,0x41,0x57,0x48,0x8d,0x6c,0x24,0x88,
         0x48,0x81,0xec,0x78,0x01,0x00,0x00}});
    profile.signatures.push_back({0x38270a, {0xe8,0x51,0x72,0x75,0x00}});
    std::erase_if(profile.signatures, [](const auto &site) {
        return native_pe_chooser_span_absent(static_cast<uint32_t>(site.address),
            static_cast<uint32_t>(site.bytes.size()));
    });
    std::erase_if(profile.inline_resizes, [](const auto &site) {
        return native_pe_chooser_span_absent(static_cast<uint32_t>(site.address),
            static_cast<uint32_t>(site.original.size()));
    });
    // Resolve the reference PE coordinates once. Shared hook installation
    // consumes only the selected executable's addresses and original bytes.
    for (auto &signature : profile.signatures) {
        if (!native_pe_bytes(signature.address, signature.bytes)) return false;
        signature.address = native_pe_rva(signature.address);
        if (!signature.address) return false;
    }
    // The independent inline stage owns these operations, including when a
    // page-specific full profile is unavailable. Never patch them twice.
    std::erase_if(profile.inline_resizes, [](const auto &site) {
        return native_inline_caption_observer_contract(site) || native_inline_caption_append_contract(site);
    });
    for (auto &site : profile.inline_resizes) {
        if (!native_pe_bytes(site.address, site.original)) return false;
        site.address = native_pe_rva(site.address);
        if (!site.address) return false;
    }
    for (auto &site : profile.sites) {
        site.resize = native_pe_rva(site.resize);
        site.draw = native_pe_rva(site.draw);
        if (!site.resize || !site.draw) return false;
    }
    const auto bind_rva = [](uintptr_t &rva) {
        rva = native_pe_rva(rva);
        return rva != 0;
    };
    if (!native_pe_bytes(profile.resize_target, profile.resize_entry_prefix) ||
        !native_pe_bytes(profile.draw_target, profile.draw_entry_prefix) ||
        !native_pe_bytes(0x406860, profile.map_caption_build_prefix) ||
        !native_pe_bytes(0xad9a40, profile.top_draw_entry_prefix) ||
        !native_pe_bytes(0xad9870, profile.flag_draw_entry_prefix) ||
        !bind_rva(profile.resize_target) || !bind_rva(profile.draw_target) ||
        !bind_rva(profile.map_track_shorten_call) ||
        !bind_rva(profile.map_track_shorten_target) ||
        !bind_rva(profile.adventure_look_track_shorten_call) ||
        !bind_rva(profile.adventure_look_track_shorten_target) ||
        !bind_rva(profile.roster_shorten_target) ||
        !bind_rva(profile.announcement_page.rows_target) ||
        !bind_rva(profile.announcement_popup_call) ||
        !bind_rva(profile.announcement_popup_target)) return false;
    for (auto &site : profile.roster_shorten_calls)
        if (!bind_rva(site)) return false;
    for (auto &site : profile.announcement_page.rows_calls)
        if (!bind_rva(site)) return false;
    return true;
}
#else
struct NativeElfCaptionProfile {
    const char *build_id;
    uintptr_t resize, draw;
    std::array<uintptr_t, 3> embark_resize, embark_draw;
    std::array<uintptr_t, 2> origin;
    // Artifacts and codices both bind to the shared title/type capture. Each
    // row is {title resize, type resize, title draw, type draw}; a book-only
    // binding leaves artifact types mixed with the native row's icon cells.
    std::array<std::array<uintptr_t, 4>, 2> legends_items;
};
static constexpr NativeElfCaptionProfile native_elf_caption_profiles[]{
    {"bcc6789e6fb477b785a2b02be80b8b1b054ff88c", 0x837700, 0x425170,
     {0x1f3709d, 0x1f382ad, 0x1f3d0bb},
     {0x1f370e6, 0x1f382f6, 0x1f3d10b},
     {0x1116d1c, 0x1114401}, {{
         {0x1cf0db7, 0x1cf021b, 0x1cf01be, 0x1cf0241},
         {0x1cf0d64, 0x1cf044c, 0x1cf03ef, 0x1cf0472}}}},
    {"84ba59a59a6bbe4487f933a8c85360a45902749e", 0x836f60, 0x425090,
     {0x1f32a9d, 0x1f33cad, 0x1f38abb},
     {0x1f32ae6, 0x1f33cf6, 0x1f38b0b},
     {0x111657c, 0x1113c61}, {{
         {0x1ced317, 0x1cec77b, 0x1cec71e, 0x1cec7a1},
         {0x1ced2c4, 0x1cec9ac, 0x1cec94f, 0x1cec9d2}}}},
};

static const NativeElfCaptionProfile *native_elf_caption_profile(ModuleBuildId &module) {
    dl_iterate_phdr(find_main_build_id, &module);
    if (module.found) {
        for (const auto &profile : native_elf_caption_profiles)
            if (module.value == profile.build_id) return &profile;
    }
    if (module.found && elf_runtime::automatic()) {
        static const NativeElfCaptionProfile discovered = [] {
            auto result = native_elf_caption_profiles[0];
            result.resize = native_reference_va(result.resize);
            result.draw = native_reference_va(result.draw);
            for (auto &address : result.embark_resize) address = native_reference_va(address);
            for (auto &address : result.embark_draw) address = native_reference_va(address);
            for (auto &address : result.origin) address = native_reference_va(address);
            for (auto &row : result.legends_items)
                for (auto &address : row) address = native_reference_va(address);
            return result;
        }();
        if (!discovered.resize || !discovered.draw ||
            std::any_of(discovered.embark_resize.begin(), discovered.embark_resize.end(), [](auto address) { return !address; }) ||
            std::any_of(discovered.embark_draw.begin(), discovered.embark_draw.end(), [](auto address) { return !address; }) ||
            std::any_of(discovered.origin.begin(), discovered.origin.end(), [](auto address) { return !address; })) return nullptr;
        for (const auto &row : discovered.legends_items)
            if (std::any_of(row.begin(), row.end(), [](auto address) { return !address; })) return nullptr;
        return &discovered;
    }
    log_line("ERROR", "Unsupported native executable for complete caption capture");
    return nullptr;
}

struct NativeElfCaptionImage {
    struct Region { uintptr_t begin, end; };
    uintptr_t base;
    std::vector<Region> regions;

    explicit NativeElfCaptionImage(uintptr_t module_base) : base(module_base) {
        dl_iterate_phdr([](dl_phdr_info *info, size_t, void *opaque) {
            auto &image = *static_cast<NativeElfCaptionImage *>(opaque);
            if (info->dlpi_addr != image.base) return 0;
            const char *name = info->dlpi_name ? info->dlpi_name : "";
            const char *file = std::strrchr(name, '/');
            file = file ? file + 1 : name;
            if (*file && std::strcmp(file, "dwarfort") != 0) return 0;
            for (ElfW(Half) i = 0; i < info->dlpi_phnum; ++i) {
                const auto &segment = info->dlpi_phdr[i];
                if (segment.p_type == PT_LOAD && (segment.p_flags & (PF_R | PF_X)) == (PF_R | PF_X))
                    image.regions.push_back({image.base + segment.p_vaddr,
                        image.base + segment.p_vaddr + segment.p_memsz});
            }
            return 1;
        }, this);
    }
    bool contains(uintptr_t address, size_t size) const {
        for (const auto &region : regions)
            if (address >= region.begin && address <= region.end && size <= region.end - address) return true;
        return false;
    }
    static uintptr_t relative(uintptr_t address, size_t offset, size_t length) {
        int32_t displacement = 0;
        std::memcpy(&displacement, reinterpret_cast<const void *>(address + offset), 4);
        return address + length + displacement;
    }
};

// Recover the second item path from its complete clipping/drawing data flow.
// The previous fourth/fifth hooks belonged to civilization/geography captions,
// and their draws printed "Some"/"River: "; they are not item-list hooks.
static bool locate_native_elf_item_calls(const NativeElfCaptionImage &image,
        const NativeElfCaptionProfile &profile, uintptr_t &resize_call, uintptr_t &draw_call) {
    static constexpr unsigned char branch[]{
        0x49,0x63,0xf5,0x31,0xd2,0x4c,0x89,0xe7,0xe8,0,0,0,0,
        0x41,0x83,0xfd,0x03,0x0f,0x8e,0,0,0,0,
        0x48,0x8b,0x95,0x10,0xff,0xff,0xff,0x8d,0x43,0xe6,0x48,0x98,0xc6,0x04,0x02,0x2e,
        0x8d,0x43,0xe7,0x48,0x8b,0x95,0x10,0xff,0xff,0xff,0x48,0x98,0xc6,0x04,0x02,0x2e,
        0x8d,0x43,0xe8,0x48,0x8b,0x95,0x10,0xff,0xff,0xff,0x48,0x98,0xc6,0x04,0x02,0x2e,0xe9,0,0,0,0};
    static constexpr unsigned char draw_prefix[]{
        0x48,0x8b,0xbd,0x50,0xfe,0xff,0xff,0x31,0xc9,0x31,0xd2,0x4c,0x89,0xe6,0xe8};
    static constexpr unsigned char source_prefix[]{0x4c,0x8d,0xa5,0x10,0xff,0xff,0xff};
    bool found = false;
    for (const auto &region : image.regions) {
        const auto *end = reinterpret_cast<const unsigned char *>(region.end);
        const auto *cursor = reinterpret_cast<const unsigned char *>(region.begin);
        while ((cursor = std::search(cursor, end, std::begin(branch), std::begin(branch) + 9)) != end) {
            const uintptr_t address = reinterpret_cast<uintptr_t>(cursor++);
            if (!image.contains(address, sizeof(branch))) continue;
            bool matches = true;
            for (size_t i = 0; i < sizeof(branch); ++i) {
                if ((i >= 9 && i < 13) || (i >= 19 && i < 23) || i >= 72) continue;
                if (reinterpret_cast<const unsigned char *>(address)[i] != branch[i]) { matches = false; break; }
            }
            if (!matches || image.relative(address + 8, 1, 5) != image.base + profile.resize) continue;
            const uintptr_t draw = image.relative(address + 71, 1, 5);
            if (image.relative(address + 17, 2, 6) != draw || draw < 69 || !image.contains(draw - 69, 88)) continue;
            if (std::memcmp(reinterpret_cast<const void *>(draw), draw_prefix, sizeof(draw_prefix)) ||
                image.relative(draw + 14, 1, 5) != image.base + profile.draw ||
                std::memcmp(reinterpret_cast<const void *>(draw - 69), source_prefix, sizeof(source_prefix)) ||
                std::memcmp(reinterpret_cast<const void *>(draw - 6), "\x0f\x89", 2) ||
                image.relative(draw - 6, 2, 6) != address) continue;
            if (found) return false;
            found = true;
            resize_call = address + 8 - image.base;
            draw_call = draw + 14 - image.base;
        }
    }
    if (!found) log_line("ERROR", "Cannot uniquely validate the complete native item-list clipping path");
    return found;
}

// The task worker row uses a compiler clone of resize(this, size, '\0').
// It takes only two arguments and directly updates length/terminator on the
// shrink path, so neither the generic resize nor truncate entry observes it.
// Find it through the complete 30-cell worker clipping/drawing sequence, then
// validate its native shrink body instead of assuming another build's RVA.
static constexpr unsigned char native_elf_default_resize_body[]{
    0x41,0x55,0x41,0x54,0x49,0x89,0xf4,0x55,0x53,0x48,0x89,0xfb,0x48,0x83,0xec,0x08,
    0x48,0x8b,0x6f,0x08,0x48,0x39,0xf5,0x72,0x1f,0x76,0x0c,0x48,0x8b,0x03,
    0x4c,0x89,0x63,0x08,0x42,0xc6,0x04,0x20,0x00,
    0x48,0x83,0xc4,0x08,0x5b,0x5d,0x41,0x5c,0x41,0x5d,0xc3};

static bool locate_native_elf_default_resize(const NativeElfCaptionImage &image,
        const NativeElfCaptionProfile &profile, uintptr_t &target) {
    static constexpr unsigned char worker[]{
        0xbe,0x1e,0x00,0x00,0x00,0x4c,0x89,0xe7,0xe8,0,0,0,0,
        0x48,0x8b,0x45,0xa0,0xbf,0x2e,0x2e,0x00,0x00,0x66,0x89,0x78,0x1b,
        0xc6,0x40,0x1d,0x2e,0x31,0xc9,0x31,0xd2,0x48,0x8d,0x3d,0,0,0,0,
        0x4c,0x89,0xe6,0xe8,0,0,0,0};
    target = 0;
    for (const auto &region : image.regions) {
        const auto *end = reinterpret_cast<const unsigned char *>(region.end);
        const auto *cursor = reinterpret_cast<const unsigned char *>(region.begin);
        while ((cursor = std::search(cursor, end, std::begin(worker), std::begin(worker) + 9)) != end) {
            const uintptr_t address = reinterpret_cast<uintptr_t>(cursor++);
            if (!image.contains(address, sizeof(worker))) continue;
            bool matches = true;
            for (size_t i = 0; i < sizeof(worker); ++i) {
                if ((i >= 9 && i < 13) || (i >= 37 && i < 41) || i >= 45) continue;
                if (reinterpret_cast<const unsigned char *>(address)[i] != worker[i]) { matches = false; break; }
            }
            if (!matches || image.relative(address + 44, 1, 5) != image.base + profile.draw) continue;
            const uintptr_t resize = image.relative(address + 8, 1, 5);
            if (!image.contains(resize, sizeof(native_elf_default_resize_body)) ||
                std::memcmp(reinterpret_cast<const void *>(resize), native_elf_default_resize_body,
                    sizeof(native_elf_default_resize_body))) continue;
            if (target && target != resize) {
                log_line("ERROR", "Ambiguous native default-fill caption resize entry");
                return false;
            }
            target = resize;
        }
    }
    if (!target) log_line("ERROR", "Cannot validate the native task-caption default-fill resize entry");
    return target != 0;
}

// Stone names and economic-use sentences share another zero-fill resize
// clone. Recover it through the complete 17-cell material-name clip/draw
// sequence (53.16: call 0x16c0f38 -> 0x16c0260), never the worker's address.
static bool locate_native_elf_stone_resize(const NativeElfCaptionImage &image,
        const NativeElfCaptionProfile &profile, uintptr_t &target) {
    static constexpr unsigned char path[]{
        0xbe,0x11,0x00,0x00,0x00,0x48,0x89,0xdf,0xe8,0,0,0,0,
        0x48,0x8b,0x84,0x24,0xe0,0x00,0x00,0x00,0xb9,0x2e,0x2e,0x00,0x00,
        0x66,0x89,0x48,0x0e,0xc6,0x40,0x10,0x2e,
        0x48,0x8b,0x74,0x24,0x68,0x31,0xc9,0x31,0xd2,0x48,0x89,0xef,0xe8,0,0,0,0};
    target = 0;
    for (const auto &region : image.regions) {
        const auto *end = reinterpret_cast<const unsigned char *>(region.end);
        const auto *cursor = reinterpret_cast<const unsigned char *>(region.begin);
        while ((cursor = std::search(cursor, end, std::begin(path), std::begin(path) + 9)) != end) {
            const uintptr_t address = reinterpret_cast<uintptr_t>(cursor++);
            if (!image.contains(address, sizeof(path))) continue;
            bool matches = true;
            for (size_t i = 0; i < sizeof(path); ++i) {
                if ((i >= 9 && i < 13) || i >= 47) continue;
                if (reinterpret_cast<const unsigned char *>(address)[i] != path[i]) { matches = false; break; }
            }
            if (!matches || image.relative(address + 46, 1, 5) != image.base + profile.draw) continue;
            const uintptr_t resize = image.relative(address + 8, 1, 5);
            if (!image.contains(resize, sizeof(native_elf_default_resize_body)) ||
                std::memcmp(reinterpret_cast<const void *>(resize), native_elf_default_resize_body,
                    sizeof(native_elf_default_resize_body))) continue;
            if (target && target != resize) {
                log_line("ERROR", "Ambiguous native stone-caption default-fill resize entry");
                return false;
            }
            target = resize;
        }
    }
    if (!target) log_line("ERROR", "Cannot validate the native stone-caption default-fill resize entry");
    return target != 0;
}

// Adventure action buttons use a third default-fill resize clone rather
// than the shared three-argument entry. Bind the complete clip/draw path,
// not a particular action or truncated name (53.16: 0x1168219 -> 0x11612a0).
static bool locate_native_elf_action_resize(const NativeElfCaptionImage &image,
        const NativeElfCaptionProfile &profile, NativeCaptionInlineResize &binding) {
    static constexpr unsigned char path[]{
        0x48,0x8b,0x7c,0x24,0x60,0x49,0x63,0xf6,0xe8,0,0,0,0,
        0x41,0x83,0xfe,0x03,0x0f,0x8e,0,0,0,0,
        0x48,0x8b,0x94,0x24,0x00,0x01,0x00,0x00,0x41,0x8d,0x47,0xf0,
        0x48,0x98,0xc6,0x04,0x02,0x2e,0x41,0x8d,0x47,0xf1,
        0x48,0x8b,0x94,0x24,0x00,0x01,0x00,0x00,0x48,0x98,0xc6,0x04,0x02,0x2e,
        0x48,0x8b,0x84,0x24,0x00,0x01,0x00,0x00,0xc6,0x04,0x18,0x2e,0xe9,0,0,0,0};
    static constexpr unsigned char draw_prefix[]{
        0x48,0x8b,0x74,0x24,0x60,0x31,0xc9,0x31,0xd2,0x48,0x89,0xef,0xe8};
    bool found = false;
    for (const auto &region : image.regions) {
        const auto *end = reinterpret_cast<const unsigned char *>(region.end);
        const auto *cursor = reinterpret_cast<const unsigned char *>(region.begin);
        while ((cursor = std::search(cursor, end, std::begin(path), std::begin(path) + 9)) != end) {
            const auto *bytes = cursor++;
            const uintptr_t address = reinterpret_cast<uintptr_t>(bytes);
            if (!image.contains(address, sizeof(path))) continue;
            bool matches = true;
            for (size_t i = 0; i < sizeof(path); ++i) {
                if ((i >= 9 && i < 13) || (i >= 19 && i < 23) || i >= 72) continue;
                if (bytes[i] != path[i]) { matches = false; break; }
            }
            if (!matches) continue;
            const uintptr_t resize = image.relative(address + 8, 1, 5);
            const uintptr_t draw = image.relative(address + 71, 1, 5);
            if (!image.contains(resize, sizeof(native_elf_default_resize_body)) ||
                std::memcmp(reinterpret_cast<const void *>(resize), native_elf_default_resize_body,
                    sizeof(native_elf_default_resize_body)) ||
                image.relative(address + 17, 2, 6) != draw || draw < 6 ||
                !image.contains(draw - 6, 23) ||
                std::memcmp(reinterpret_cast<const void *>(draw), draw_prefix, sizeof(draw_prefix)) ||
                image.relative(draw + 12, 1, 5) != image.base + profile.draw ||
                std::memcmp(reinterpret_cast<const void *>(draw - 6), "\x0f\x89", 2) ||
                image.relative(draw - 6, 2, 6) != address) continue;
            if (found) {
                log_line("ERROR", "Ambiguous native adventure action-caption resize path");
                return false;
            }
            found = true;
            // RDI/RSI already hold the caption and width. Supply zero fill
            // for the equivalent generic resize; the relay tail-jumps, so
            // the native call's stack alignment and return address persist.
            // The next cmp replaces flags, and all remaining volatile
            // registers are assigned before use. The native length guard
            // admits width-1: retain that one-byte padding case too, with
            // publication still requiring the exact ensuing dotted draw.
            binding = {address + 8 - image.base,
                std::vector<unsigned char>(bytes + 8, bytes + 13), {0x31,0xd2}, true};
        }
    }
    if (!found) log_line("ERROR", "Cannot resolve the native adventure action-caption resize path");
    return found;
}

#include "native_caption_semantics_elf.inc"

static bool resolve_native_caption_profile(NativeCaptionProfile &profile) {
    ModuleBuildId module;
    const auto *identity = native_elf_caption_profile(module);
    if (!identity) return false;
    const NativeElfCaptionImage image(module.base);
    uintptr_t item_resize = 0, item_draw = 0, default_resize = 0, stone_resize = 0;
    NativeCaptionInlineResize action_resize;
    if (!locate_native_elf_item_calls(image, *identity, item_resize, item_draw) ||
        !locate_native_elf_default_resize(image, *identity, default_resize) ||
        !locate_native_elf_stone_resize(image, *identity, stone_resize) ||
        !locate_native_elf_action_resize(image, *identity, action_resize)) return false;
    profile.base = module.base;
    // ui_look_list belongs to the main executable, while caption exports
    // belong to libg_src_lib.so. Both ABIs place display_str at +0x28.
    profile.map_caption_text_offset = 0x28;
    profile.map_hover_list = native_reference_address(native_history_profile_base(),
        native_history_layout::ui_look_list_rva);
    // These are the static curses_text_boxst toolbar cards, independent of
    // ViewBase's container named Tooltip. Calls are validated on installation.
    profile.legacy_toolbar_tooltip = elf_runtime::state().edition != 2;
    profile.inline_resizes.push_back(std::move(action_resize));
    // Inventory mode, other selection modes and their location line use the
    // same default-fill clone. Capture each complete string before dots are
    // written; the ensuing draw binds the original item/body-part grammar.
    // Companions copies either a historical-figure name or a full unit label
    // into its own string, then uses this same 33-cell default-fill clone.
    for (const uintptr_t call : {native_reference_va(0x11be13e),
            native_reference_va(0x119ab1d),
            native_reference_va(0x119ac55), native_reference_va(0x119ac05)}) {
        if (!image.contains(call, 5) ||
                image.relative(call, 1, 5) != native_reference_va(0x11612a0)) return false;
        const auto *bytes = reinterpret_cast<const unsigned char *>(call);
        profile.inline_resizes.push_back({call - image.base,
            std::vector<unsigned char>(bytes, bytes + 5), {0x31,0xd2}, true});
    }
    const auto widget_table = reinterpret_cast<uintptr_t>(
        dlsym(RTLD_DEFAULT, "_ZTVN7widgets14text_truncatedE"));
    if (!widget_table) return false;
    // Itanium vtables begin with offset-to-top and typeinfo. text::render
    // reads str+0x150; text_truncated::arrange copies original_str+0x180.
    profile.truncated_widget = {
        reinterpret_cast<void **>(widget_table + (2 + 3) * sizeof(void *)),
        0x10, 0x150, 0x180, 0x175};
    const auto textbox_table = reinterpret_cast<uintptr_t>(
        dlsym(RTLD_DEFAULT, "_ZTVN7widgets7textboxE"));
    auto *textbox_render = dlsym(RTLD_DEFAULT, "_ZN7widgets7textbox6renderEj");
    if (!textbox_table || !textbox_render) return false;
    // The object's vptr names the Itanium address point after its two header
    // words. render is abstract_interfacest slot 3, as on the native PE ABI.
    profile.textbox_widget = {textbox_table + 2 * sizeof(void *),
        reinterpret_cast<void **>(textbox_table + (2 + 3) * sizeof(void *)), textbox_render};
    // 53.16 ViewBase and the ELF constructor agree on rect+0x10 and name+0x80.
    // container::render invokes child render slot 3 after widget::render.
    const auto tooltip_table = reinterpret_cast<uintptr_t>(
        dlsym(RTLD_DEFAULT, "_ZTVN7widgets9containerE"));
    profile.tooltip_container_render = dlsym(RTLD_DEFAULT, "_ZN7widgets9container6renderEj");
    if (!tooltip_table || !profile.tooltip_container_render) return false;
    profile.tooltip_container_slot = reinterpret_cast<void **>(tooltip_table + (2 + 3) * sizeof(void *));
    const auto multiline_table = reinterpret_cast<uintptr_t>(
        dlsym(RTLD_DEFAULT, "_ZTVN7widgets14text_multilineE"));
    auto *multiline_render = dlsym(RTLD_DEFAULT, "_ZN7widgets14text_multiline6renderEj");
    if (!multiline_table || !multiline_render) return false;
    // ELF text_multiline::render reads str+0x150 and calls addst_flag at
    // render+0xbc (return +0xc1). Retain the complete widget string as well
    // as its native wrap rows; Linux previously left this binding empty.
    profile.multiline_widget = {
        reinterpret_cast<void **>(multiline_table + (2 + 3) * sizeof(void *)),
        0x10, 0x150, 0xc4, elf_runtime::symbol_return("_ZN7widgets14text_multiline6renderEj", 0xc1),
        multiline_render,
        reinterpret_cast<void **>(multiline_table + (2 + 4) * sizeof(void *)),
        dlsym(RTLD_DEFAULT, "_ZN7widgets14text_multiline7arrangeEv"),
        reinterpret_cast<NativeCaptionWidgetArrangeFn>(
            dlsym(RTLD_DEFAULT, "_ZN7widgets6widget7arrangeEv")), 0xc8};
    if (!profile.multiline_widget.expected_arrange ||
            !profile.multiline_widget.base_arrange) return false;
    if (!elf_runtime::symbol_return("_ZN7widgets14text_multiline6renderEj", 0xc1)) return false;
    profile.resize_target = identity->resize;
    profile.draw_target = identity->draw;
    profile.resize = reinterpret_cast<NativeCaptionResizeFn>(module.base + identity->resize);
    profile.draw = reinterpret_cast<NativeCaptionDrawFn>(dlsym(RTLD_DEFAULT,
        "_ZN9graphicst5addstERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13justificationi"));
    // ELF item/building detail renderers shorten names through the same
    // native resize entry but are not embark call sites. These prologues have
    // no PC-relative operands; shared entry hooks retain the original ABI.
    profile.resize_entry_prefix = {
        0xf3,0x0f,0x1e,0xfa,0x41,0x56,0x41,0x55,0x41,0x54,0x55,0x48,0x89,0xf5};
    profile.draw_entry_prefix = {
        0xf3,0x0f,0x1e,0xfa,0x41,0x55,0x41,0x54,0x55,0x53,0x48,0x83,0xec,0x38};
    profile.truncate = reinterpret_cast<NativeCaptionTruncateFn>(dlsym(RTLD_DEFAULT,
        "_Z15truncate_stringRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi"));
    profile.flag_draw = reinterpret_cast<NativeCaptionFlagDrawFn>(dlsym(RTLD_DEFAULT,
        "_ZN9graphicst10addst_flagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13justificationij"));
    // Verified against the 53.16 g_src definitions and libg_src_lib exports.
    // Top drawing is a separate native entry; top_in_use is visibility state,
    // never the destination selector for ordinary addst.
    profile.top_draw = reinterpret_cast<NativeCaptionDrawFn>(dlsym(RTLD_DEFAULT,
        "_ZN9graphicst9top_addstERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13justificationi"));
    profile.top_flag_draw = reinterpret_cast<NativeCaptionFlagDrawFn>(dlsym(RTLD_DEFAULT,
        "_ZN9graphicst14top_addst_flagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE13justificationij"));
    // End before truncate's short conditional branch. Every retained
    // instruction is complete and position independent in this native ABI.
    profile.truncate_entry_prefix = {0xf3,0x0f,0x1e,0xfa,0x48,0x63,0xf6};
    profile.flag_draw_entry_prefix = {
        0xf3,0x0f,0x1e,0xfa,0x41,0x56,0x41,0x55,0x41,0x54,0x55,0x53,0x48,0x83,0xec,0x30};
    profile.top_draw_entry_prefix = profile.draw_entry_prefix;
    profile.top_flag_draw_entry_prefix = profile.flag_draw_entry_prefix;
    profile.default_resizes.push_back(reinterpret_cast<NativeCaptionDefaultResizeFn>(default_resize));
    if (stone_resize != default_resize)
        profile.default_resizes.push_back(reinterpret_cast<NativeCaptionDefaultResizeFn>(stone_resize));
    // push r13; push r12; mov r12,rsi -- complete, position-independent
    // instructions preceding the clone's length comparison and branches.
    profile.default_resize_entry_prefix = {0x41,0x55,0x41,0x54,0x49,0x89,0xf4};
    profile.signatures = {{identity->resize,
        {0xf3,0x0f,0x1e,0xfa,0x41,0x56,0x41,0x55,0x41,0x54,0x55,0x48}}};
    for (size_t i = 0; i < identity->embark_resize.size(); ++i)
        profile.sites.push_back({identity->embark_resize[i], identity->embark_draw[i], NativeFieldKind::EmbarkItem});
    profile.sites.push_back({item_resize,item_draw,NativeFieldKind::EmbarkItem});
    profile.sites.push_back({identity->origin[0],identity->origin[1],NativeFieldKind::Origin});
    for (const auto &item : identity->legends_items) {
        profile.sites.push_back({item[0],item[2],NativeFieldKind::BookTitle});
        profile.sites.push_back({item[1],item[3],NativeFieldKind::BookType});
    }
    return profile.draw && profile.truncate && profile.flag_draw &&
        profile.top_draw && profile.top_flag_draw && resolve_native_caption_semantics_elf(profile);
}
#endif
