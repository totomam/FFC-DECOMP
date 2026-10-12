#include "ffc/types.h"

typedef struct { uint32_t w[4]; } Quad;
typedef struct { uint32_t w[6]; } Big;

extern int func_020628ac(void *obj, Quad q);
extern void func_02056c4c(void *p);
extern int func_ov005_02195e2c(void *obj, Quad a, Quad b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void func_0201e954(void *a, uint32_t idx, void *out);
extern void func_ov005_021963cc(void *a, void *out, uint32_t z);
extern uint8_t func_ov008_0219a444(void *obj, uint32_t idx);
extern void func_ov005_02196f60(void *a, uint32_t v);
extern void func_ov005_021964c4(void *a);
extern void *data_020b93b8;

void func_ov008_02199bdc(uint8_t *self, void *arg)
{
    void *obj;
    void **vt;
    uint32_t i;
    Big buf;
    Quad t, t2, t3;

    void *a;
    a = arg;
    if (arg == 0) {
        obj = *(void **)(self + 0xe8);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[0x2c / 4])(obj);
        return;
    }

    *(void **)(self + 0x14c) = a;
    obj = *(void **)(self + 0xe8);
    vt = *(void ***)obj;
    if (((int (*)(void *))vt[0x30 / 4])(obj) != 0) {
        obj = *(void **)(self + 0xe8);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[0x28 / 4])(obj);
        vt = *(void ***)a;
        ((void (*)(Quad *, void *))vt[0x10 / 4])(&t, a);
        func_020628ac(*(void **)(self + 0xe8), t);
    } else {
        func_02056c4c(*(void **)(self + 0xe4));
        obj = *(void **)(self + 0xe8);
        ((void (*)(Quad *, void *))(*(void ***)obj)[0x1c / 4])(&t2, obj);
        vt = *(void ***)a;
        ((void (*)(Quad *, void *))vt[0x10 / 4])(&t3, a);
        func_ov005_02195e2c(*(void **)(self + 0xe8), t2, t3, 10, -5);
        func_02056bc0(*(void **)(self + 0xe4), 0);
    }

    {
        void **list = *(void ***)(self + 0xcc);
        for (i = 0; i < 8; i++) {
            if (a == list[i]) {
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
