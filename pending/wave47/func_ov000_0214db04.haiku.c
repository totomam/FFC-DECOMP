#include "ffc/types.h"

extern int32_t func_ov000_02147a70(int32_t *out);
extern void func_020871d8(int32_t x);
extern void func_02084e04(int32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02147b7c(uint32_t x);
extern int32_t func_ov000_0214d9b4(uint8_t *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov000_0214dcd4(uint8_t *obj);

int32_t func_ov000_0214db04(uint8_t *self)
{
    uint8_t *r4 = *(uint8_t **)(self + 4);
    uint32_t r6 = *(uint32_t *)(self + 0x14);
    uint8_t *a = *(uint8_t **)(r4 + 0xa0);
    uint32_t p0c = *(uint32_t *)(self + 0x10);
    uint32_t p08 = *(uint32_t *)(self + 0x18);
    uint32_t p04 = *(uint32_t *)(self + 0x1c);
    int32_t r5;
    int32_t idx;
    r5 = *(int32_t *)(a + 0xf8);
    idx = 0xaf;
    int32_t t;
    int32_t ok;
    int32_t c;

    for (;;) {
        ok = func_ov000_02147a70(&t);
        if (ok == 0) break;
        if (t - r5 > 0) break;
        c = 1;
        if (*(int8_t *)(r4 + idx) != 0 && *(int8_t *)(r4 + idx) != 4) {
            c = 0;
        }
        if (c) {
            if (r4[8] != 4) {
                ok = 0;
                break;
            }
        }
        func_020871d8(10);
    }

    if (*(int16_t *)(r4 + 0xac) & 0x80) {
        return -15;
    }

    if (*(int8_t *)(r4 + 0xaf) == 4) {
        if (ok == 0) {
            return 0;
        }
        if (r6 > (uint32_t)t) {
            r6 = t;
        }
        func_02084e04(ok, p0c, r6);
        func_ov000_02147b7c(r6);
        return r6;
    }

    if (ok != 0) {
        r5 = func_ov000_0214d9b4(r4, p0c, r6, p08, p04);
    } else {
        r5 = 0;
    }

    if (r5 <= 0) {
        return r5;
    }
    if (*(int32_t *)(a + 0xf8) >= *(uint16_t *)(a + 0xfc)) {
        func_ov000_0214dcd4(r4);
    }
    return r5;
}
