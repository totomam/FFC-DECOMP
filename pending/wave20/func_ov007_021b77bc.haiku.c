#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c6fa0[];

void *func_ov007_021b77bc(void *p, uint16_t a1, uint32_t a2, uint32_t a3)
{
    func_020694ac(p, 0, 0);
    *(void **)p = data_ov007_021c6fa0;
    *(uint16_t *)((uint8_t *)p + 0xd8) = a1;
    *(uint32_t *)((uint8_t *)p + 0xdc) = a2;
    *(uint32_t *)((uint8_t *)p + 0xe0) = a3;
    return p;
}
