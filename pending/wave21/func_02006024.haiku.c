#include "ffc/types.h"

typedef struct {
    uint8_t f0;
    uint8_t f1;
    uint8_t pad2[2];
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
} S;

void func_02006024(S *p, uint32_t a, uint32_t b, int32_t c) {
    p->f4 = a;
    p->f8 = b;
    p->f14 = 0;
    p->f1 = 0;
    if (c <= 0) {
        p->fc = b;
        p->f0 = 1;
        p->f10 = 0;
        return;
    }
    p->fc = a;
    p->f10 = c;
    p->f0 = 0;
}
