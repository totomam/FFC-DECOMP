#include "ffc/types.h"

extern uint8_t data_020b0df0[];
extern uint8_t data_0209f480[];
extern uint8_t data_0209f484[];
extern uint8_t data_0209f488[];
extern void func_02059b60(void *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t s4, uint32_t s5, uint32_t s6);

void *func_02059d64(void *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t idx, uint32_t a6)
{
    uint32_t off = idx * 12;
    uint32_t v = *(uint32_t *)(data_0209f488 + off);

    func_02059b60(p, a1, a2, a3, v << 11, idx, a6);

    *(uint8_t **)p = data_020b0df0;
    ((uint32_t *)p)[9] = idx;
    ((uint32_t *)p)[10] = *(uint32_t *)(data_0209f480 + off);
    ((uint32_t *)p)[11] = *(uint32_t *)(data_0209f484 + off);
    ((uint32_t *)p)[12] = v;
    ((uint32_t *)p)[13] = 0;
    return p;
}
