#include "ffc/types.h"

extern int data_ov002_021d5cf4;

typedef struct S {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint8_t pad10[3];
    uint8_t f13;
    uint32_t f14;
    uint8_t f18;
    uint8_t pad19[3];
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
} S;

void func_ov002_021b7c5c(S *p, uint8_t a, uint32_t b)
{
    uint32_t c = p->f0c & ~0xffu;
    p->f00 = (uint32_t)&data_ov002_021d5cf4;
    p->f18 = a;
    p->f0c = c;
    p->f13 = 0;
    p->f14 = 0;
    p->f1c = b;
    p->f20 = 0;
    p->f24 = 0x12;
}
