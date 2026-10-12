#include "ffc/types.h"

extern int32_t func_ov000_02158f6c(uint32_t *a, uint32_t *b);
extern void *func_0205681c(uint32_t size);
extern void func_02055c20(void *p);
extern uint8_t data_020b0a70[];

void func_02075708(uint8_t *self) {
    uint32_t x;
    uint32_t y;
    uint8_t *o;
    uint32_t *p;
    void *ret;
    void (*cb)(uint32_t, uint32_t, uint8_t *);

    o = *(uint8_t **)(self + 0x40);
    if ((int8_t)*(uint32_t *)(o + 0xc) == 0) {
        uint32_t *vt = *(uint32_t **)o;
        ((void (*)(uint8_t *))vt[2])(o);
    }

    ret = (void *)(uintptr_t)func_ov000_02158f6c(&x, &y);
    if (ret != 0) {
        if (y == 7) {
            *(uint8_t *)(self + 0x44) = 1;
        }
        *(uint32_t *)(self + 0x4c) = y;
        *(uint32_t *)(self + 0x48) = x;
        cb = *(void (**)(uint32_t, uint32_t, uint8_t *))(self + 0x50);
        if (cb != 0) {
            cb(y, x, self);
        }
        p = (uint32_t *)func_0205681c(0x1c);
        if (p != 0) {
            uint32_t yy = y;
            uint32_t xx = x;
            p[2] = 0;
            p[3] = 0x22;
            p[0] = (uint32_t)(uintptr_t)data_020b0a70;
            p[4] = (uint32_t)(uintptr_t)ret;
            p[5] = xx;
            p[6] = yy;
        }
        func_02055c20(self + 0x14);
    }
}
