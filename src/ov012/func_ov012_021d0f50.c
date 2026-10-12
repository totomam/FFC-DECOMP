#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bf28(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203bed8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c28c(void);
extern void func_0203c27c(void);
extern uint32_t func_0203c33c(void);
extern uint32_t func_0203c21c(void);
extern uint32_t func_0203c22c(void);
extern void func_0206019c(void);
extern void func_02060e88(uint32_t a, uint32_t b);
extern void func_02060ea4(uint32_t a, uint32_t b);
extern void func_0204f550(uint32_t a);
extern void *func_02056aec(void *obj);
extern void *func_0205681c(uint32_t a);
extern void *func_ov012_021ce3ec(void *a, uint32_t b, uint32_t c, uint8_t d, uint32_t e, uint8_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0213df18;

void func_ov012_021d0f50(uint8_t *p)
{
    uint32_t st;
    uint32_t h;
    void *r;
    void *r5;
    uint8_t *q;

    st = *(uint32_t *)(p + 0x80);
    if (st != 3) {
        func_0203be8c();
    }
    st = *(uint32_t *)(p + 0x80);
    switch (st) {
    case 0:
        func_0203bea0();
        func_0203bf28(5, 2, 4, 1, 0, 0);
        func_0203c28c();
        func_0206019c();
        h = func_0203c22c();
        func_02060e88(h, 2);
        h = func_0203c22c();
        func_02060ea4(h, 0x10);
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    default:
        break;
    }

    st = *(uint32_t *)(p + 0x80);
    if (st != 3) {
        func_0203bed8(5, 3, 4, 1, 0, 0);
        func_0203c27c();
        func_0206019c();
        func_0203c33c();
        h = func_0203c21c();
        func_02060e88(h, 2);
        h = func_0203c21c();
        func_02060ea4(h, 0x10);
        func_0204f550(data_0213df18);
    }

    r5 = func_02056aec(p);
    r = func_0205681c(0x358);
    if (r != 0) {
        r = func_ov012_021ce3ec(r, *(uint32_t *)(p + 0x80), *(uint32_t *)(p + 0x84),
                                *(uint8_t *)(p + 0x88), *(uint32_t *)(p + 0x8c),
                                *(uint8_t *)(p + 0x90), *(uint32_t *)(p + 0x94));
    }
    q = p + 0x14;
    func_02056bc0(q, r);
    func_02056bc0(q, r5);
}
