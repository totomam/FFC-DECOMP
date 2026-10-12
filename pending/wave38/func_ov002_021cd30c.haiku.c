#include "ffc/types.h"

typedef struct {
    uint32_t key;
    uint32_t val;
} Elem;

typedef struct {
    int32_t pad;
    int32_t n;
    Elem *base;
} Cont;

typedef struct {
    Elem *cur;
    Cont *cont;
} Iter;

#define PUT(src)                                                 \
    do {                                                         \
        Iter t;                                                  \
        Iter *q = &t;                                            \
        t.cur = *pd;                                             \
        t.cont = *pc;                                            \
        if (q->cur - q->cont->base < q->cont->n) {               \
            q->cur->key = (src)->key;                            \
            q->cur->val = (src)->val;                            \
        } else {                                                 \
            if (q->cur != 0) {                                   \
                q->cur->key = (src)->key;                        \
                q->cur->val = (src)->val;                        \
            }                                                    \
            q->cont->n++;                                        \
        }                                                        \
    } while (0)

Iter func_ov002_021cd30c(Elem *a, Elem *aend, Elem *b, Elem *bend, Elem *dest, Cont *c)
{
    Iter it;
    Elem **pa = &a;
    Elem **pb = &b;
    Elem **pd = &dest;
    Cont **pc = &c;

    while (*pa != aend && *pb != bend) {
        if ((*pb)->key > (*pa)->key) {
            PUT(*pb);
            (*pb)++;
        } else {
            PUT(*pa);
            (*pa)++;
        }
        (*pd)++;
    }

    if (*pa != aend) {
        while (*pa != aend) {
            PUT(*pa);
            (*pa)++;
            (*pd)++;
        }
    } else {
        while (*pb != bend) {
            PUT(*pb);
            (*pb)++;
            (*pd)++;
        }
    }

    it.cur = dest;
    it.cont = c;
    return it;
}
