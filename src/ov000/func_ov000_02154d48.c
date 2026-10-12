#include "ffc/types.h"

extern uint32_t func_ov000_02152ce0(uint32_t v);
extern uint32_t func_ov000_02154cc8(uint8_t *p);
extern void func_ov000_0214ef8c(uint32_t *a, uint32_t *b);

void func_ov000_02154d48(uint8_t *p)
{
    uint8_t *q;
    uint32_t a;
    uint32_t b;
    uint32_t r;
    uint32_t sum;

    if (p[0x14bd] >= 0x12) {
        return;
    }
    r = func_ov000_02152ce0(p[0x14bd]);
    if (r <= 2) {
        q = p + (r << 8);
    } else {
        q = p + 0x300 + ((r - 10) << 9);
    }
    sum = q[0xcb] + (q[0xca] + (q[0xc8] + q[0xc9]));
    if (q[0xc0] == 0 && sum != 0) {
        a = func_ov000_02154cc8(q + 0xc8);
        b = func_ov000_02154cc8(q + 0xcc);
        func_ov000_0214ef8c(&a, &b);
    }
}
