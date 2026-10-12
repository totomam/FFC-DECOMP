#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint16_t h4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
    uint32_t w18;
    uint32_t w1c;
    uint32_t w20;
    uint32_t w24;
} Elem;

typedef struct {
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint32_t c;
    uint32_t f4;
    uint32_t f5;
    uint32_t f6;
} Ent;

typedef struct {
    uint8_t pad0[0x24];
    Elem *elems;
    uint32_t n;
    uint8_t pad1[0x60 - 0x2c];
    Ent *ents;
} Ctx;

extern void func_0209cf5c(void *p, uint32_t n, uint32_t size, void (*ctor)(void), void (*dtor)(void));
extern void func_0209d02c(void *p, uint32_t n, uint32_t size, void (*dtor)(void));
extern void func_0205f750(void);
extern void func_0205f74c(void);

void func_02064e54(void *self, uint8_t *idx, uint32_t count)
{
    Elem buf[32];
    Ctx *ctx = (Ctx *)self;
    uint32_t i;

    func_0209cf5c(buf, 32, sizeof(Elem), func_0205f74c, func_0205f750);

    for (i = 0; i < ctx->n; i++) {
        Elem *src = &ctx->elems[ctx->ents[i].c];
        Elem *dst = &buf[i];
        dst->w0 = src->w0;
        dst->h4 = src->h4;
        dst->w8 = src->w8;
        dst->wc = src->wc;
        dst->w10 = src->w10;
        dst->w14 = src->w14;
        dst->w18 = src->w18;
        dst->w1c = src->w1c;
        dst->w20 = (dst->w20 & 0x3ff) | (src->w20 & 0xfffffc00);
    }

    for (i = 0; i < count; i++) {
        ctx->ents[idx[i]].c = i;
    }
    for (; i < ctx->n; i++) {
        ctx->ents[i].c = i;
    }

    for (i = 0; i < ctx->n; i++) {
        Elem *dst = &ctx->elems[ctx->ents[i].c];
        Elem *src = &buf[i];
        dst->w0 = src->w0;
        dst->h4 = src->h4;
        dst->w8 = src->w8;
        dst->wc = src->wc;
        dst->w10 = src->w10;
        dst->w14 = src->w14;
        dst->w18 = src->w18;
        dst->w1c = src->w1c;
        dst->w20 = (dst->w20 & 0x3ff) | (src->w20 & 0xfffffc00);
    }

    func_0209d02c(buf, 32, sizeof(Elem), func_0205f750);
}
