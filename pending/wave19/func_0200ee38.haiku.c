#include "ffc/types.h"

extern void func_0209cf5c(void *base, uint32_t size, uint32_t count, void (*ctor)(void), void (*dtor)(void));
extern void func_0200ee74(void);
extern void func_0200ee84(void);
extern uint8_t data_020abb58[];

void *func_0200ee38(void *p)
{
    uint32_t *o = (uint32_t *)p;
    o[2] = 0;
    o[3] = 0x100ed;
    o[0] = (uint32_t)data_020abb58;
    func_0209cf5c((uint8_t *)p + 0x20, 0xc, 0xc, func_0200ee74, func_0200ee84);
    return p;
}
