#include "ffc/types.h"

typedef struct Elem {
    uint32_t w0;
    uint32_t a1;
    uint32_t b1;
    uint8_t f1;
    uint32_t a2;
    uint32_t b2;
    uint8_t f2;
    uint32_t a3;
    uint32_t b3;
    uint8_t f3;
    uint32_t a4;
    uint32_t b4;
    uint8_t f4;
    uint32_t w5;
} Elem;

typedef struct Vec {
    Elem *data;
    uint32_t len;
    uint32_t cap;
} Vec;

extern uint32_t func_ov002_0219fb24(Vec *p, int32_t n);
typedef struct Flg { uint8_t a, b, c, d; } Flg;
typedef struct TVec { Elem *data; uint32_t len; uint32_t cap; void *x; } TVec;
extern void func_ov002_0219fe4c(TVec *tmp, uint32_t n, Flg z);
extern void *func_0205327c(void *destination, const void *source);
extern void func_02052be0(uint32_t a);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_ov002_0219fe18(TVec *tmp);

#define COPY_PAIR(A, B, F) do { \
    d->A = s->A; \
    d->B = s->B; \
    d->F = s->F; \
    if (d->A) { \
        func_02052be0(d->A); \
        if (d->F) func_02052d10(d->A, d->B); \
    } \
} while (0)

void func_ov002_0219fba4(Vec *p, uint32_t count, Elem *src)
{
    TVec tmp;
    uint32_t grow;
    uint32_t t;
    Elem *d;
    Elem *s;
    Elem *base;
    Elem *end;
    uint32_t idx;
    Flg zf;

    tmp.data = 0;
    tmp.len = 0;
    tmp.cap = 0;
    tmp.x = &p->cap;
    idx = p->len;
    zf.a = 0;

    grow = func_ov002_0219fb24(p, (int32_t)(p->len + count - p->cap));
    func_ov002_0219fe4c(&tmp, grow, zf);

    if (count != 0) {
        do {
            d = tmp.data + p->len + tmp.len;
            if (d != 0) {
                s = src;
                func_0205327c(d, s);
                COPY_PAIR(a1, b1, f1);
                COPY_PAIR(a2, b2, f2);
                COPY_PAIR(a3, b3, f3);
                COPY_PAIR(a4, b4, f4);
                d->w5 = s->w5;
            }
            tmp.len++;
            count--;
        } while (count != 0);
    }

    base = p->data;
    end = base + p->len;
    d = tmp.data + p->len;
    if (end > base) {
        do {
            end--;
            d--;
            if (d != 0) {
                s = end;
                func_0205327c(d, s);
                COPY_PAIR(a1, b1, f1);
                COPY_PAIR(a2, b2, f2);
                COPY_PAIR(a3, b3, f3);
                COPY_PAIR(a4, b4, f4);
                d->w5 = s->w5;
            }
            idx--;
            tmp.len++;
        } while (end > base);
    }

    t = p->cap;
    p->cap = tmp.cap;
    tmp.cap = t;
    {
        Elem *td = p->data;
        p->data = tmp.data;
        tmp.data = td;
    }
    t = p->len;
    p->len = tmp.len;
    tmp.len = t;

    func_ov002_0219fe18(&tmp);
}
