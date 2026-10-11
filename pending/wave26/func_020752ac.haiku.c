#include "ffc/types.h"

extern uint32_t data_020b25e0;
extern void func_02056858(uint32_t p);
extern void func_02056db0(void *p);

void *func_020752ac(uint8_t *p)
{
    *(uint32_t *)p = (uint32_t)&data_020b25e0;
    func_02056858(*(uint32_t *)(p + 0x94));
    *(uint32_t *)(p + 0x94) = 0;
    func_02056858(*(uint32_t *)(p + 0x8c));
    *(uint32_t *)(p + 0x8c) = 0;
    func_02056db0(p);
    return p;
}
