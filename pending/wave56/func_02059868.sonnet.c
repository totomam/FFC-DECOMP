#include "ffc/types.h"

typedef struct Blk {
    uint32_t a[4];
    uint32_t off;
    uint32_t cnt;
} Blk;

typedef struct Sub {
    uint32_t w0;
    uint32_t w4;
} Sub;

typedef struct Obj {
    uint32_t w0;
    uint32_t w4;
    Blk *blk;
    uint32_t w0c;
    Sub *sub;
    void *arr[];
} Obj;

typedef struct H {
    volatile uint32_t a1;
    uint32_t off2;
} H;

typedef struct Guard {
    void *p;
    volatile uint8_t f;
} Guard;

extern void func_0208763c(void *p);
extern void func_02088f30(void);
extern uint32_t func_0204fac4(uint32_t a);
extern uint32_t func_0205816c(void *first, uint32_t second, uint32_t third, uint32_t fourth, uint32_t fifth, uint32_t sixth, uint32_t seventh);
extern void *func_0205681c(uint32_t size);
extern void *func_0204fb1c(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_020599a0(Obj *o, void *x, uint32_t idx);
extern void func_02087678(void *p);

void *func_02059868(Obj *p, uint32_t a1p, void *a2) {
    Guard g;
    H h;
    uint32_t n, cnt, r;
    void *m;
    Blk *b;

    h.a1 = a1p;
    g.p = (char *)p->sub + 0x20;
    g.f = 1;
    if (g.f != 0) {
        func_0208763c(g.p);
    }
    b = p->blk;
    n = 0;
    cnt = b->cnt;
    if (cnt > 0) {
        do {
            if (p->arr[b->off + n] == 0) break;
            n++;
        } while (n < ((volatile Blk *)b)->cnt);
    }
    if (n >= cnt) {
        func_02088f30();
    }
    n += p->blk->off;
    r = func_0205816c(p->sub, func_0204fac4(h.a1), (uint32_t)a2, 0x800, 0, 0, 0x10000);
    h.off2 = (r - p->sub->w4) >> 11;
    m = func_0205681c(0x40);
    if (m != 0) {
        m = func_0204fb1c(m, p->w0c, h.off2, r, h.a1, n);
    }
    p->arr[n] = m;
    func_020599a0(p, m, n);
    if (g.f != 0) {
        func_02087678(g.p);
    }
    return m;
}
