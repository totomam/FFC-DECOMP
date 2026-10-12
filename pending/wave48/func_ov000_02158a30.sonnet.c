#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint64_t v8;
    uint16_t h10;
    uint16_t h12;
} Rng;

extern void func_ov000_021585a8(void);
extern void func_02089334(void);
extern int func_020893bc(void *p);
extern int func_0208942c(void *p);
extern int64_t func_020898d0(void *a, void *b);
extern int func_02088280(void);
extern void func_020882cc(void);
extern void func_02088b3c(void *p);
extern uint64_t func_ov000_02158920(uint32_t h, uint32_t v, uint32_t f, uint32_t z);

int func_ov000_02158a30(Rng *p)
{
    uint8_t buf1[16];
    uint8_t buf2[12];
    uint8_t buf8[8];
    volatile struct { uint32_t v24; uint32_t flag; } arg;
    uint32_t seed;
    uint64_t v;
    int64_t r;

    func_ov000_021585a8();
    func_02089334();
    if (func_020893bc(buf1)) {
        return 0;
    }
    if (func_0208942c(buf2)) {
        return 0;
    }
    r = func_020898d0(buf1, buf2);
    if (r < 0) {
        return 0;
    }
    seed = (uint32_t)r;
    if (func_02088280()) {
        seed += (uint32_t)func_020882cc;
    }
    func_02088b3c(buf8);
    arg.flag = (uint8_t)((((buf8[0] << 16) | (buf8[1] << 8) | buf8[2]) == 0x9bf) ? 0 : 1);
    arg.v24 = (buf8[3] << 16) | (buf8[4] << 8) | buf8[5];

    seed = seed * 0x5d588b65u + 0x269ec3u;
    p->h10 = (uint16_t)(((seed >> 16) * 1000u) >> 16);
    p->w0 = 0;
    p->w4 = 0;
    p->v8 = 0;

    if (p->h12 == 0) {
        while (p->v8 == 0) {
            do {
                seed = seed * 0x5d588b65u + 0x269ec3u;
            } while (seed == 0);
            p->h12 = (uint16_t)seed;
            p->v8 = func_ov000_02158920(p->h12, arg.v24, arg.flag, 0);
        }
    } else {
        while (p->v8 == 0) {
            p->h12++;
            p->v8 = func_ov000_02158920(p->h12, arg.v24, arg.flag, 0);
        }
    }
    return 1;
}
