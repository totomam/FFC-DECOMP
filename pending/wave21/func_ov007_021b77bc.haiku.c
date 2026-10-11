#include "ffc/types.h"

extern void func_020694ac(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uint8_t data_ov007_021c6fa0[];

void *func_ov007_021b77bc(void *p, uint16_t a, uint32_t b, uint32_t c)
{
    func_020694ac(p, 0, 0, c);
    *(void **)p = data_ov007_021c6fa0;
    *(uint16_t *)((uint8_t *)p + 0xd8) = a;
    *(uint32_t *)((uint8_t *)p + 0xdc) = b;
    *(uint32_t *)((uint8_t *)p + 0xe0) = c;
    return p;
}
