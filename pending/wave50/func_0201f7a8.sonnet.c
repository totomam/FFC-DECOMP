#include "ffc/types.h"
typedef struct P8 { uint32_t a, b; } P8;
typedef struct P16 { uint32_t a, b, c, d; } P16;
typedef struct Elem {
    uint32_t w0;
    uint8_t b4;
    uint8_t pad5[3];
    unsigned long long d8;
    uint16_t h[9];
    uint8_t pad22[2];
    uint32_t w24;
    uint32_t w28;
    uint32_t w2c;
    P16 t30;
} Elem;
typedef struct Owner { uint8_t pad[0x90]; Elem *arr; } Owner;
void func_0201f7a8(Owner *p, int idx, Elem *s) {
    Elem *d = &p->arr[idx];
    uint16_t *dh, *sh;
    uint32_t i;
    d->w0 = s->w0;
    d->b4 = s->b4;
    d->d8 = s->d8;
    dh = d->h; sh = s->h;
    i = 9; do { *dh++ = *sh++; } while (--i);
    d->w24 = s->w24;
    d->w28 = s->w28;
    d->w2c = s->w2c;
    d->t30 = s->t30;
}
