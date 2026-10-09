#include "ffc/mar.h"

/*
 * Behavioral decompilation of ARM9 Thumb leaf 0x02052D90-0x02052D98.
 * NONMATCHING: the Metrowerks compiler version and target flags are not pinned.
 */
void *ffc_mar_entry(const FfcMarDecoded *mar, uint32_t index) {
    return mar->entries_18[index];
}
