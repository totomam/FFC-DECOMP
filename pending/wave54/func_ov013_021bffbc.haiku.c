#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
} Quad;

extern void func_020628ac(void *e, Quad a);
extern void func_02056c4c(void *f);
extern uint32_t func_ov005_02195e2c(void *e, Quad a, Quad b, int32_t c, int32_t d);
extern void func_02056bc0(void *f, uint32_t v);
extern void func_0201e954(uint32_t v, void *out);
extern uint32_t func_ov013_021c012c(void *obj, uint32_t idx);
extern void func_ov005_021963cc(void *e, void *out, uint32_t flag);
extern void func_ov005_021964c4(void *e);
extern uint32_t data_020b93b8;

#define VFN(o, idx) (((void **)*(void **)(o))[idx])
#define FLD(T, p, off) (*(T *)((uint8_t *)(p) + (off)))
#define E0(p) FLD(void *, (p), 0xe0)
#define E4(p) FLD(void *, (p), 0xe4)

void func_ov013_021bffbc(void *a0, void *p1)
{
    uint32_t i;
    void *e;
    uint32_t out[6];
    Quad t, tb, tc;

    if (p1 == 0) {
        e = E0(a0);
        ((void (*)(void *))VFN(e, 11))(e);
        return;
    }

    e = E0(a0);
    if (((uint32_t (*)(void *))VFN(e, 12))(e) != 0) {
        e = E0(a0);
        ((void (*)(void *))VFN(e, 10))(e);
        ((void (*)(void *, void *))VFN(p1, 4))(&t, p1);
        e = E0(a0);
        func_020628ac(e, t);
    } else {
        func_02056c4c(FLD(void *, a0, 0xdc));
        e = E0(a0);
        ((void (*)(void *, void *))VFN(e, 7))(&tb, e);
        ((void (*)(void *, void *))VFN(p1, 4))(&tc, p1);
        e = E0(a0);
        {
            uint32_t r = func_ov005_02195e2c(e, tb, tc, 10, -5);
            func_02056bc0(FLD(void *, a0, 0xdc), r);
        }
    }

    {
        void **g = FLD(void **, a0, 0xc0);
        for (i = 0; i < 8; i++) {
            if (p1 == g[i]) {
                uint32_t idx = (FLD(uint32_t, a0, 0x108) << 3) + i;
                if (idx < FLD(uint32_t, a0, 0xec)) {
                    uint32_t ret;
                    func_0201e954(data_020b93b8, out);
                    ret = func_ov013_021c012c(a0, (FLD(uint32_t, a0, 0x108) << 3) + i);
                    func_ov005_021963cc(E4(a0), out, ret == 0);
                    return;
                }
            }
        }
        func_ov005_021964c4(E4(a0));
    }
}
