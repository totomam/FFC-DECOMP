#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} FfcGuard;

extern void func_02015e8c(FfcGuard *g, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

void func_ov002_0219d124(int32_t *out, uint32_t idx, int flag)
{
    FfcGuard g0, g1, g3, g4, g5;
    FfcGuard *gp;
    uint8_t *p;
    uint32_t off;

    func_02015e8c(&g0, data_020b8e44);
    p = (uint8_t *)func_02052d90(g0.f4, g0.f8);
    off = *(uint32_t *)(p + 0x140);
    {
        Pair *pr = (Pair *)(p + off + 8);
        out[0] = pr->a;
        out[1] = pr->b;
    }
    if (g0.f4 != 0) {
        FfcGuard *q0 = &g0;
        if (q0->fc != 0) {
            func_02052d3c(q0->f4, q0->f8);
        }
        func_02052c04(q0->f4);
    }
    func_02053290(&g0);

    switch (idx) {
    case 0:
        out[0] = -128;
        goto done;
    case 1:
        gp = &g1;
        func_02015e8c(gp, data_020b8e44);
        p = (uint8_t *)func_02052d90(gp->f4, gp->f8);
        off = *(uint32_t *)(p + 0x140);
        {
            Pair *pr = (Pair *)(p + off);
            out[1] = pr->b;
            out[0] = pr->a;
        }
        if (g1.f4 != 0) {
            if (gp->fc != 0) {
                func_02052d3c(gp->f4, gp->f8);
            }
            func_02052c04(gp->f4);
        }
        goto destroy;
    case 3:
        gp = &g3;
        func_02015e8c(gp, data_020b8e44);
        p = (uint8_t *)func_02052d90(gp->f4, gp->f8);
        off = *(uint32_t *)(p + 0x140);
        {
            Pair *pr = (Pair *)(p + off + 0x10);
            out[1] = pr->b;
            out[0] = pr->a;
        }
        if (g3.f4 != 0) {
            if (gp->fc != 0) {
                func_02052d3c(gp->f4, gp->f8);
            }
            func_02052c04(gp->f4);
        }
        goto destroy;
    case 4:
        gp = &g4;
        func_02015e8c(gp, data_020b8e44);
        p = (uint8_t *)func_02052d90(gp->f4, gp->f8);
        off = *(uint32_t *)(p + 0x140);
        {
            Pair *pr = (Pair *)(p + off + 0x18);
            out[1] = pr->b;
            out[0] = pr->a;
        }
        if (g4.f4 != 0) {
            if (gp->fc != 0) {
                func_02052d3c(gp->f4, gp->f8);
            }
            func_02052c04(gp->f4);
        }
        goto destroy;
    case 5:
        gp = &g5;
        func_02015e8c(gp, data_020b8e44);
        p = (uint8_t *)func_02052d90(gp->f4, gp->f8);
        off = *(uint32_t *)(p + 0x140);
        {
            Pair *pr = (Pair *)(p + off + 0x20);
            out[1] = pr->b;
            out[0] = pr->a;
        }
        if (g5.f4 != 0) {
            if (gp->fc != 0) {
                func_02052d3c(gp->f4, gp->f8);
            }
            func_02052c04(gp->f4);
        }
        break;
    default:
        goto done;
    }

destroy:
    func_02053290(gp);

done:
    if (flag != 0) {
        out[0] = 256 - out[0];
    }
}
