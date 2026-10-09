#ifndef FFC_MAR_H
#define FFC_MAR_H

#include "ffc/types.h"

/* Minimal structural view required by ARM9:0x02052D90. */
typedef struct {
    uint8_t unknown_00[0x18];
    void *const *entries_18;
} FfcMarDecoded;

void *func_02052d90(const FfcMarDecoded *mar, uint32_t index);

FFC_STATIC_ASSERT(ffc_mar_entry_array_offset, FFC_OFFSETOF(FfcMarDecoded, entries_18) == 0x18);

#endif
