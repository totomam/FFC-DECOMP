#include "ffc/types.h"

extern uint8_t data_ov004_02157930[];

typedef struct {
    void *vt;
    uint32_t pad04;
    uint32_t pad08;
    uint32_t f0c;
    uint32_t pad10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
} S;

void func_ov004_02145300(S *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    p->f0c = p->f0c & ~0xffu;
    p->f14 = a;
    p->f20 = d;
    p->vt = data_ov004_02157930;
    p->f18 = b;
    p->f1c = c;
    p->f24 = 0;
}
