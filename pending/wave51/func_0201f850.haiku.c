#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t a; uint32_t b; uint32_t c; uint32_t d; } Quad;

typedef struct {
    uint32_t w0;
    uint8_t b4;
    uint8_t pad5[3];
    Pair c8;
    uint16_t h[9];
    uint8_t pad22[2];
    uint32_t w24;
    uint32_t w28;
    uint32_t w2c;
    Quad q30;
} Item;

void func_0201f850(uint8_t *ctx, uint32_t idx, Item *s) {
    Item *arr = *(Item **)(ctx + 0x90);
    Item *d = &arr[idx];
    uint32_t i;
    uint8_t *p;

    d->w0 = s->w0;
    d->b4 = s->b4;
    d->c8 = s->c8;
    for (i = 0; i < 9; i++) {
        d->h[i] = s->h[i];
    }
    d->w24 = s->w24;
    d->w28 = s->w28;
    d->w2c = s->w2c;
    d->q30 = s->q30;

    p = *(uint8_t **)(ctx + 0x94);
    for (i = 0; i < 0x3c; i++) {
        if (p[i] == 0) {
            p[i] = (uint8_t)(idx + 1);
            return;
        }
    }
}
