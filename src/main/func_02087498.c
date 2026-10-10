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

void func_02087498(S *p, uint32_t a, uint32_t b)
{
    p->f04 = 0;
    p->f00 = 0;
    p->f0c = 0;
    p->f08 = 0;
    p->f10 = a;
    p->f14 = b;
    p->f18 = 0;
    p->f1c = 0;
}
