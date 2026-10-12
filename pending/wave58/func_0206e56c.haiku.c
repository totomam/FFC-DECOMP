#include "ffc/types.h"

extern void *data_0213e178;
extern void *func_0208e8ac(void *a, uint32_t b, void *c);
extern uint32_t func_0206cbc8(void *a);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_02084ca4(const void *a, void *b, uint32_t c);
extern void func_0206f2d0(void);
extern void func_0206e764(void *a, uint8_t *dst, uint8_t *src, uint32_t n, uint32_t m);
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

typedef struct Tmp {
    uint32_t a;
    uint32_t b;
} Tmp;

void func_0206e56c(uint8_t *self)
{
    uint32_t i;
    uint32_t n = 0;
    uint32_t count;
    uint32_t bit;
    uint32_t len;
    uint32_t old;
    uint8_t *p;
    uint32_t amt;
    union { uint32_t w; uint16_t h[2]; } hdr;
    Tmp tmp;
    Ent *e;
    Buf *buf;
    uint8_t *q;
    void *ctx;

    count = *(uint32_t *)(self + 0x27c);
    for (i = 0; i < *(uint32_t *)(self + 0x27c); i++) {
        bit = 1u << i;
        if (*(uint32_t *)(self + 0x270) & bit) {
            old = n;
            n++;
            ctx = *(void **)((uint8_t *)*(void **)data_0213e178 + 0x30a0);
            p = (uint8_t *)func_0208e8ac(ctx, i, self + 0x68);
            if (p == 0) {
                continue;
            }
            len = func_0206cbc8(*(void **)data_0213e178);
            if (*(uint32_t *)(self + 0x270) != *(uint32_t *)(self + 0x274)) {
                if (func_02090410(p, *(uint8_t **)(self + 0x268), len) != 0) {
                    continue;
                }
                *(uint32_t *)(self + 0x274) |= bit;
                continue;
            }
            if (len == 0) {
                continue;
            }
            while (len != 0) {
                e = (Ent *)(*(uint8_t **)(self + 0x5c) + old * 12);
                if (e->count == 0) {
                    if (self[0x281] == 0) {
                        if (func_0206cbc8(*(void **)data_0213e178) != len) {
                            break;
                        }
                    }
                    func_02084ca4(p, &hdr, 4);
                    if (hdr.h[0] == 0) {
                        break;
                    }
                    e->count = hdr.h[0];
                    e->hw4 = hdr.h[1];
                    e->buf->off = 0;
                    if (hdr.h[0] > e->buf->cap) {
                        func_0206f2d0();
                    }
                    p += 4;
                    len -= 4;
                } else {
                    buf = e->buf;
                    amt = (len < e->count) ? len : e->count;
                    tmp.a = (uint32_t)p;
                    tmp.b = amt;
                    func_0206e764(buf, buf->base + buf->off, p, amt, 0);
                    e->count -= amt;
                    p += amt;
                    len -= amt;
                    if (e->count == 0 && (e->hw4 & (1u << self[0x26c])) != 0) {
                        q = func_02056830(buf->off);
                        {
                            uint8_t *src = buf->base;
                            uint8_t *end = src + buf->off;
                            uint8_t *dst = q;
                            while (src != end) {
                                *dst++ = *src++;
                            }
                        }
                        func_02055c20(self + 0x20, func_02055880(q));
                        func_02056858(q);
                    }
                }
            }
        }
    }
}
