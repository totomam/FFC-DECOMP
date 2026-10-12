#include "ffc/types.h"

extern uint8_t *data_0213e178;
extern void *func_0208e8ac(void *a, void *b, uint16_t c);
extern uint32_t func_0206cbc8(uint8_t *a);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_02084ca4(const void *a, void *b, uint32_t c);
extern void func_0206f2d0(void);
typedef struct S { uint8_t *cur; uint32_t last; } S;
extern void func_0206e764(void *a, uint8_t *dst, S s1, S s2, uint8_t f);
extern uint8_t *func_02056830(uint32_t size);
extern uint32_t func_02055880(uint8_t *p);
extern void func_02055c20(void *a, uint32_t b);
extern void func_02056858(uint8_t *p);

typedef struct Buf {
    uint8_t *base;
    uint32_t off;
    uint32_t pad;
    uint32_t cap;
} Buf;

typedef struct Ent {
    Buf *buf;
    uint16_t hw4;
    uint16_t hw6;
    uint32_t count;
} Ent;

typedef struct Self {
    uint8_t p0[0x20];
    uint8_t a20[0x3c];
    Ent *ents;
    uint8_t p60[8];
    uint8_t a68[0x200];
    uint8_t *x268;
    uint32_t x26c;
    uint32_t x270;
    uint32_t x274;
    uint32_t p278;
    uint32_t x27c;
    uint8_t x280;
    uint8_t x281;
} Self;

typedef struct Tmp {
    uint32_t a;
    uint32_t b;
} Tmp;

void func_0206e56c(Self *self)
{
    uint32_t i;
    uint32_t n = 0;
    uint32_t count;
    uint32_t bit;
    uint32_t len;
    uint32_t old, off;
    uint8_t *p;
    uint32_t amt;
    struct { uint8_t f; uint8_t pad[11]; S s1; S s2; uint8_t pad2[0x10]; union { uint32_t w; uint16_t h[2]; } hdr; } L;
    Ent *e;
    uint8_t *q;
    void *ctx;

    for (i = 0; i < self->x27c; i++) {
        bit = 1u << i;
        if (self->x270 & bit) {
            old = n;
            n++;
            ctx = *(void **)(data_0213e178 + 0x30a0);
            p = (uint8_t *)func_0208e8ac(ctx, self->a68, i);
            if (p == 0) {
                continue;
            }
            len = func_0206cbc8(data_0213e178);
            if (self->x270 != self->x274) {
                if (func_02090410(p, self->x268, len) == 0) {
                    self->x274 = self->x274 | bit;
                }
                continue;
            }
            if (len == 0) {
                continue;
            }
            off = old * 12;
            while (len != 0) {
                e = (Ent *)((uint8_t *)self->ents + off);
                if (e->count == 0) {
                    if (self->x281 == 0) {
                        if (func_0206cbc8(data_0213e178) != len) {
                            break;
                        }
                    }
                    func_02084ca4(p, &L.hdr, 4);
                    if (L.hdr.h[0] == 0) {
                        break;
                    }
                    e->count = L.hdr.h[0];
                    e->hw4 = L.hdr.h[1];
                    e->buf->off = 0;
                    if (L.hdr.h[0] > e->buf->cap) {
                        func_0206f2d0();
                    }
                    p += 4;
                    len -= 4;
                } else {
                                        amt = *((len < e->count) ? &len : &e->count);
                    {
                    L.f = 0;
                    L.s1.cur = p;
                    L.s2.cur = p + amt;
                    func_0206e764(e->buf, e->buf->base + e->buf->off, L.s1, L.s2, L.f);
                    }
                    e->count -= amt;
                    p += amt;
                    len -= amt;
                    if (e->count == 0 && (e->hw4 & (1u << self->x26c)) != 0) {
                        q = func_02056830(e->buf->off);
                        {
                            uint8_t *src = e->buf->base;
                            uint8_t *end = src + e->buf->off;
                            uint8_t *dst = q;
                            while (src != end) {
                                *dst++ = *src++;
                            }
                        }
                        func_02055c20(self->a20, func_02055880(q));
                        func_02056858(q);
                    }
                }
            }
        }
    }
}
