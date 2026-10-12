#include "ffc/types.h"

struct S {
    uint32_t a[5];
    uint8_t *q;
    uint32_t state;
    uint8_t flag;
    uint8_t pad[3];
    uint32_t c20;
    uint32_t c24;
    uint32_t c28;
    uint32_t c2c;
};

extern int func_ov000_0215af84(int r0, void (*fn)(void), struct S *p, uint32_t c20, uint32_t c24, uint32_t c28, uint32_t c2c);
extern void func_02073004(void);

void func_02072f98(struct S *p)
{
    if (p->state == 0) goto s0;
    if (p->state == 1) goto s1;
    return;
s0:
    if (func_ov000_0215af84(0, func_02073004, p, p->c20, p->c24, p->c28, p->c2c) == 0) {
        p->a[3] = (p->a[3] & ~0xffu) | 2u;
        return;
    }
    p->q[0x24] = 1;
    p->state = p->state + 1;
    return;
s1:
    if (p->flag != 0) {
        p->a[3] = (p->a[3] & ~0xffu) | 2u;
    }
    return;
}
