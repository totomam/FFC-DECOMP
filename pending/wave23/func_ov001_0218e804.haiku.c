#include "ffc/types.h"

extern uint32_t func_0204f7ec(const void *object);
extern void func_02056c9c(void *self, uint32_t x);
extern void *data_0213df18;
extern uint8_t data_ov001_02194a7c[];

void *func_ov001_0218e804(void *p, uint32_t arg)
{
    uint32_t v = func_0204f7ec(data_0213df18);
    func_02056c9c(p, v);
    *(void **)p = data_ov001_02194a7c;
    *(uint32_t *)((uint8_t *)p + 0x80) = arg;
    *(uint32_t *)((uint8_t *)p + 0x84) = 0;
    *(uint32_t *)((uint8_t *)p + 0x88) = 0;
    return p;
}
