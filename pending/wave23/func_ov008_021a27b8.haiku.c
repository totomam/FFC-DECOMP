#include "ffc/types.h"

struct FfcMarDecoded;
extern void *func_02052d90(const struct FfcMarDecoded *mar, uint32_t index);

uint32_t func_ov008_021a27b8(struct FfcMarDecoded *mar)
{
    uint8_t *p = (uint8_t *)mar;
    if (p[0x144] != 0) {
        uint32_t *r = (uint32_t *)func_02052d90(*(const struct FfcMarDecoded **)(p + 0xc0), *(uint32_t *)(p + 0xc4));
        return r[4];
    }
    {
        uint32_t *r = (uint32_t *)func_02052d90(*(const struct FfcMarDecoded **)(p + 0xc0), *(uint32_t *)(p + 0xc4));
        return r[2];
    }
}
