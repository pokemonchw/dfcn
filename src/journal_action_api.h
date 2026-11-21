#pragma once
#include <cstddef>
#include <cstdint>

// Buffers are borrowed only during the callback. The subscriber owns the
// action, its menu labels and its persistent English report format.
using DfcnJournalLine = void (*)(void *, const char *, size_t);
using DfcnJournalPart = void (*)(void *, const char *, size_t, bool plant_name);
struct DfcnJournalAction {
    uint32_t abi, size;
    const char *english, *chinese, *report_prefix;
    bool (*collect)(uintptr_t image, uintptr_t world, DfcnJournalLine, void *);
    bool (*translate)(const char *, size_t, DfcnJournalPart, void *);
};
inline constexpr uint32_t DFCN_JOURNAL_ACTION_ABI = 1;
using DfcnGetJournalAction = const DfcnJournalAction *(*)(uint32_t);
