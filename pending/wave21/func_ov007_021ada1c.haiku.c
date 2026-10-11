#include "ffc/types.h"

extern uint32_t data_ov007_021c53ec[2];

void func_ov007_021ada1c(uint32_t *p)
{
    uint32_t *d;
    uint32_t a, b;

    if (p[0x22] == 0) {
        uint32_t v = p[3];
        v &= ~0xffu;
        p[3] = v | 2;
    }
    d = data_ov007_021c53ec;
    a = d[0];
    b = d[1];
    p[0x20] = a;
    p[0x21] = b;
}
