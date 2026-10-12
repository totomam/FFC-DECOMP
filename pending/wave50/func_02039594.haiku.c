#include "ffc/types.h"

extern void func_02087620(void *object);
extern void func_020553c4(void *p);
extern uint8_t data_020aadd0[];
extern uint8_t data_020ae6d4[];
extern uint8_t data_020ae6e0[];
extern uint8_t data_020ae6f8[];
extern uint32_t data_021395d4[];

void *func_02039594(void *self, uint32_t a, uint32_t b, void *c, uint32_t d)
{
    uint32_t *p = (uint32_t *)self;
    uint32_t *s;
    uint32_t *t;

    p[0] = (uint32_t)data_020aadd0;
    p[3] &= ~0xffu;
    s = &p[5];
    s[0] = (uint32_t)data_020ae6d4;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    t = &s[4];
    t[1] = 0;
    t[2] = 0;
    func_02087620(&s[7]);
    p[0] = (uint32_t)data_020ae6e0;
    p[19] = a;
    p[21] = b;
    s[0] = (uint32_t)data_020ae6f8;
    p[20] = d;
    p[22] = (uint32_t)c;
    p[23] = data_021395d4[0];
    data_021395d4[0] = data_021395d4[0] + 1;
    if (c != 0) {
        func_020553c4(c);
    }
    return self;
}
