#include "ffc/types.h"

typedef struct E { uint32_t a; int32_t key; } E;
typedef struct Ctl { uint32_t w0; int32_t n; E *base; } Ctl;
typedef struct Iter { E *cur; Ctl *ctl; } Iter;
typedef struct Range { E *begin; E *end; } Range;
typedef struct Ret { E *out; Ctl *ctl; } Ret;

#define PUT(src)                                                        \
    do {                                                                \
        Iter it;                                                        \
        Iter *p = &it;                                                  \
        p->cur = out;                                                   \
        p->ctl = ctl;                                                   \
        if ((int32_t)(p->cur - p->ctl->base) < p->ctl->n) {             \
            *p->cur = *(src);                                           \
        } else {                                                        \
            if (p->cur) {                                               \
                *p->cur = *(src);                                       \
            }                                                           \
            p->ctl->n++;                                                \
        }                                                               \
    } while (0)

Ret func_ov002_021cf124(Range a, Range b, E *out, Ctl *ctl)
{
    Ret r;
    E *ae = a.end;
    E *be = b.end;
    E *ap = a.begin;
    E *bp = b.begin;
    while (ap != ae && bp != be) {
        if (bp->key < ap->key) {
            PUT(bp);
            bp++;
        } else {
            PUT(ap);
            ap++;
        }
        out++;
    }
    if (ap != ae) {
        while (ap != ae) {
            PUT(ap);
            ap++;
            out++;
        }
    } else {
        while (bp != be) {
            PUT(bp);
            bp++;
            out++;
        }
    }
    r.out = out;
    r.ctl = ctl;
    return r;
}
