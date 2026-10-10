#include "ffc/types.h"

typedef struct {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} S;

void func_0207e890(S *p)
{
    p->f08 = 0;
    p->f04 = 0;
    p->f00 = 0;
    p->f1c = 0;
    p->f18 = 0;
    p->f0c = 0x2300 | p->f08;
    p->f10 = 0;
    p->f14 = 0;
}
