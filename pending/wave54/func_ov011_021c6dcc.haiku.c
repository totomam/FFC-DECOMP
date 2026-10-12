#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
extern void *func_0203be8c(void *p);
extern void func_0203bea0(void *p);
extern void func_0203bf04(int a, int b, int c, int d);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void *func_0203c22c(void);
extern void func_02060e88(void *x, int y);
extern void func_02060ea4(void *x, int y);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void *func_0203c21c(void);
extern void func_0204f550(void *v);
extern void *func_0203c2e4(void);
extern void func_0205947c(void *x, int v);
extern void func_020591f4(void *x, int v);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void *func_0203b9b4(int v);
extern void func_02057958(void *o);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *o);
extern uint32_t func_ov011_021c6ecc(void *p, Pair s);
extern void *func_0205681c(uint32_t size);
extern void *func_ov011_021c6904(void *a, void *b, uint32_t c);
extern void *data_0213df18;
extern uint32_t data_ov011_021cba7c[2];

typedef uint32_t (*VFn)(void *, int);
typedef struct { void *pad[9]; VFn fn; } VT;
typedef struct Obj { VT *vt; } Obj;

void func_ov011_021c6dcc(void *p)
{
    uint8_t *q = (uint8_t *)p;
    void *r4;
    void *a;
    uint32_t r6;

    func_0203bea0(func_0203be8c(p));
    func_0203bf04(5, 4, 0, 0);
    func_0203c354();
    func_0203c270();
    func_02060e88(func_0203c22c(), 2);
    func_02060ea4(func_0203c22c(), 0x10);
    func_0203bed8(4, 0, 4, 1, 1, 1);
    func_02060e88(func_0203c21c(), 2);
    func_02060ea4(func_0203c21c(), 0x10);
    func_0204f550(data_0213df18);
    func_0205947c(func_0203c2e4(), 1);
    func_020591f4(func_0203c2e4(), 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();
    r4 = func_0203b9b4(1);
    func_02057958(r4);
    { Obj *o = (Obj *)r4; *(uint32_t *)(q + 0x80) = o->vt->fn(o, 0); }
    func_02056bc0(q + 0x48, r4);
    r4 = func_02056aec(p);
    r6 = func_ov011_021c6ecc(p, *(Pair *)data_ov011_021cba7c);
    a = func_0205681c(0xd0);
    if (a != 0) {
        a = func_ov011_021c6904(a, q + 0x84, *(uint32_t *)(q + 0x80));
    }
    p = (uint8_t *)p + 0x14;
    func_02056bc0(p, a);
    func_02056bc0(p, (void *)r6);
    func_02056bc0(p, r4);
}
