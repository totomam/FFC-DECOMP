#include "ffc/types.h"

extern uint32_t data_020b0f74[];
extern uint32_t data_020b0fb0[];
extern uint32_t data_020b0fb4[];
extern void func_0205cb98(uint32_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t prod, uint32_t idx, uint32_t c);

uint32_t *func_0205cf5c(uint32_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t idx, uint32_t c)
{
    uint32_t prod = data_020b0fb0[idx * 2] * data_020b0fb4[idx * 2];
    func_0205cb98(p, a1, a2, a3, prod, idx, c);
    p[0] = (uint32_t)data_020b0f74;
    p[0xe] = idx;
    p[0xf] = data_020b0fb0[idx * 2];
    p[0x10] = data_020b0fb4[idx * 2];
    p[4] = (p[4] & ~4u) | 0x80u;
    return p;
}
