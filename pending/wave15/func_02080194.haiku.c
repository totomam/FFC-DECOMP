#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    int32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    int32_t f18;
    uint32_t f1c;
    uint32_t f20;
} S;

void func_02080194(S *p, int32_t a, uint32_t b) {
    p->f0 = b;
    p->f20 = b;
    p->f4 = 0;
    p->fc = 0;
    p->f14 = 0;
    p->f1c = 0;
    p->f8 = -a;
    p->f18 = a;
    p->f10 = 0x1000;
}
