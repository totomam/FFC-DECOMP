#include "ffc/types.h"

typedef struct {
    uint8_t pad[8];
    unsigned long long v8;
    uint16_t h10;
    uint16_t h12;
} Out;

typedef struct {
    uint32_t b;
    uint32_t a;
    uint8_t buf[8];
    uint32_t B[3];
    uint32_t A[3];
    uint32_t pad;
} Loc;

extern uint32_t func_ov000_021585a8(Out *p);
extern void func_02089334(uint32_t x);
extern int func_020893bc(uint32_t *a);
extern int func_0208942c(uint32_t *a);
extern long long func_020898d0(uint32_t *a, uint32_t *b);
extern int func_02088280(void);
extern void func_020882cc(void);
extern void func_02088b3c(uint8_t *b);
extern unsigned long long func_ov000_02158920(uint16_t h, uint32_t b, uint32_t a, uint32_t c);

int func_ov000_02158bdc(Out *p)
{
    Loc L;
    uint32_t seed;
    uint16_t h;
    unsigned long long r;
    long long v;

    L.buf[0] = 0;
    L.buf[1] = 0;
    L.buf[2] = 0;
    L.buf[3] = 0;
    L.buf[4] = 0;
    L.buf[5] = 0;

    func_02089334(func_ov000_021585a8(p));
    if (func_020893bc(L.A)) {
        return 0;
    }
    if (func_0208942c(L.B)) {
        return 0;
    }
    v = func_020898d0(L.A, L.B);
    seed = (uint32_t)v;
    if (v < 0) {
        return 0;
    }
    if (func_02088280()) {
        seed += (uint32_t)func_020882cc;
    }
    func_02088b3c(L.buf);
    {
        uint8_t t;
        if ((L.buf[0] << 16 | L.buf[1] << 8 | L.buf[2]) == 0x9bf) {
            t = 0;
        } else {
            t = 1;
        }
        L.a = t;
    }
    L.b = L.buf[3] << 16 | L.buf[4] << 8 | L.buf[5];

    seed = seed * 0x5d588b65 + 0x269ec3;
    p->h10 = (uint16_t)((((seed >> 16) * 1000)) >> 16);
    p->v8 = 0;
    if (p->v8 != 0) {
        return 1;
    }
    for (;;) {
        seed = seed * 0x5d588b65 + 0x269ec3;
        if (seed == 0) {
            continue;
        }
        h = (uint16_t)seed;
        if (p->h12 == h) {
            continue;
        }
        p->h12 = h;
        r = func_ov000_02158920(p->h12, L.b, L.a, 0);
        p->v8 = r;
        if (r != 0) {
            return 1;
        }
    }
    return 0;
}
