#include "ffc/types.h"

extern uint8_t data_020af984[];
extern uint32_t data_020afcd8[];
extern void func_02056c9c(void *p, uint32_t x);
extern void func_0209cf5c(void *p, uint32_t a, uint32_t b, void *c, void *d);
extern void func_020483ac(void *p);
extern void func_02035f58(void);
extern void *func_02035fd0(void *object);

void *func_020482c0(void *p, uint32_t a, uint32_t b)
{
    uint8_t *o = (uint8_t *)p;
    uint32_t *q;
    func_02056c9c(p, 0);
    *(uint8_t **)o = data_020af984;
    *(uint32_t *)(o + 0x88) = a;
    *(uint32_t *)(o + 0x8c) = b;
    *(uint32_t *)(o + 0x90) = 0;
    func_0209cf5c(o + 0x94, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);
    q = (uint32_t *)p + 0x9d;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    {
        uint32_t x = data_020afcd8[0];
        uint32_t y = data_020afcd8[1];
        *(uint32_t *)(o + 0x80) = x;
        *(uint32_t *)(o + 0x84) = y;
    }
    func_020483ac(p);
    return p;
}
