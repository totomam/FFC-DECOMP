#include "ffc/types.h"

extern void *func_0208ceec(void);
extern int func_0208cf38(int a, int b, int c);
extern void func_02087874(void *p, uint32_t n);

uint32_t func_0208d460(void) {
    uint32_t r4;
    uint32_t r6;
    uint8_t *s;
    uint8_t *self;

    self = (uint8_t *)func_0208ceec();
    if (func_0208cf38(2, 7, 8) != 0) {
        return 0;
    }
    func_02087874(*(uint8_t **)(self + 4) + 0xc, 4);
    s = *(uint8_t **)(self + 4);
    if (*(uint32_t *)(s + 0xc) == 1) {
        return 0;
    }
    r4 = 0x188;
    func_02087874(s + r4, 2);
    s = *(uint8_t **)(self + 4);
    r6 = 1;
    if (*(uint16_t *)(s + r4) != 0) {
        r6 = 0;
    }
    func_02087874(s + 0x3e, 2);
    s = *(uint8_t **)(self + 4);
    r4 = *(uint16_t *)(s + 0x3e);
    if (r6 == 1) {
        uint32_t v;
        func_02087874(s + 0xf8, 2);
        s = *(uint8_t **)(self + 4);
        r4 += 0xc;
        v = r4 * *(uint16_t *)(s + 0xf8);
        v = (v + 0x29) & ~0x1fu;
        return v << 1;
    }
    r4 += 0x51;
    r4 &= ~0x1fu;
    return r4 << 1;
}
