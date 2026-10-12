#include "ffc/types.h"

extern void func_02056858(void *p);
extern void func_02060e88(void *p, int v);
extern void func_02060ea4(void *p, int v);
extern void func_02059698(void *a, void *b);
extern void func_ov003_02148fac(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern char data_ov003_0217bad0[];

void *func_ov003_0217697c(void *p)
{
    uint8_t *self = (uint8_t *)p;

    *(void **)self = (void *)data_ov003_0217bad0;
    if (*(void **)(self + 0x9c) != 0) {
        func_02056858(*(void **)(self + 0x9c));
        *(void **)(self + 0x9c) = 0;
    }
    if (*(void **)(self + 0xa0) != 0) {
        func_02056858(*(void **)(self + 0xa0));
        *(void **)(self + 0xa0) = 0;
    }
    func_02060e88(*(void **)(*(uint8_t **)(self + 0x98) + 0x24), 2);
    func_02060ea4(*(void **)(*(uint8_t **)(self + 0x98) + 0x24), 0x10);
    func_02059698(*(void **)(*(uint8_t **)(self + 0x98) + 0x14), *(void **)(self + 0x84));
    ((uint32_t **)(*(uint8_t **)(self + 0x80)))[0x85 * 1][0] = 0;
    {
        uint32_t *r3 = *(uint32_t **)(*(uint8_t **)(self + 0x80) + 0x188);
        r3[3] = r3[3] & ~0xffu;
    }
    func_ov003_02148fac(*(void **)(self + 0x80));
    func_02056db0(self);
    func_02056844(self);
    return p;
}
