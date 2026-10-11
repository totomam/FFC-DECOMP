#include "ffc/types.h"

extern uint8_t data_020aad10[];
extern void func_02061344(uint32_t v);
extern void func_0200958c(void *p);
extern void func_02063530(void *p);
extern void func_02056db0(void *p);

void *func_02008f38(void *p)
{
    uint8_t *self = (uint8_t *)p;
    *(uint8_t **)self = data_020aad10;
    if (*(uint32_t *)(self + 0x8c) != 0) {
        func_02061344(*(uint32_t *)(self + 0x8c));
    }
    func_0200958c(self + 0xb0);
    func_02063530(self + 0x94);
    func_02056db0(self);
    return self;
}
