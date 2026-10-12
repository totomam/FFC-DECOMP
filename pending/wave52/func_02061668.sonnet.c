#include "ffc/types.h"

typedef struct { uint32_t lo; uint32_t hi; } Pair;
typedef struct { uint32_t f[8]; } Args8;
typedef Pair (*VFn)(void *self, uint32_t a, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

extern uint32_t func_020615ac(void *a, uint32_t b);
extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t func_02061374(void *p);
extern uint32_t func_02061370(void *p);
extern uint32_t func_0206136c(void *p);
extern void func_02055110(void *a, void *b);
extern uint32_t data_020b1558;
extern void *data_0213e098;

void func_02061668(uint32_t *self, uint32_t *p1, uint32_t p2, uint32_t p3, ...)
{
    uint32_t *r4;
    uint32_t *q;
    uint32_t k;
    uint32_t r6;
    uint32_t r7;
    Args8 args;
    Pair out;
    void **vt;
    VFn fn;

    q = p1;
    k = p2;
    args.f[0] = func_020615ac(self, (&p3)[4]) + 2;
    if (args.f[0] == 0) {
        return;
    }
    r4 = func_0205681c(0x44);
    if (r4 != 0) {
        r7 = q[1] + k * q[5];
        r6 = self[9];
        args.f[1] = func_02061374(self);
        args.f[2] = func_02061370(self);
        args.f[3] = func_0206136c(self);
        args.f[4] = (&p3)[2];
        args.f[5] = (&p3)[3];
        args.f[6] = p3;
        args.f[7] = (&p3)[1];
        vt = *(void ***)self;
        fn = (VFn)vt[3];
        out = fn(self, (&p3)[4], args.f[0], args.f[1], args.f[2], args.f[3], args.f[4], args.f[5], args.f[6], args.f[7]);
        r4[0] = (uint32_t)&data_020b1558;
        r4[3] &= 0xffffff00;
        r4[5] = args.f[0];
        r4[6] = out.lo;
        r4[7] = out.hi;
        r4[8] = r7;
        r4[9] = args.f[6];
        r4[10] = args.f[7];
        r4[11] = args.f[4];
        r4[12] = args.f[5];
        r4[13] = args.f[3];
        r4[14] = args.f[2];
        r4[15] = args.f[1];
        r4[16] = r6;
    }
    func_02055110(data_0213e098, r4);
}
