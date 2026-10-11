#include "ffc/types.h"

extern void func_ov000_0215355c(void);
extern uint8_t func_ov000_02154424(uint8_t v);

int func_ov000_02153f7c(uint8_t *p) {
    uint32_t off = 0x14c5;
    uint32_t b;
    uint8_t t;
    uint32_t r;
    p[off] = 0;
    b = p[off - 10];
    t = (uint8_t)(((b << 24) >> 28) + 1);
    r = (uint32_t)t << 28;
    p[off - 10] = (uint8_t)((b & ~0xf0) | (r >> 24));
    func_ov000_0215355c();
    p[off - 4] = func_ov000_02154424(1);
    return 3;
}
