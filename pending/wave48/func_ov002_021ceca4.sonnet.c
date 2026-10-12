#include "ffc/types.h"

typedef struct { uint32_t lo; int32_t key; } Elem;
typedef struct { Elem *p; uint32_t x; } It;
typedef struct { Elem *p; uint32_t x; } R;

R func_ov002_021ceca4(Elem *f1, Elem *l1, It f2, It l2, Elem *d)
{
    It t;
    if (f1 == l1) {
        t = l2;
        if (l2.p != f2.p) {
            do {
                t.p--;
                d--;
                *d = *t.p;
            } while (t.p != f2.p);
        }
        { R r; r.p = d; return r; }
    }
    if (f2.p == l2.p) {
        if (l1 != f1) {
            do {
                l1--;
                d--;
                *d = *l1;
            } while (l1 != f1);
        }
        { R r; r.p = d; return r; }
    }
    l1--;
    l2.p--;
    for (;;) {
        if (l2.p->key >= l1->key) {
            d--;
            *d = *l2.p;
            if (f2.p == l2.p) {
                t = l2;
                t.p++;
                if (t.p != f2.p) {
                    It u = t;
                    do {
                        u.p--;
                        d--;
                        *d = *u.p;
                    } while (u.p != f2.p);
                }
                break;
            }
            l2.p--;
        } else {
            d--;
            *d = *l1;
            if (f1 == l1) {
                l1++;
                break;
            }
            l1--;
        }
    }
    { R r; r.p = d; return r; }
}
