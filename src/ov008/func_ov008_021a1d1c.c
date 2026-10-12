/* cflags: -lang c++ */
#include "ffc/types.h"

struct Q4 { uint32_t w[4]; };

struct B {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual Q4 get();
};
struct O {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual Q4 get7();
    virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual int m12();
};
struct A {
    uint8_t pad0[0xdc];
    B *slots[8];
    uint32_t padx[2];
    void *ents;
    uint32_t count;
    uint32_t pad1;
    void *o110;
    O *o114;
    void *o118;
    void *o11c;
    uint8_t pad2[0x131 - 0x120];
    uint8_t page;
    uint8_t pad3[2];
    uint32_t lim;
    uint32_t cur;
    uint8_t pad4[1];
    uint8_t last;
    uint8_t sel;
};

extern "C" {
void func_020628ac(void *o, Q4 q);
void func_02056c4c(void *o);
uint32_t func_ov005_02195e2c(void *o, Q4 a, Q4 b, int c, int d);
void func_02056bc0(void *object, void *node);
uint32_t func_ov008_021a2388(void *a, uint8_t idx);
uint32_t func_ov008_021a27ec(void *a, uint8_t idx);
void func_ov005_021963cc(void *o, void *entry, int flag);
void func_ov005_02196f60(void *o, uint32_t v);
void func_ov005_021964c4(void *o);

void func_ov008_021a1d1c(A *a, B *b)
{
    uint8_t i;
    uint8_t r4;
    int flag;

    if (b == 0) {
        a->o114->m11();
        return;
    }
    if (a->o114->m12() != 0) {
        a->o114->m10();
        func_020628ac(a->o114, b->get());
    } else {
        func_02056c4c(a->o110);
        uint32_t r = func_ov005_02195e2c(a->o114, a->o114->get7(), b->get(), 10, -5);
        func_02056bc0(a->o110, (void *)r);
    }

    for (i = 0; i < 8; i++) {
        if (b == a->slots[i]) {
            a->sel = i;
            r4 = (uint8_t)(a->sel + (a->page << 3));
            if (r4 >= a->count) {
                continue;
            }
            if (func_ov008_021a2388(a, a->last) == 0 &&
                func_ov008_021a27ec(a, r4) + a->cur > a->lim) {
                func_ov005_021963cc(a->o118, (uint8_t *)a->ents + r4 * 24, 1);
            } else {
                func_ov005_021963cc(a->o118, (uint8_t *)a->ents + r4 * 24, 0);
            }
            func_ov005_02196f60(a->o11c, func_ov008_021a27ec(a, r4));
            a->last = r4;
            return;
        }
    }
    func_ov005_021964c4(a->o118);
    func_ov005_02196f60(a->o11c, 0);
}
}
