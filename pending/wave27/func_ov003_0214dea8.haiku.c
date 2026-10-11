#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

uint32_t func_ov003_0214dea8(uint8_t *mar, uint32_t idx, uint32_t flag)
{
    uint8_t *base;
    uint8_t *t;
    uint8_t *e;
    uint32_t v;

    base = (uint8_t *)func_02052d90(*(void **)(mar + 0x358), *(uint32_t *)(mar + 0x35c));
    t = base + *(uint32_t *)(base + 8);
    e = t + (idx << 3);
    if (flag != 0) {
        goto second;
    }
    v = *(uint16_t *)(e + 4);
    if (v != 0) {
        return v;
    }
second:
    if (flag == 0) {
        return 0;
    }
    v = *(uint16_t *)(e + 6);
    if (v != 0) {
        return v;
    }
    return 0;
}
