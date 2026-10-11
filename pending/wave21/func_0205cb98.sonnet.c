#include "ffc/types.h"

extern void func_02059b60(void *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t s0, uint32_t s1, uint32_t s2);
extern char data_020b0ee4[];

void *func_0205cb98(void *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t s0, uint32_t s1, uint32_t s2)
{
    uint8_t *o = (uint8_t *)p;
    func_02059b60(p, a1, a2, a3, s0, s1, s2);
    *(char **)o = data_020b0ee4;
    *(uint16_t *)(o + 0x24) = 0;
    *(uint32_t *)(o + 0x28) = 0x1000;
    *(uint32_t *)(o + 0x2c) = 0x1000;
    *(uint32_t *)(o + 0x30) = 0;
    *(uint32_t *)(o + 0x34) = 0;
    return p;
}
