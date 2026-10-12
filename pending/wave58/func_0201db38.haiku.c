#include "ffc/types.h"

typedef struct Elem {
    uint32_t w[6];
} Elem;

typedef struct Quad {
    Elem *p0;
    Elem *p1;
    Elem *p2;
    uint32_t p3;
} Quad;

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);

Elem *func_0201db38(Quad q, Elem * volatile s0, uint32_t s1, Elem *dst)
{
    Elem *p0 = q.p0;
    Elem *p1 = q.p1;
    Elem * volatile p2 = q.p2;
    Elem *r = dst;
    int t;

    if (p0 == p1) {
        uint32_t volatile l_s1 = s1;
        Elem * volatile l_p2 = p2;
        uint32_t volatile l_p3 = q.p3;
        if (s0 != p2) {
            do {
                s0--;
                *--r = *s0;
            } while (s0 != p2);
        }
        return r;
    }

    if (s0 == p2) {
        if (p1 > p0) {
            do {
                p1--;
                *--r = *p1;
            } while (p1 > p0);
        }
        return r;
    }

    p1--;
    s0--;
    for (;;) {
        if (func_02036cd8(s0) && !func_02036cd8(p1)) {
            t = 1;
        } else if (func_02036cd8(p1) && !func_02036cd8(s0)) {
            t = 0;
        } else if (func_02036cfc(s0) < func_02036cfc(p1)) {
            t = 1;
        } else if (func_02036cfc(s0) > func_02036cfc(p1)) {
            t = 0;
        } else if (func_02036cfc(s0) == 0) {
            t = 0;
        } else {
            t = func_02036ce0(s0) < func_02036ce0(p1);
        }

        if (t) {
            *--r = *p1;
            if (p1 == p0) {
                uint32_t volatile l_s1 = s1;
                Elem * volatile l_p2 = p2;
                uint32_t volatile l_p3 = q.p3;
                s0 = s0 + 1;
                if (s0 != p2) {
                    Elem * volatile e = s0;
                    do {
                        e--;
                        *--r = *e;
                    } while (e != p2);
                }
                return r;
            }
            p1--;
        } else {
            *--r = *s0;
            if (s0 == p2) {
                p1++;
                if (p1 > p0) {
                    do {
                        p1--;
                        *--r = *p1;
                    } while (p1 > p0);
                }
                return r;
            }
            s0--;
        }
    }
}
