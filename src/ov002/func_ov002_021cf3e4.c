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

    if (b == e) return;
    p = b + 1;
    if (p == e) return;
    do {
        int f;
        Elem *h;
        int32_t key;
        Elem *s;
        uint32_t tv;
        s = p - 1;
        key = p->k;
        if (key < s->k) {
            tv = p->v;
            h = s;
            p->v = s->v;
            p->k = s->k;
            goto test;
            do {
                h->v = s->v;
                h->k = s->k;
                h--;
            test:
                f = 0;
                if (s != b) {
                    s--;
                    if (key < s->k) f = 1;
                }
            } while (f);
            h->v = tv;
            h->k = key;
        }
        p++;
    } while (p != e);
}
