# Fortress alert UI: native source reconstruction

Scope: the yellow alert list popup, its unit-report subview, the red ALERT
button hover and the individual alert icon hover. The configured reference
and classic PE image bodies are saved independently. No game process or
translation was executed. native-literals.tsv is an operand inventory, not
a translation dictionary: SIMD copies of +16/+32/+48 portions of the same
header are not independent sentences.

Native owners (RVAs; the PE image base must be added):
  reference main Fortress renderer   0x3d6950..0x3fd60d
  classic   main Fortress renderer   0x3d4510..0x3fb1cd
  reference alert popup renderer     0x40d5f0..0x40f77a
  classic   alert popup renderer     0x40b1b0..0x40d33a
  reference alert popup input        0x40f780..0x4105a9
  classic   alert popup input        0x40d340..0x40e169

The main renderer is one monolithic native function. Its complete body is
retained in the alert-hover-renderer.asm files; the literal/call/branch
inventories are restricted to the actual alert-related instruction ranges.

THE YELLOW POPUP HAS THREE SOURCE BRANCHES, IN THIS PRIORITY ORDER:

  if (interface.viewing_unit != nullptr):
      walk viewing_unit.report vector at unit+0xce8+24*viewing_unit_uac;
      find report IDs in world.status.reports;
      build uac_text, uac_zoom_line_ann, uac_zoom_line_is_start;
      show recenter header;
  else if (interface.viewing_alert_button):
      walk world.status.alert_button_announcement_id;
      find report IDs in world.status.reports;
      build alert_text, zoom_line_ann, zoom_line_unit=null, unit_uac=-1;
      show recenter header;
  else if (interface.viewing_alert != nullptr):
      walk viewing_alert.announcement_id;
      find report IDs in world.status.reports;
      build alert_text + report ownership vectors;
      walk viewing_alert.report_unid with parallel category vector;
      find live unit; missing unit is skipped in this popup branch;
      append the unit identity/status summary and unit ownership vectors;
      show full-text header if report_unid is nonempty, recenter otherwise;
  else:
      no source text is rendered.

Cached text is rebuilt when the native width is not 80 cells. The native
rectangle is 94 cells wide INCLUDING its two frame columns: left=R8D+4,
right=left+0x5d, both inclusive. Its frame rows are 4..0x26 inclusive,
the header starts at (left+2, 6), and 29 body rows start at (left+2, 8).
These dimensions are read from the renderer operands, not the screenshot.
The selected unit branch has its own width/scroll/cache. The main renderer calls it with
rcx = image+0x18a3598 (reference) or image+0x189d568 (classic), after checking
that structure's open byte. All field offsets appear in native-fields.tsv.

Missing report IDs are skipped in all three branches. Each found report
uses report.text at +8, optionally appending ` x` and integer
(report.repeat at +0x34)+1 when repeat > 0. The report object is retained
for every resulting wrapped row, including spacer rows; its first wrapped
row has the corresponding zoom_line_is_start bit set. The native routine
reserves at least three rows per popup entry so recenter/view-report icon
blocks do not collide. Curses text box +0 is vector<string*> (+0 start,
+8 finish, +0x10 end); strings use MSVC small-string layout.

The popup render loop passes these cached row strings to graphicst::addst
(reference 0xad9960; classic 0xad69a0). Unit category summaries are owned
by zoom_line_unit rather than a report pointer, with parallel int16 category
and the same first-line bitmap. A report can have zero, one, or two native
location icon groups, according to the coordinate sentinel -30000 at
report+0x3c/+0x48. Their foreground colors are report+0x28/+0x2a; summaries
use combat=4, sparring=3, hunting=2. Overflow adds a native scrollbar.

TWO HOVER SOURCE BRANCHES:

The red ALERT button hover rebuilds d_interface.hover_announcement_alert_
button_text from alert_button_announcement_id -> report lookup -> full
report.text + optional repeat suffix. It does not have unit summaries.

The individual alert icon hover rebuilds d_interface.hover_announcement_
alert_text when the alert pointer or width changes. It first walks the
alert's announcement_id reports, then report_unid/category unit summaries.
For a missing unit only this hover branch substitutes the literal Somebody.
Color and brightness are parallel byte vectors; one value is appended for
every native wrapped row. These hovers render only when the alert popup is
closed and the modal announcement popup vector is empty; native instruction
hover priority also applies. Both draw the same expand/recenter header.

The actual draw order is popup (reference call 0x3fa6f8), subsequent native
modal/report widget drawing, then the hover section at 0x3fa94d. Popup and
hover cannot draw together in this function: button hover tests popup.open
at 0x3fa996 and, if open, branches via 0x3fa99f to 0x3fac86; individual
hover tests the same open value at 0x3fac90 and branches at 0x3fac92 to
0x3faf77. The successful button-hover branch ends by jumping at 0x3fac7a
to 0x3fb44f, past the individual-hover body, so the two hover bodies are
also mutually exclusive. Classic addresses in this paragraph are each
reference RVA minus 0x2440. Early guards at 0x3fa960/0x3fa974/0x3fa981
also suppress hover for the native modal/report-widget/instruction states.

FIXED SENTENCES AND DYNAMIC GRAMMAR:

  ALERT
  Left click for recenter and expand options.  Right click to dismiss.
  You can recenter on certain announcements.  Right click to close.
  Select a report to view the full text.  Right click to close.
  {report.text}[ x{repeat+1}]
  {unit.name} is fighting!       category 0
  {unit.name} is sparring.       category 1
  {unit.name} is hunting.        category 2
  Somebody replaces unit.name only in a missing-unit hover branch.

Unit names come from the native unit caption helper (reference 0x1331500,
classic 0x132c470), then the native capitalization helper (reference
0x52d650, classic 0x52b070). Categories outside 0..2 append no verb and keep
the native unfinished ` is `; no additional status is inferred. All actual
constructors, fixed loads, and conditional branches are retained in the
native source listings and decompiled-source-branches.tsv. native-sources.tsv
lists the complete finite caption/fallback sources, while text-productions.tsv
lists full body grammar, repeats, known categories and invalid-category
fallthroughs. native-literals.tsv retains fragments with their actual operands
and does not treat copied header suffixes as additional UI messages.

THE SOURCE IS NOT A COLLECTION OF ALREADY SPLIT ENGLISH ROWS:

reference 0x8e7310 / classic 0x8e4b80 copies a complete source string into
a temporary vector and invokes reference 0x8e7440 / classic 0x8e4cb0. That
inner function wraps by native byte/cell width, prefers ASCII spaces, and
handles a word exceeding the line width by editing the temporary source.
It drops leading ASCII spaces after a split. The English constructor has
already chosen report/category/name/repeat branches before this wrapping.
Therefore translating a screenshot line or adding a cropped sentence to an
ordinary exact caption dictionary does not cover all these source branches.

TRANSLATION OWNERSHIP:

The three instructional header sentences and ALERT are finite UI captions.
Their ordinary caption translation remains separate from the body source.
The body report source belongs to the complete announcement translation
path, which already shares the help/tutorial exact catalog; the urgent
example is consequently a report/help source, not a new UI-only sentence.
Unit summaries belong to the complete announcement summary grammar with a
semantic unit name, rather than isolated translations of ` is ` or the
three verbs. Repeat numbers remain numeric suffixes. The popup's two header
families and hover's header family must all identify announcement foreground
frames; only recognizing the expand-options hover header omits the yellow
popup and its complete source ownership.

The original hover rows-count calls (reference 0x3fa9eb/0x3facde; classic
0x3f85ab/0x3f889e) only execute in those hover branches. They cannot capture
the yellow popup background. Foreground identity for all three header
families and a popup callsite snapshot are separate requirements: the
header determines announcement ownership; the original pre-popup page
preserves the cells that the native popup has overwritten. A popup snapshot
must not be replaced by a hover snapshot through a shared capture slot.

Report ID lookup has no hidden display-vector fallback. Its saved helper
reads only the vector passed in rdx and searches report+0x50 IDs. The popup
and both hover constructors pass world.status.reports (reference global
0x24e3850; classic 0x24dd740). Any separate tutorial report allocation
registration must be established from that allocator, not inferred from
the popup renderer.

LIVE ROW OWNERSHIP:

The fortress popup cache retains ownership independently of the paragraph
hook. `uac_text` (+0xf0) pairs every row with `uac_zoom_line_ann` (+0xd8)
when viewing_unit is non-null. Otherwise `alert_text` (+0x80) pairs with
`zoom_line_ann` (+0x38), `zoom_line_unit` (+0x50), and the int16 categories
(+0x68). The two bit vectors (+0xb8 / +0x18) mark each entry's first row;
adjacent entries can share a report pointer without being one paragraph.
One-line entries insert a blank before and after their text; two-line
entries append a blank. These spacers are not semantic source text.

`src/native_fortress_alert_sources.inc` reads these live owner fields.
Report text comes from the parent report, with repeat_count kept separately;
unit summaries use the actual unit/category, including the missing-unit
hover fallback. The shared announcement renderer compares the live string
addresses and drawn bytes, then translates the complete owner source before
applying the visible scroll slice. Native wrap width bounds the translation
so location/report controls keep their own columns. A closed visual frame
can refine adventure/log layout but no longer gates fortress source identity.
This also handles caches built before paragraph capture started and the
tutorial's directly allocated report.

Foreground frame ownership also accepts the current native popup/hover
capture rectangles directly. Their callsites retain exact bounds before
the native clear, so missing artwork edges no longer prevent the foreground
read view from clearing the erased map's old font-half flags. Separate
background page views do not inherit these foreground rectangles, and later
overlay frames retain their own occlusion and font ownership.

The configured PE submitter also copies the entire submitted string into
one report: reference 0xe4680 allocates once, and 0xe4692..0xe46ad copies
the original source length to report+8. Its repeat branch updates the
existing record and returns. This function sets report flags 0x2/0x8/0x4,
but does not split a wrapped paragraph into new continued (0x1) reports.
The popup's per-report full source therefore precedes its row wrapping.

INPUT BRANCHES:

The saved input body applies the same unit/all/selected-alert priority and
ignores unbuilt caches. It handles the report-tab icon using the selected
alert type (default 0 when none); native scrollbar drag, single row/page
scrolling; the first-row bitmap; recentering on either report coordinate
group; a unit-summary report icon that changes viewing_unit/category and
invalidates that subview cache; and right-click/leave dismissal. Right click
backs out of the unit subview when a parent alert or ALERT-button list is
available, otherwise closes the popup. These branches generate no additional
finite English caption in this function; recenter/report controls use their
native instruction-hover mechanisms.

The report-tab click is reference input 0x40f876 -> 0xef3f0 (classic
0x40d436 -> 0xef380). The saved report-tab-select-from-alert helper opens
the report widget, locates the internal "Widgets" and "Tabs" controls,
obtains the chosen alert.type caption using reference 0xed7c0 (classic
0xed750), and selects the matching tab. Those two internal control keys
are not displayed text in the yellow alert popup; the downstream report
widget is a separate renderer. No configuration sentence is constructed.

RENDERER ABI AND STACK:

Reference entry 0x40d5f0 is called at 0x3fa6f8; classic entry 0x40b1b0 is
called at 0x3f82b8. The Microsoft x64 register setup in both callers is:

    RCX = announcement_alert_interfacest global
    EDX = EBX
    R8D = DWORD [caller RBP+0xb8]
    R9D = DWORD [caller RBP+0xb4]

The callee retains RCX as owner and consumes the incoming R8D to derive
the left edge as R8D+4. It overwrites EDX/R9D before consuming either; no incoming stack
argument is referenced. Neither caller consumes the returned RAX. The
routine's contract for interception can therefore be a void four-register
function with the same integer/pointer register forwarding.

Both images start with the same 28 position-independent bytes:

    48 89 5c 24 10 55 56 57 41 54 41 55 41 56 41 57
    48 8d 6c 24 a0 48 81 ec 60 01 00 00

The first instruction stores RBX at entry_RSP+0x10. Seven pushes subtract
0x38; LEA sets RBP=entry_RSP-0x98; SUB RSP,0x160 sets
RSP=entry_RSP-0x198. Every remaining RSP/RBP local access stays inside that
frame except the epilogue [RSP+0x1a8], which restores the saved RBX at
entry_RSP+0x10. It is not a fifth argument. The next instruction at entry+28
is a RIP-relative security-cookie load and needs relocation if copied.
native-renderer-abi.tsv records these identities and bytes;
native-renderer-stack.tsv preserves every actual stack operand and instruction.

SOURCE ARTIFACTS:

The paired .asm files contain the independently extracted actual instructions
for both editions. native-owners.tsv records anchor ownership;
native-calls.tsv and native-branch-edges.tsv record direct calls and conditional
edges; native-fields.tsv and native-globals.tsv record owner/cache/report
layout. These files are source evidence for implementation, not tests or
an observed game-display result.
