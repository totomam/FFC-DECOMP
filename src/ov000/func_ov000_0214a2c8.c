#include "ffc/types.h"

extern int32_t func_ov000_0214a230(uint8_t a, uint8_t b);
extern void func_02084ca4(const uint8_t *src, uint8_t *dst, uint32_t n);
extern void func_ov000_021495cc(uint8_t *p);
extern uint32_t func_ov000_0214a1f0(const uint8_t *p, int32_t v, int32_t n);

void func_ov000_0214a2c8(uint8_t *p, const uint8_t *q)
{
    const uint8_t *s;
    const uint8_t *t;
    uint32_t n;
    int32_t v;
    uint16_t r;

    if (func_ov000_0214a230(q[0], q[1]) == 0) {
        return;
    }
    func_02084ca4(q + 2, p + 0x34, 0x20);
    n = q[0x22];
    s = q + 0x23;
    if (n != 0x20) {
        p[0x30] = 0;
    } else {
        func_02084ca4(s, p + 0x74, 0x20);
        func_ov000_021495cc(p);
    }
    t = s + n;
    v = ((int32_t)t[0] << 8) + t[1];
    r = (uint16_t)func_ov000_0214a1f0(t + 2, v / 2, 2);
    *(uint16_t *)(p + 0x32) = r;
    if (r != 0) {
        p[0x455] = 1;
    }
}
