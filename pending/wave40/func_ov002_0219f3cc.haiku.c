#include "ffc/types.h"

typedef struct {
    uint32_t lo;
    uint32_t hi;
} S8;

extern void func_ov002_021b5e88(S8 *out, uint32_t v);
extern void func_ov002_021b792c(S8 *out, uint32_t v);
extern uint32_t func_ov002_021b795c(uint32_t obj, S8 s, S8 t, uint32_t a, uint32_t b);
extern uint32_t func_ov002_021b5f0c(uint32_t obj, S8 s, S8 t, uint32_t a, uint32_t b);
extern void func_02056bc0(uint32_t object, uint32_t node);

void func_ov002_0219f3cc(uint8_t *self, uint32_t p1, uint32_t p2, uint32_t p3)
{
    S8 s1;
    S8 t1;
    S8 s0;
    S8 t0;
    uint32_t r;

    func_ov002_021b5e88(&s1, *(uint32_t *)(self + 0xe4));
    t1.lo = 0x80;
    t0.lo = 0;
    t0.hi = *(uint32_t *)(self + 0xec) - p1;
    t1.hi = p1;
    func_ov002_021b792c(&s0, *(uint32_t *)(self + 0xe8));
    r = func_ov002_021b795c(*(uint32_t *)(self + 0xe8), s0, t0, p2, p3);
    func_02056bc0(*(uint32_t *)(self + 0xc4), r);
    r = func_ov002_021b5f0c(*(uint32_t *)(self + 0xe4), s1, t1, p2, p3);
    func_02056bc0(*(uint32_t *)(self + 0xc8), r);
}
