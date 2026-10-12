#include "ffc/types.h"

typedef struct VT {
    void *s0;
    void (*dtor)(void *);
} VT;

typedef struct Obj {
    VT *vt;
} Obj;

typedef struct G {
    uint32_t f0;
    uint32_t f4;
    void *f8;
    void *fc;
} G;

extern G data_ov014_02155b20;
extern void *data_0213df18;
extern uint8_t data_ov014_02155b30[];

extern void func_02081b5c(void *dst, int v, int n);
extern int func_0203c21c(void);
extern int func_0203c22c(void);
extern void func_02060e88(int a, int b);
extern void func_02060ea4(int a, int b);
extern void func_0204f550(void *p);
extern void func_ov014_02145af4(void *p);
extern void func_ov014_02147a64(void *p);
extern void func_02054144(int a, void *p);
extern void func_ov014_02147a40(void *p);
extern void func_02088548(void *p);
extern void func_02056858(void *p);
extern void func_ov014_021459cc(void *p);
extern void func_0207ea0c(void *p);

#define FLD(T, off) (*(T *)((uint8_t *)a + (off)))

void func_ov014_0214772c(void *a, int flag)
{
    int r, i, m;
    G *g = &data_ov014_02155b20;

    if (flag) {
        *(volatile uint16_t *)0x05000000 = 0;
        *(volatile uint16_t *)0x05000400 = 0;
        func_02081b5c((void *)0x4000050, 0x3f, -16);
        func_02081b5c((void *)0x4001050, 0x3f, -16);
        func_02060e88(func_0203c21c(), 2);
        func_02060ea4(func_0203c21c(), 0x10);
        r = func_0203c22c();
        m = 2;
        goto tail;
    } else {
        *(volatile uint16_t *)0x05000000 = 0x7fff;
        *(volatile uint16_t *)0x05000400 = 0x7fff;
        func_02081b5c((void *)0x4000050, 0x3f, 0x10);
        func_02081b5c((void *)0x4001050, 0x3f, 0x10);
        func_02060e88(func_0203c21c(), 1);
        func_02060ea4(func_0203c21c(), 0x10);
        r = func_0203c22c();
        m = 1;
    }
tail:
    func_02060e88(r, m);
    r = func_0203c22c();
    func_02060ea4(r, 0x10);
    func_0204f550(data_0213df18);

    if (!FLD(uint8_t, 0x79)) {
        if (!FLD(uint8_t, 0x78)) {
            if (FLD(int, 0x74) - 1) {
                i = 0;
                do {
                    if (FLD(uint8_t, 0x34)) {
                        func_ov014_02145af4(g->f8);
                    } else {
                        func_ov014_02147a64(a);
                    }
                    i++;
                } while (i < FLD(int, 0x74) - 1);
            }
        }
        while (!g->f4)
            ;
        func_02054144(0, g->fc);
        if (g->fc) {
            Obj *o = (Obj *)g->fc;
            o->vt->dtor(o);
            g->fc = 0;
        }
        if (FLD(uint8_t, 0x5c)) {
            func_ov014_02147a40(a);
        }
        func_02088548((uint8_t *)a + 8);
        if (FLD(void *, 0x48)) {
            func_02056858(FLD(void *, 0x48));
            FLD(void *, 0x48) = 0;
        }
        if (FLD(void *, 0x4c)) {
            func_02056858(FLD(void *, 0x4c));
            FLD(void *, 0x4c) = 0;
        }
        func_ov014_021459cc(g->f8);
    }

    if (FLD(uint8_t, 0x7a)) {
        func_0207ea0c(data_ov014_02155b30);
        FLD(uint8_t, 0x7a) = 0;
    }
    if (FLD(void *, 0x90)) {
        Obj *o = (Obj *)FLD(void *, 0x90);
        o->vt->dtor(o);
        FLD(void *, 0x90) = 0;
    }
    if (FLD(void *, 0x8c)) {
        Obj *o = (Obj *)FLD(void *, 0x8c);
        o->vt->dtor(o);
        FLD(void *, 0x8c) = 0;
    }
    if (FLD(void *, 0x88)) {
        Obj *o = (Obj *)FLD(void *, 0x88);
        o->vt->dtor(o);
        FLD(void *, 0x88) = 0;
    }
}
