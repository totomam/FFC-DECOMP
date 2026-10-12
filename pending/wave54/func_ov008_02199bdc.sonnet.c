/* cflags: -lang c++ */
#include "ffc/types.h"

struct Quad { uint32_t w[4]; };
struct Big { uint32_t w[6]; };

struct Item {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual Quad pos();
};
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual Quad q7();
    virtual void v8(); virtual void v9();
    virtual void m28();
    virtual void m2c();
    virtual int m30();
};

extern "C" {
extern int func_020628ac(void *obj, Quad q);
extern void func_02056c4c(void *p);
extern void *func_ov005_02195e2c(void *obj, Quad a, Quad b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void func_0201e954(void *a, uint32_t idx, void *out);
extern void func_ov005_021963cc(void *a, void *out, uint32_t z);
extern uint8_t func_ov008_0219a444(void *obj, uint32_t idx);
extern void func_ov005_02196f60(void *a, uint32_t v);
extern void func_ov005_021964c4(void *a);
extern void *data_020b93b8;

void func_ov008_02199bdc(uint8_t *self, Item *arg)
{
    uint8_t i;
    Big buf;

    if (arg == 0) {
        (*(Obj **)(self + 0xe8))->m2c();
        return;
    }

    *(Item **)(self + 0x14c) = arg;
    if ((*(Obj **)(self + 0xe8))->m30() != 0) {
        (*(Obj **)(self + 0xe8))->m28();
        func_020628ac(*(Obj **)(self + 0xe8), arg->pos());
    } else {
        func_02056c4c(*(void **)(self + 0xe4));
        void *r = func_ov005_02195e2c(*(Obj **)(self + 0xe8), (*(Obj **)(self + 0xe8))->q7(), arg->pos(), 10, -5);
        func_02056bc0(*(void **)(self + 0xe4), r);
    }

    {
        for (i = 0; i < 8; i++) {
            void **list = *(void ***)(self + 0xcc);
            if ((void *)arg == list[i]) {
                uint8_t idx;
                self[0x144] = (uint8_t)i;
                idx = (uint8_t)(self[0x144] + (self[0x140] << 3));
                if (idx < *(uint32_t *)(self + 0xf4)) {
                    func_0201e954(data_020b93b8, idx, &buf);
                    func_ov005_021963cc(*(void **)(self + 0xec), &buf, 0);
                    func_ov005_02196f60(*(void **)(self + 0xfc), func_ov008_0219a444(self, idx));
                    self[0x143] = idx;
                    return;
                }
            }
        }
    }

    func_ov005_021964c4(*(void **)(self + 0xec));
    func_ov005_02196f60(*(void **)(self + 0xfc), 0);
    self[0x143] = 0xff;
}
}
