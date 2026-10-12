#include "ffc/types.h"

typedef struct Elem { uint32_t a; int32_t k; } Elem;
typedef struct Buf { int32_t pad; int32_t size; Elem *base; } Buf;
typedef struct Cur { Elem *d; Buf *buf; } Cur;
typedef struct Args { Elem *a; Elem *aend; Elem *b; Elem *bend; } Args;

static inline void put(Cur *o, Elem *s)
{
    Cur c;
    Cur *p = &c;
    c = *o;
    if (c.d - c.buf->base < c.buf->size) {
        *c.d = *s;
    } else {
        if (c.d != 0) {
            *c.d = *s;
        }
        p->buf->size++;
    }
}

static inline void put2(Cur *o, Elem *s)
{
    Cur c;
    Cur *p = &c;
    c = *o;
    if (c.d - c.buf->base < c.buf->size) {
        *c.d = *s;
    } else {
        if (c.d != 0) {
            *c.d = *s;
        }
        p->buf->size++;
    }
}

static inline void put3(Cur *o, Elem *s)
{
    Cur c;
    Cur *p = &c;
    c = *o;
    if (c.d - c.buf->base < c.buf->size) {
        *c.d = *s;
    } else {
        if (c.d != 0) {
            *c.d = *s;
        }
        p->buf->size++;
    }
}

static inline Cur rest(Cur out, Elem *s, Elem *e)
{
    while (s != e) { put(&out, s); s++; out.d++; }
    return out;
}

static inline Cur restb(Cur out, Elem *s, Elem *e)
{
    while (s != e) { put2(&out, s); s++; out.d++; }
    return out;
}

Cur func_ov002_021cc608(Args g, Cur o)
{
    Args *q = &g;
    while (q->a != q->aend && q->b != q->bend) {
        if (q->b->k > q->a->k) {
            put(&o, q->b);
            q->b++;
        } else {
            put3(&o, q->a);
            q->a++;
        }
        o.d++;
    }
    if (q->a == q->aend)
        return restb(o, q->b, q->bend);
    return rest(o, q->a, q->aend);
}
