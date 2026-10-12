#include "ffc/types.h"

extern uint8_t data_020aad10[];
extern void func_02061344(uint32_t v);
extern void func_0200958c(void *p);
extern void func_02063530(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_02008f6c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    *(uint8_t **)p = data_020aad10;
    if (*(uint32_t *)(p + 0x8c) != 0) {
        func_02061344(*(uint32_t *)(p + 0x8c));
    }
    func_0200958c(p + 0xb0);
    func_02063530(p + 0x94);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
