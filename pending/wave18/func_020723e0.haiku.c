#include "ffc/types.h"

extern uint32_t data_020b2340;
extern uint32_t data_0213e188;
extern void func_02053574(uint16_t v);
extern void func_02056844(void *p);

void *func_020723e0(void *p)
{
    uint8_t *s = (uint8_t *)p;
    *(uint32_t *)s = (uint32_t)&data_020b2340;
    *(uint32_t *)((uint8_t *)&data_0213e188 + 0xc) = 0;
    func_02053574(*(uint16_t *)(s + 0x14));
    func_02056844(s);
    return s;
}
