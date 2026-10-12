#include "ffc/types.h"

extern uint8_t data_020af984[];
typedef struct { uint32_t a, b; } S;
extern S data_020afcd8;
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
        const S *t_ = &data_020afcd8; uint32_t tb = t_->b; uint32_t ta = t_->a; (void)0;
        *(uint32_t *)(o + 0x80) = ta + 0;
        *(uint32_t *)(o + 0x84) = tb;
    }
    func_020483ac(p);
    return p;
}
