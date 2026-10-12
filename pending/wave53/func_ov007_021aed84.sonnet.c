#include "ffc/types.h"

extern void func_02033e04(void *p);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern uint32_t func_0203608c(void *p);
extern uint32_t func_02036368(void *p);
extern uint32_t func_02036370(void *p, int i);
extern void func_02033e28(void *p, int i, uint32_t v);
extern uint32_t func_0203637c(void *p);
extern void func_02033e40(void *p, uint32_t v);
extern void func_02033f28(void *p);
extern void func_02034030(void *p, void *q, uint32_t a, uint32_t b);
extern void *func_020340c0(void *p);
extern void func_02034014(void *p);
extern void func_02033e24(void *p);

typedef struct {
    uint32_t a[5];
    uint16_t h[8];
} Out;

typedef struct {
    uint32_t f0;
    uint32_t f1;
    uint8_t mid[0x20];
    uint32_t f2;
    uint8_t tail[0x08];
} Loc;

void func_ov007_021aed84(Out *out, uint32_t arg1, void *arg2)
{
    uint32_t a1 = arg1;
    struct { uint32_t pad; Loc loc; uint8_t obj[0x70]; } F;
    int i;
    Out *s;

    func_02033e04(&F.loc);
    func_02084b2c(&F.loc, 0, 0x34);
    F.loc.f0 = a1;
    F.loc.f1 = func_0203608c(arg2);
    F.loc.f2 = func_02036368(arg2);
    for (i = 0; i < 4; i++) {
        func_02033e28(&F.loc, i, func_02036370(arg2, i));
    }
    func_02033e40(&F.loc, func_0203637c(arg2));
    func_02033f28(F.obj);
    func_02034030(F.obj, &F.loc, 0, 0);
    s = (Out *)func_020340c0(F.obj);
    out->a[0]=s->a[0];out->a[1]=s->a[1];out->a[2]=s->a[2];out->a[3]=s->a[3];out->a[4]=s->a[4];
    out->h[0]=s->h[0];out->h[1]=s->h[1];out->h[2]=s->h[2];out->h[3]=s->h[3];out->h[4]=s->h[4];out->h[5]=s->h[5];out->h[6]=s->h[6];out->h[7]=s->h[7];
    func_02034014(F.obj);
    func_02033e24(&F.loc);
}
