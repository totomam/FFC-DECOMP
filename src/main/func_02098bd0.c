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
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
} func_02098bd0_s;

void func_02098bd0(func_02098bd0_s *p)
{
    uint32_t a = p->f20;
    p->f14 = 0;
    p->f10 = 0;
    p->f18 = 0;
    uint32_t b = p->f1c;
    p->f04 = a;
    uint32_t s = a + b;
    p->f08 = a;
    p->f0c = a;
    p->f2c = s;
    p->f28 = s;
    p->f24 = s;
}
