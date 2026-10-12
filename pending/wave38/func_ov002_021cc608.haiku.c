#include "ffc/types.h"

typedef struct Elem {
    uint32_t a;
    int32_t k;
} Elem;

typedef struct Buf {
    int32_t pad;
    int32_t size;
    Elem *base;
} Buf;

typedef struct Ret {
    Elem *d;
    Buf *buf;
} Ret;

typedef struct Args {
    Elem *a;
    Elem *aend;
    Elem *b;
    Elem *bend;
} Args;

typedef struct Cursor {
    Elem *d;
    Buf *buf;
} Cursor;

Ret func_ov002_021cc608(Args args, Elem *d, Buf *buf)
{
    Cursor cc;
    Cursor *c = &cc;
    Ret r;

    cc.d = d;
    cc.buf = buf;

    while (args.a != args.aend && args.b != args.bend) {
        if (args.b->k > args.a->k) {
            if (c->d - c->buf->base < c->buf->size) {
                *c->d = *args.b;
            } else {
                if (c->d != 0) {
                    *c->d = *args.b;
                }
                c->buf->size++;
            }
            args.b++;
        } else {
            if (c->d - c->buf->base < c->buf->size) {
                *c->d = *args.a;
            } else {
                if (c->d != 0) {
                    *c->d = *args.a;
                }
                c->buf->size++;
            }
            args.a++;
        }
        c->d++;
    }

    while (args.a != args.aend) {
        if (c->d - c->buf->base < c->buf->size) {
            *c->d = *args.a;
        } else {
            if (c->d != 0) {
                *c->d = *args.a;
            }
            c->buf->size++;
        }
        args.a++;
        c->d++;
    }

    while (args.b != args.bend) {
        if (c->d - c->buf->base < c->buf->size) {
            *c->d = *args.b;
        } else {
            if (c->d != 0) {
                *c->d = *args.b;
            }
            c->buf->size++;
        }
        args.b++;
        c->d++;
    }

    r.d = cc.d;
    r.buf = cc.buf;
    return r;
}
