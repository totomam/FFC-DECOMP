#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
extern uint32_t func_ov002_021c85f8(void *p);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021a16d4(const void *object);
extern uint32_t func_ov002_02195fa4(void);
extern uint32_t func_ov002_021a16ec(const void *object);
extern uint32_t func_ov002_02198688(uint32_t a, uint32_t b);
extern void *func_ov002_021a4c3c(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov002_021a44bc(const void *object);
extern uint32_t func_ov002_02195f98(void *a, uint32_t b);
extern void *func_02055a2c(void *a, void *b);
extern uint32_t func_ov002_0219aa1c(void *a, void *b);
extern uint32_t func_ov002_0219a9dc(void *a, P p);
extern uint32_t data_020ab318;
extern uint32_t data_020abd18;
extern uint32_t data_ov002_021d5254[];
extern uint32_t data_020ab7b8;

void func_ov002_021a5590(void *obj, uint32_t *param)
{
    uint8_t *self = (uint8_t *)obj;
    uint32_t *w;
    void *n;
    uint32_t t, s, u;
    uint32_t *d;

    if (param[4] != func_ov002_021c85f8(self + 0x144)) {
        return;
    }
    if ((n = func_0205681c(0x84)) != 0) {
        func_ov002_021a16d4(self);
        t = func_ov002_02195fa4();
        s = func_ov002_021a16ec(self);
        u = func_ov002_02198688(t, 1 - s);
        n = func_ov002_021a4c3c(n, u);
    }
    func_02056bc0(self + 0x14, n);
    func_02056bc0(self + 0x14, func_ov002_021a44bc(self));

    for (uint32_t i = 0; i < 2; i++) {
        void *q;
        uint32_t r;
        if ((q = func_0205681c(0x10)) != 0) {
            w = (uint32_t *)q;
            w[2] = 0;
            w[3] = 0x100b8;
            w[0] = (uint32_t)&data_020ab318;
        }
        r = func_ov002_02195f98(*(void **)(self + 0xf4), i);
        q = func_02055a2c((void *)(r + 0x80), q);
        func_02056bc0(self + 0x14, q);
    }

    if ((n = func_0205681c(0x14)) != 0) {
        w = (uint32_t *)n;
        w[2] = 0;
        w[3] = 0x100e8;
        w[0] = (uint32_t)&data_020abd18;
    }
    func_02056bc0(self + 0x14, (void *)func_ov002_0219aa1c(*(void **)(self + 0xfc), n));

    d = data_ov002_021d5254;
    func_02056bc0(self + 0x14, (void *)func_ov002_0219a9dc(*(void **)(self + 0xfc), *(P *)d));

    if (*(uint32_t *)(self + 0x18c) == 0) {
        return;
    }
    if ((n = func_0205681c(0x14)) != 0) {
        w = (uint32_t *)n;
        uint32_t v = param[4];
        w[2] = 0;
        w[3] = 0x100d8;
        w[0] = (uint32_t)&data_020ab7b8;
        w[4] = v;
    }
    func_02056bc0(self + 0x14, func_02055a2c(*(void **)(self + 0x18c), n));
}
