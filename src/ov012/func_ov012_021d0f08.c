#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern uint32_t data_ov012_021d3d88;

void *func_ov012_021d0f08(void *obj, uint32_t a, uint32_t b, uint8_t c, uint32_t d, uint8_t e, uint32_t f)
{
    uint8_t *p = (uint8_t *)obj;
    func_02056c9c(obj, 0);
    *(uint32_t *)p = (uint32_t)&data_ov012_021d3d88;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
    *(uint8_t *)(p + 0x88) = c;
    *(uint32_t *)(p + 0x8c) = d;
    *(uint8_t *)(p + 0x90) = e;
    *(uint32_t *)(p + 0x94) = f;
    return obj;
}
