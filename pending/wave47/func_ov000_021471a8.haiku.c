#include "ffc/types.h"

extern uint32_t func_ov000_021456f8(uint8_t *a, uint32_t b, void *c, uint32_t d);
extern uint32_t func_ov000_02146b30(void *a, uint8_t *b, uint32_t c);
extern uint32_t func_ov000_02146bb8(void *a, uint8_t *b, uint32_t c);
extern uint32_t func_ov000_02146d50(void *a, uint8_t *b, uint32_t c);
extern uint32_t func_ov000_021470fc(void *a, uint8_t *b, uint32_t c);
extern uint32_t func_ov000_02147184(void *a, uint8_t *b);
extern uint32_t func_ov000_021469ac(void *a, uint8_t *b, uint32_t c);

uint32_t func_ov000_021471a8(uint32_t ctx, uint8_t *obj, uint32_t n) {
    int32_t f;
    int32_t t;
    uint32_t r;
    if (n < 0x14) {
        return ctx;
    }
    f = obj[0xc] & 0xf0;
    if (f < 0x50) {
        return f;
    }
    if (n < ((uint32_t)f >> 2)) {
        return (uint32_t)f >> 2;
    }
    r = func_ov000_021456f8(obj, n, (void *)ctx, 6);
    if (r != 0) {
        return r;
    }
    f = obj[0xc] & 0xf0;
    n -= (uint32_t)f >> 2;
    t = obj[0xd] & 0x17;
    switch (t) {
    case 2:
        if (0x28 & obj[0xd]) {
            return obj[0xd];
        }
        return func_ov000_02146b30((void *)ctx, obj, n);
    case 0x12:
        if (0x28 & obj[0xd]) {
            return obj[0xd];
        }
        return func_ov000_02146bb8((void *)ctx, obj, n);
    case 0x10:
    case 0x11:
        return func_ov000_02146d50((void *)ctx, obj, n);
    case 1:
        return func_ov000_021470fc((void *)ctx, obj, n);
    default:
        if (obj[0xd] & 4) {
            return func_ov000_02147184((void *)ctx, obj);
        }
        return func_ov000_021469ac((void *)ctx, obj, n);
    }
}
