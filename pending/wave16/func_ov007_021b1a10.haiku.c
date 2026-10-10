#include "ffc/types.h"

extern uint32_t data_ov007_021c5f5c[2];
extern uint32_t func_ov007_021b1a30(void *a, uint32_t x, uint32_t y, uint32_t b);
extern void func_02056bc0(void *object, uint32_t node);

void func_ov007_021b1a10(uint8_t *a, uint32_t b)
{
    uint32_t r;
    r = func_ov007_021b1a30(a, data_ov007_021c5f5c[0], data_ov007_021c5f5c[1], b);
    func_02056bc0(a + 0x14, r);
}
