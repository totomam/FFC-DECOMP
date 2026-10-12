#include "ffc/types.h"

typedef struct {
    uint32_t lo;
    int32_t key;
} Elem;

typedef struct {
    Elem **ret;
    Elem *first1;
    Elem *last1;
    Elem *first2;
    uint32_t s0;
    Elem *last2;
    uint32_t s2;
    Elem *dst;
} Args;

void func_ov002_021ceca4(Args in)
{
    Args a = in;
    Elem *d = a.dst;
    Elem *p1;
    Elem *p2;

    if (a.first1 == a.last1) {
        if (a.last2 != a.first2) {
            do {
                a.last2--;
                d--;
                *d = *a.last2;
            } while (a.last2 != a.first2);
        }
        *a.ret = d;
        return;
    }
    if (a.first2 == a.last2) {
        if (a.last1 != a.first1) {
            do {
                a.last1--;
                d--;
                *d = *a.last1;
            } while (a.last1 != a.first1);
        }
        *a.ret = d;
        return;
    }

    p1 = a.last1 - 1;
    p2 = a.last2 - 1;
    for (;;) {
        if (p2->key >= p1->key) {
            d--;
            *d = *p2;
            if (p2 == a.first2) {
                p1++;
                if (p1 != a.first1) {
                    do {
                        p1--;
                        d--;
                        *d = *p1;
                    } while (p1 != a.first1);
                }
                break;
            }
            p2--;
        } else {
            d--;
            *d = *p1;
            if (p1 == a.first1) {
                p2++;
                if (p2 != a.first2) {
                    do {
                        p2--;
                        d--;
                        *d = *p2;
                    } while (p2 != a.first2);
                }
                break;
            }
            p1--;
        }
    }
    *a.ret = d;
}
