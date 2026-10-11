#include "ffc/types.h"

extern void func_02046f28(void *p, uint32_t a, uint32_t b);
extern uint32_t func_0201f124(uint32_t v);
extern uint8_t data_020afa34[];
extern uint32_t data_020b93b8;

void *func_020473dc(void *p, uint32_t a, uint8_t c)
{
    func_02046f28(p, a, 3);
    *(uint8_t **)p = data_020afa34;
    *((uint8_t *)p + 0x94) = c;
    *(uint32_t *)((uint8_t *)p + 0x90) = func_0201f124(data_020b93b8);
    return p;
}
