#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint16_t h4[9];
    uint8_t pad16[2];
    uint32_t w18;
    uint32_t w1c;
    uint16_t h20[21];
    uint8_t pad4a[2];
    uint32_t w4c[5];
    uint32_t w60;
    uint32_t w64;
    uint32_t w68[5];
    uint32_t w7c[5];
    uint32_t w90[5];
    uint32_t wa4;
    uint32_t wa8;
    uint32_t wac;
} Entry;

void func_0201fee0(uint8_t *a, Entry *dst, uint32_t idx) {
    Entry *s;
    Entry *d;
    uint32_t i;
    uint16_t *sp;
    uint16_t *dp;
    uint32_t *s32;
    uint32_t *d32;

    d = dst;
    s = (Entry *)(*(uint8_t **)(a + 0x1d8) + idx * 0xb0);
    d->w0 = s->w0;
    sp = s->h4;
    dp = d->h4;
    i = 9;
    do {
        *dp++ = *sp++;
    } while (--i);
    d->w18 = s->w18;
    d->w1c = s->w1c;
    sp = s->h20;
    dp = d->h20;
    i = 0x15;
    do {
        *dp++ = *sp++;
    } while (--i);
    d->w60 = s->w60;
    d->w64 = s->w64;
    s32 = s->w4c;
    d32 = d->w4c;
    for (i = 0; i < 5; i++) {
        *d32++ = *s32++;
    }
    s32 = s->w68;
    d32 = d->w68;
    for (i = 0; i < 5; i++) {
        *d32++ = *s32++;
    }
    s32 = s->w7c;
    d32 = d->w7c;
    for (i = 0; i < 5; i++) {
        *d32++ = *s32++;
    }
    s32 = s->w90;
    d32 = d->w90;
    for (i = 0; i < 5; i++) {
        *d32++ = *s32++;
    }
    d->wa4 = s->wa4;
    d->wa8 = s->wa8;
    d->wac = s->wac;
}
