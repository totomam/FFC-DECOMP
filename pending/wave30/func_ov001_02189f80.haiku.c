#include "ffc/types.h"

extern void func_ov001_02189e64(void *self);
extern void *func_0205681c(uint32_t size);
extern uint32_t data_020ac678[];
extern uint32_t data_ov001_021945f0[];

void func_ov001_02189f80(void *a)
{
    uint8_t *self = (uint8_t *)a;
    uint32_t *p;
    uint32_t v0;
    uint32_t v6;

    func_ov001_02189e64(self);
    p = (uint32_t *)func_0205681c(0x18);
    if (p != 0) {
        v6 = *(uint32_t *)(self + 0x6c8);
        v0 = ((uint32_t (*)(void *))((void **)*(void **)self)[0x38 / 4])(self);
        p[2] = 0;
        p[3] = 0x100b3;
        p[0] = (uint32_t)data_020ac678;
        p[4] = v0;
        p[5] = v6;
    }
    ((void (*)(void *, void *))((void **)*(void **)self)[0x4c / 4])(self, p);
    *(uint32_t *)(self + 0xf4) = data_ov001_021945f0[0];
    *(uint32_t *)(self + 0xf8) = data_ov001_021945f0[1];
}
