#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } T;
extern void func_020694ac(void *p, int a, int b);
extern uint32_t data_ov008_021a80e0;
void *func_ov008_0219d328(uint8_t *p)
{
    int i;
    T *x, *y;
    func_020694ac(p, 0, 0);
    *(uint32_t **)p = &data_ov008_021a80e0;
    x = (T *)(p + 0xc8);
    x->a = 0;
    x->b = 0;
    x->c = 0;
    y = (T *)(p + 0xf4);
    y->a = 0;
    y->b = 0;
    y->c = 0;
    p[0x100] = 0;
    p[0x101] = 0;
    *(uint32_t *)(p + 0x108) = 0;
    p[0x10c] = 0;
    p[0x10d] = 0xff;
    p[0x10e] = 0;
    for (i = 0; i < 5; i++)
        p[0xec + i] = 0;
    return p;
}
