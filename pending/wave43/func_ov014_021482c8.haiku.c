#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

uint8_t func_ov014_021482c8(uint8_t *ctx, uint32_t id)
{
    uint32_t sel, off, i, o;
    volatile uint32_t count, stride;
    uint8_t *d, *ent;

    if (id <= 0x7d || id == 0x203e || (id >= 0xff61 && id <= 0xff9f)) {
        sel = 0;
    } else {
        sel = 1;
    }

    d = (uint8_t *)func_02052d90(*(void **)(ctx + 8), *(uint32_t *)(ctx + 0xc));
    off = sel * 4;
    count = *(uint32_t *)(d + *(uint32_t *)(d + *(uint32_t *)(d + 8) + off) + 0x14);

    d = (uint8_t *)func_02052d90(*(void **)(ctx + 8), *(uint32_t *)(ctx + 0xc));
    stride = *(uint32_t *)(d + *(uint32_t *)(d + *(uint32_t *)(d + 8) + off) + 0xc);

    for (i = 0; i < count; i++) {
        d = (uint8_t *)func_02052d90(*(void **)(ctx + 8), *(uint32_t *)(ctx + 0xc));
        d = d + *(uint32_t *)(d + *(uint32_t *)(d + 8) + off);
        d = d + *(uint32_t *)(d + 0x34);
        o = i * stride;
        ent = d + o;
        if (((uint32_t)d[o] << 8) + ent[1] == id) {
            return ent[2];
        }
    }
    return 0x10;
}
