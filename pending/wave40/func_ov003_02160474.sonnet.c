#include "ffc/types.h"

extern uint32_t func_ov003_02146494(uint32_t a);
extern uint32_t func_ov003_021464f4(uint32_t a, uint32_t b);
extern void func_0205770c(uint32_t *p);
extern uint32_t func_ov003_021607c0(uint8_t *self, uint32_t x, uint32_t *p);

uint32_t func_ov003_02160474(uint8_t *self, uint32_t flag) {
    uint32_t local[2];
    uint32_t *p;
    uint32_t r4;
    uint32_t r7;
    uint32_t r0;
    uint32_t res;
    uint32_t x;
    uint32_t f;

    x = func_ov003_02146494(*(uint32_t *)(self + 0x80));
    r7 = func_ov003_021464f4(*(uint32_t *)(self + 0x80), *(uint32_t *)(x + 0xb0));

    f = *(uint32_t *)(*(uint32_t *)(self + 0x8c) + 4);
    if (f & (1u << 12)) {
        r4 = 1;
    } else {
        r4 = 0;
    }

    func_0205770c(local);
    r0 = func_ov003_021607c0(self, r7, local);

    p = *(uint32_t **)(self + 0x8c);
    res = 1;
    if (!(p[1] & 0x200)) {
        if (!(p[1] & 0x100)) {
            res = 0;
        }
    }

    if (flag) {
        if (r4 && r0) {
            res = 1;
        } else {
            res = 0;
        }
    }
    return res;
}
