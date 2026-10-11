#include "ffc/types.h"

extern uint32_t func_0204f7ec(const void *object);
extern void func_02056c9c(void *self, uint32_t arg);
extern void *data_0213df18;
extern char data_ov001_02194a7c[];

void *func_ov001_0218e840(void *self, uint32_t arg)
{
    uint32_t r = func_0204f7ec(data_0213df18);
    func_02056c9c(self, r);
    *(void **)self = data_ov001_02194a7c;
    *(uint32_t *)((uint8_t *)self + 0x80) = 0;
    *(uint32_t *)((uint8_t *)self + 0x84) = arg;
    *(uint32_t *)((uint8_t *)self + 0x88) = 0;
    return self;
}
