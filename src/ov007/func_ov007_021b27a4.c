#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_ov007_021b27d4(void *a, void *b);

void func_ov007_021b27a4(void *p, uint32_t x)
{
    uint32_t v = func_020159c8(data_020b8e44, 5 << 6);
    func_02091b10((uint8_t *)p + 0x2d14, v, x);
    func_ov007_021b27d4(p, (uint8_t *)p + 0x2d14);
}
