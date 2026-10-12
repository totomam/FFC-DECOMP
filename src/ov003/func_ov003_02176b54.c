#include "ffc/types.h"

extern char data_ov003_0217ba88[];
extern uint32_t data_0213df18;
extern void func_02060bf4(uint32_t x);
extern void func_02060e88(uint32_t x, uint32_t y);
extern void func_02060ea4(uint32_t x, uint32_t y);
extern uint32_t func_0204f7ec(const void *object);
extern void func_ov003_02148fac(uint32_t a, uint32_t b);
extern void func_02056db0(void *p);

void *func_ov003_02176b54(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint32_t st;
    *(char **)self = data_ov003_0217ba88;
    st = *(uint32_t *)(self + 0x98);
    if (st == 6) {
        func_02060bf4(*(uint32_t *)(*(uint8_t **)(self + 0xa8) + 0x1c));
    } else if (st == 7) {
        func_02060bf4(*(uint32_t *)(*(uint8_t **)(self + 0xa8) + 0x1c));
        func_02060e88(*(uint32_t *)(*(uint8_t **)(self + 0xa8) + 0x24), 2);
        func_02060ea4(*(uint32_t *)(*(uint8_t **)(self + 0xa8) + 0x24), 0x10);
        if (*(uint32_t *)(self + 0xa8) == func_0204f7ec((const void *)data_0213df18)) {
            uint32_t *r2 = *(uint32_t **)(*(uint32_t *)(self + 0x80) + 0x188);
            *(uint32_t *)((uint8_t *)r2 + 0xc) &= ~0xffu;
        }
    }
    func_ov003_02148fac(*(uint32_t *)(self + 0x80), 0);
    func_02056db0(self);
    return self;
}
