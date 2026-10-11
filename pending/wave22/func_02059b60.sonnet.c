#include "ffc/types.h"

extern uint32_t data_020b0d94;

typedef struct {
    uint32_t *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint16_t f10;
    uint16_t f12;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
} S;

void func_02059b60(S *p, uint32_t a1, uint32_t a2, uint32_t a3,
                   uint32_t a4, uint32_t a5, uint32_t a6)
{
    p->f4 = a3;
    p->f8 = a4;
    p->vt = &data_020b0d94;
    p->f14 = a1;
    p->f18 = a6;
    p->f10 = 0;
    p->f1c = 0;
    p->f20 = 0;

    uint32_t w = *(uint32_t *)&p->f10;
    w = (w & 0xffff3fffu) | ((a5 << 30) >> 16);
    w = (w & 0xffffe0ffu) | ((a2 << 27) >> 19);
    *(uint32_t *)&p->f10 = w;
}
