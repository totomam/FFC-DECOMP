#include "ffc/types.h"

typedef struct {
    uint32_t v;
    int32_t k;
} Elem;

typedef struct {
    Elem *b;
    Elem *e;
    uint32_t c;
    uint32_t d;
} Args;

void func_ov002_021cf3e4(Args a)
{
    Elem *b = a.b;
    Elem *e = a.e;
    Elem *p;
    int zero = 0;

    if (b == e) {
        return;
    }
    p = b + 1;
    if (p == e) {
        return;
    }
    do {
        Elem *q = p - 1;
        int32_t key = p->k;
        if (key < q->k) {
            uint32_t tv = p->v;
            Elem *h = q;
            Elem *s = q;
            int f = zero;
            p->v = q->v;
            p->k = q->k;
            do {
                if (s == b) {
                    f = zero;
                } else {
                    s--;
                    f = (key < s->k);
                }
                if (f) {
                    h->v = s->v;
                    h->k = s->k;
                    h--;
                }
            } while (f);
            h->v = tv;
            h->k = key;
        }
        p++;
    } while (p != e);
}
