#include "ffc/types.h"

typedef struct Pair { uint32_t a, b; } Pair;

typedef struct Elem {
    uint32_t w0;
    uint8_t b4;
    uint8_t pad5[3];
    Pair d8;
    uint16_t h[9];
    uint8_t pad22[2];
    uint32_t w24;
    uint32_t w28;
    uint32_t w2c;
    Pair t30;
    Pair t38;
} Elem;

typedef struct Owner {
    uint8_t pad[0x90];
    Elem *arr;
} Owner;

void func_0201f7a8(Owner *p, int idx, Elem *s) {
    Elem *d = p->arr + idx;
    uint16_t *sh;
    uint16_t *dh;
    int n = 9;

    d->w0 = s->w0;
    d->b4 = s->b4;
    d->d8 = s->d8;
    sh = s->h;
    dh = d->h;
    do {
        *dh++ = *sh++;
    } while (--n);
    d->w24 = s->w24;
    d->w28 = s->w28;
    d->w2c = s->w2c;
    d->t30 = s->t30;
    d->t38 = s->t38;
}
