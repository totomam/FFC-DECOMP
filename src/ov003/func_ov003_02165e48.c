#include "ffc/types.h"

extern uint8_t data_ov003_0217a79c[];

typedef struct {
    void *f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint16_t f18;
    uint8_t f1a;
} S;

void func_ov003_02165e48(S *s, uint32_t a, uint16_t b, uint8_t c) {
    s->fc &= ~0xffu;
    s->f0 = data_ov003_0217a79c;
    s->f14 = a;
    s->f18 = b;
    s->f1a = c;
}
