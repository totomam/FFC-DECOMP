#include "ffc/types.h"

extern void func_020604ac(void *p, uint32_t a1, uint32_t *a2, uint32_t *a3, uint32_t n);
extern void func_02060bc8(void *p, uint32_t a1, uint32_t *a2, uint32_t *a3, uint32_t n);

typedef struct {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    void *f1c;
    void *f20;
} Obj;

void func_0204f180(Obj *r4, uint32_t a1, uint32_t *a2, uint32_t *a3, uint32_t n)
{
    uint32_t i;
    uint32_t v;

    v = r4->f0c;
    v = (v & ~7u) | (a1 & 7u);
    r4->f0c = v;

    for (i = 0; i < n; i++) {
        uint32_t x = a2[i];
        uint32_t m1 = 1u << (x + 8);
        uint32_t y = a3[i];
        uint32_t m2 = 1u << (y + 8);
        uint32_t cur = r4->f0c;
        uint32_t t1 = (cur & m2) ? m1 : 0;
        uint32_t t2 = (cur & m1) ? m2 : 0;
        v = t2 | (cur & ~(m1 | m2));
        v |= t1;
        r4->f0c = v;
    }

    func_020604ac(r4->f20, a1, a2, a3, n);
    func_02060bc8(r4->f1c, a1, a2, a3, n);
}
