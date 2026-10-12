#include "ffc/types.h"
typedef struct { uint16_t h[9]; } A;
typedef struct { uint16_t h[21]; } B;
typedef struct { uint32_t w[5]; } C;
typedef struct {
    uint32_t w0; A a; uint8_t p[2]; uint32_t w18; uint32_t w1c; B b; uint8_t q[2];
    C c4c; uint32_t w60; uint32_t w64; C c68; C c7c; C c90;
    uint32_t wa4; uint32_t wa8; uint32_t wac;
} Entry;
void func_0201fee0(uint8_t *x, Entry *d, uint32_t idx) {
    Entry *s = (Entry *)(*(uint8_t **)(x + 0x1d8) + idx * 0xb0);
    d->w0 = s->w0;
    d->a = s->a;
    d->w18 = s->w18;
    d->w1c = s->w1c;
    d->b = s->b;
    d->c4c = s->c4c;
    d->w60 = s->w60;
    d->w64 = s->w64;
    d->c68 = s->c68;
    d->c7c = s->c7c;
    d->c90 = s->c90;
    d->wa4 = s->wa4;
    d->wa8 = s->wa8;
    d->wac = s->wac;
}
