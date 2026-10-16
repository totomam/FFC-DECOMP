#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } T;
extern void func_020694ac(void *p, int a, int b);
extern uint32_t data_ov008_021a7908;
void *func_ov008_02199640(uint8_t *p)
{
    uint8_t i = 0;
    T *x, *y;
    func_020694ac(p, 0, 0);
    *(uint32_t **)p = &data_ov008_021a7908;
    x = (T *)(p + 0xcc);
    ((T *)(p + 0xcc))->a = 0;
    x->b = 0;
    x->c = 0;
    y = (T *)(p + 0xf0);
    y->b = 0;
    y->c = 0;
    ((T *)(p + 0xf0))->a = 0;
    p[0x140] = 0;
    p[0x141] = 0;
    p[0x142] = 0;
    p[0x143] = 0xff;
    p[0x144] = 0;
    for (i = 0; i < 0x40; i++)
        p[0x100 + i] = 0;
    return p;
}
