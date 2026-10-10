#include "ffc/types.h"

extern uint8_t data_ov002_021d50a0[];

typedef struct {
    void *f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
} S;

void func_ov002_021a014c(S *s, uint32_t a, uint32_t b, uint8_t c) {
    s->fc &= ~0xffu;
    s->f0 = data_ov002_021d50a0;
    s->f14 = a;
    s->f18 = b;
    s->f1c = c;
}
