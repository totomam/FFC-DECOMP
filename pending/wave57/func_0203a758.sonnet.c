#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void *func_0203c2e4(void);
extern void func_0205947c(void *o, int x);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void *func_0205681c(int x);
extern void *func_ov012_021d2a98(void *p, int x);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203c21c(void);
extern void func_02060e88(void *o, int x);
extern void func_02060ea4(void *o, int x);
extern void func_0203bf28(int a, int b, int c, int d, int e, int f);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void func_0204f550(void *x);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern void *func_ov011_021bd80c(void *p, void *q, uint8_t b, void *c, int d);
extern void *data_0213df18;
extern uint32_t data_020aea54[2];

void func_0203a758(void *a0)
{
    uint8_t *a = (uint8_t *)a0;
    void *r;
    int r4;

    func_0203be8c();
    func_0203bea0();
    func_0203bed8(5, 0, 3, 1, 1, 1);
    func_0205947c(func_0203c2e4(), 1);
    func_0203c33c();
    func_0203c264();
    r = func_0205681c(0x120);
    if (r != 0) {
        r = func_ov012_021d2a98(r, 0);
    }
    *(void **)(a + 0x94) = r;
    func_02056bc0(*(void **)(a + 0x90), r);
    func_02060e88(func_0203c21c(), 2);
    func_02060ea4(func_0203c21c(), 0x10);
    func_0203bea0();
    r4 = 1;
    func_0203bf28(5, 2, 4, 1, 0, 0);
    func_0203c354();
    func_0203c270();
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();
    r = func_0205681c(0x128);
    if (r != 0) {
        r = func_ov011_021bd80c(r, a + 0x8c, *(uint8_t *)(a + 0x88), *(void **)(a + 0x94), r4);
    }
    func_02056bc0(a + 0x14, r);
    {
        uint32_t hi = data_020aea54[1];
        uint32_t lo = data_020aea54[0];
        *(uint32_t *)(a + 0x80) = lo;
        *(uint32_t *)(a + 0x84) = hi;
    }
}
