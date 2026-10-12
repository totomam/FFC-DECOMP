#include "ffc/types.h"

extern uint32_t func_02023658(uint32_t a, void *b, void *c, uint32_t d);
extern void func_02025704(void *a, void *b, void *c);

void func_02024f48(uint32_t *out, uint8_t *ctx)
{
    uint8_t *obj = *(uint8_t **)(ctx + 0xe8);
    uint32_t val;
    uint32_t res;
    uint32_t i;
    uint32_t tmp;
    uint8_t buf[4];

    if (*(int32_t *)obj < 0x40000) {
        val = *(uint32_t *)(obj + 0x14);
    } else {
        val = *(uint32_t *)(*(uint8_t **)(ctx + 0xe4) + 0x28);
    }
    res = func_02023658(val, obj, *(void **)(ctx + 0xe4), 0);

    out[0] = 0;
    out[1] = 0;
    out[2] = (uint32_t)(out + 1);

    if (*(uint32_t *)(ctx + 0x1b8) != 0) {
        for (i = 0; i < *(uint32_t *)(ctx + 0x1b8); i++) {
            uint8_t *entries = *(uint8_t **)(ctx + 0x1b0);
            uint32_t w = *(uint32_t *)(entries + i * 8 + 4);
            uint8_t *p = (uint8_t *)res + ((w & 0xff) << 5);
            uint16_t m = *(uint16_t *)(p + 6);
            if (m > 0x3f) {
                m = 0x3f;
            }
            buf[2] = (uint8_t)m;
            func_02025704(&tmp, out, &buf[2]);
        }
    }
}
