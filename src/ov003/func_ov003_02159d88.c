#include "ffc/types.h"

extern void *func_ov003_02155b40(void *p);
extern void func_ov003_0215acbc(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);

int func_ov003_02159d88(void *p0) {
    uint8_t *p = (uint8_t *)p0;
    uint16_t t = *(uint16_t *)(p + 0xb2);
    int32_t r;
    int32_t n;
    uint8_t *q;

    if (t != 0) {
        q = (uint8_t *)func_ov003_02155b40(p0);
        r = (uint16_t)(t - *(uint16_t *)(q + 0x10));
        if (r >= 0x8000) {
            r = 0x10000 - r;
        }
        n = r >> 11;
        if (n != 0) {
            func_ov003_0215acbc(p0, t, (uint16_t)n, 0, 0, 2, 0);
            return 1;
        }
        *(uint16_t *)(p + 0xb2) = 0;
    }
    return 0;
}
