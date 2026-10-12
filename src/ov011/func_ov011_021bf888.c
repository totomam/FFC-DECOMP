#include "ffc/types.h"

extern uint32_t func_020696e8(const void *object);
extern void func_ov011_021c13dc(void *p);
extern void func_ov011_021c1414(void *p);

void func_ov011_021bf888(void *p)
{
    uint8_t *s = (uint8_t *)p;
    uint32_t *o;
    uint32_t a, b;
    uint32_t x;

    s[0x281] = 1;
    o = (uint32_t *)func_020696e8(p);
    a = o[1];
    b = o[2];
    x = a & (a ^ b);
    if (x & 0x800) {
        func_ov011_021c13dc(s);
    } else {
        o = (uint32_t *)func_020696e8(s);
        a = o[1];
        b = o[2];
        x = a & (a ^ b);
        if (x & 0x400) {
            func_ov011_021c1414(s);
        }
    }
    *(uint32_t *)(s + 0x338) = *(uint32_t *)(s + 0x33c);
}
