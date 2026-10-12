#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bf28(int a, int b, int c, int d, uint32_t e, uint32_t f);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void func_0203bed8(int a, int b, int c, int d, uint32_t e, uint32_t f);
extern uint32_t func_0203c2e4(void);
extern void func_020591f4(uint32_t a, uint32_t b);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0204f550(uint32_t a);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern uint32_t func_0203c21c(void);
extern void func_02060e88(uint32_t a, uint32_t b);
extern void func_02060ea4(uint32_t a, uint32_t b);
extern uint32_t func_0203c22c(void);
extern void *func_02056aec(void *a);
extern void *func_0205681c(int a);
extern void *func_ov011_021c4f00(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, void *f);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0213df18;

void func_ov011_021c5c28(void *a)
{
    uint8_t *p = (uint8_t *)a;
    void *n;
    void *r;
    void *x;
    uint8_t *q;

    func_0203be8c();
    func_0203bea0();
    func_0203bf28(5, 2, 4, 1, 0, 0);
    func_0203c354();
    func_0203c270();
    func_0203bed8(5, 1, 3, 0, 1, 1);
    func_020591f4(func_0203c2e4(), 0);
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    func_0203c380();
    func_0203c394();
    func_02060e88(func_0203c21c(), 2);
    func_02060ea4(func_0203c21c(), 0x10);
    func_02060e88(func_0203c22c(), 2);
    func_02060ea4(func_0203c22c(), 0x10);
    n = func_02056aec(p);
    r = func_0205681c(0x12c);
    x = r;
    if (r) {
        x = func_ov011_021c4f00(r,
            *(uint32_t *)(p + 0x84),
            *(uint32_t *)(p + 0xa4),
            *(uint32_t *)(p + 0x80),
            *(uint32_t *)(p + 0x88),
            p + 0xa8);
    }
    q = p + 0x14;
    func_02056bc0(q, x);
    func_02056bc0(q, n);
}
