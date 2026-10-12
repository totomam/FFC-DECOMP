#include "ffc/types.h"

typedef struct { uint32_t w[4]; } Blk16;
typedef struct { uint32_t w[6]; } Blk24;

extern void func_020628ac(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056c4c(void *obj);
extern uint32_t func_ov005_02195e2c(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *obj, void *node);
extern void func_0201e954(void *heap, uint32_t idx, void *out);
extern int func_ov008_0219c624(uint8_t *self, uint32_t idx);
extern void func_ov005_021963cc(void *obj, void *buf, uint32_t flag);
extern void func_ov005_021964c4(void *obj);
extern void *data_020b93b8;

void func_ov008_0219c4a0(uint8_t *self, void *node) {
    Blk24 buf;
    Blk16 t1;
    Blk16 t2;
    Blk16 t3;
    volatile Blk24 s;
    uint32_t i;

    if (self == 0) {
        ((void (*)(void *))(*(void ***)(*(void **)(self + 0xe4)))[11])(*(void **)(self + 0xe4));
        return;
    }
    if (((int (*)(void *))(*(void ***)(*(void **)(self + 0xe4)))[12])(*(void **)(self + 0xe4)) != 0) {
        ((void (*)(void *))(*(void ***)(*(void **)(self + 0xe4)))[10])(*(void **)(self + 0xe4));
        ((void (*)(void *, void *))(*(void ***)node)[4])(&t1, node);
        t2 = t1;
        func_020628ac(*(void **)(self + 0xe4), t2.w[0], t2.w[1], t2.w[2]);
    } else {
        func_02056c4c(*(void **)(self + 0xe0));
        ((void (*)(void *, void *))(*(void ***)(*(void **)(self + 0xe4)))[7])(&t2, *(void **)(self + 0xe4));
        ((void (*)(void *, void *))(*(void ***)node)[4])(&t3, node);
        s.w[0] = t3.w[0];
        s.w[1] = t3.w[1];
        s.w[2] = t3.w[2];
        s.w[3] = t3.w[3];
        s.w[4] = 10;
        s.w[5] = (uint32_t)-5;
        t1 = t2;
        func_ov005_02195e2c(*(void **)(self + 0xe4), t1.w[0], t1.w[1], t1.w[2]);
        func_02056bc0(*(void **)(self + 0xe0), node);
    }

    for (i = 0; i < 8; i++) {
        if (node == (*(void ***)(self + 0xc4))[i]) {
            uint8_t v;
            *(uint8_t *)(self + 0x107) = (uint8_t)i;
            v = (uint8_t)(*(uint8_t *)(self + 0x107) + (*(uint8_t *)(self + 0x105) << 3));
            if (v < *(uint32_t *)(self + 0xf0)) {
                uint32_t flag;
                func_0201e954(data_020b93b8, v, &buf);
                flag = (func_ov008_0219c624(self, v) == 0) ? 1 : 0;
                func_ov005_021963cc(*(void **)(self + 0xe8), &buf, flag);
                return;
            }
        }
    }
    func_ov005_021964c4(*(void **)(self + 0xe8));
}
