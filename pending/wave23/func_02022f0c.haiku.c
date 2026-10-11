#include "ffc/types.h"

typedef struct {
    int16_t a;
    int16_t b;
} P;

typedef struct {
    int16_t c;
    int16_t pad;
    uint8_t d;
} Q;

void func_02022f0c(uint8_t *p, int idx, uint16_t v, P s, Q t) {
    uint8_t *q = p + (idx & 3) * 10;
    uint8_t *f = p + 0x20;
    *(int16_t *)(q + 0x22) = s.a;
    *(int16_t *)(q + 0x24) = s.b;
    *(int16_t *)(q + 0x26) = t.c;
    *(uint16_t *)(q + 0x28) = v;
    *(uint8_t *)(q + 0x2a) = t.d;
    *f = 1;
}
