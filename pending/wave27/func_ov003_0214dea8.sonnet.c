#include "ffc/types.h"

extern void *func_02052d90(const void *mar, uint32_t index);

uint32_t func_ov003_0214dea8(uint8_t *mar, uint32_t idx, uint32_t flag)
{
    uint8_t *base = (uint8_t *)func_02052d90(*(void **)(mar + 0x358), *(uint32_t *)(mar + 0x35c));
    uint16_t *e = (uint16_t *)(base + *(uint32_t *)(base + 8) + (idx << 3));
    uint32_t r = 0;

    if (flag == 0) {
        uint32_t v = e[2];
        if (v != 0) {
            r = v;
            goto done;
        }
    }
    if (flag != 0) {
        uint32_t v = e[3];
        if (v != 0) {
            r = v;
        }
    }
done:
    return r;
}
