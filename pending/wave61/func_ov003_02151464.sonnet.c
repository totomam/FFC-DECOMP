#include "ffc/types.h"
extern uint32_t func_0204f7d4(const void *object);
extern void func_02056c9c(void *self, uint32_t a);
extern void *data_0213df18;
extern uint32_t data_ov003_02179cd4;
void *func_ov003_02151464(uint8_t *self, uint32_t a, uint32_t b)
{
    uint8_t *p;
    func_02056c9c(self, func_0204f7d4(data_0213df18));
    *(uint32_t *)self = (uint32_t)&data_ov003_02179cd4;
    *(uint32_t *)(self + 0x80) = 0;
    *(uint32_t *)(self + 0x84) = 0;
    *(uint32_t *)(self + 0x94) = a;
    *(uint32_t *)(self + 0x98) = 0;
    *(uint32_t *)(self + 0x9c) = b;
    *(uint32_t *)(self + 0xa0) = 0;
    p = self + 0x14;
    p[0x12] = (uint8_t)(((p[0x12] & ~0xff) | 1));
    p = self + 0x48;
    p[0x12] = (uint8_t)(((p[0x12] & ~0xff) | 1));
    return self;
}
