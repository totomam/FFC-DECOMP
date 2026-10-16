#include "ffc/types.h"
extern void func_0202dfc0(void *a, uint32_t b);
extern void func_0202df00(void *a, uint32_t b, uint32_t c);
typedef struct { uint8_t pad[0x13c]; uint8_t f0; uint8_t f1; uint8_t pad2[2]; uint32_t w[4]; uint32_t f14; uint8_t f18; uint8_t pad3[0x13]; uint8_t obj[0]; } S;
void func_ov009_021a3274(S *p, uint32_t a1, const uint32_t *q, uint32_t a3, uint8_t b, uint32_t c)
{
    p->f0 = 1;
    p->f1 = b;
    p->w[0] = q[0];
    p->w[1] = q[1];
    p->w[2] = q[2];
    p->w[3] = q[3];
    p->f14 = a1;
    p->f18 = 0;
    func_0202dfc0(p->obj, a3);
    func_0202df00(p->obj, c, 1);
    *(uint32_t*)((uint8_t*)p + 0x160) = 0;
    *(uint32_t*)((uint8_t*)p + 0x164) = 0;
}
