#include "ffc/types.h"

extern uint32_t *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_02084a58(uint32_t a, uint32_t *b, uint32_t c);
extern uint32_t func_ov006_021b570c(uint32_t a, void (*fn)(void), uint32_t b, uint32_t c);
extern uint32_t *data_ov006_021bc7d0;
extern void func_ov006_021af4ec(void);

void func_ov006_021af444(uint32_t a)
{
    uint32_t *p = func_ov006_021b49e4(0x608, 4);
    data_ov006_021bc7d0 = p;
    func_02084a58(a, p + 1, 0x600);
    *data_ov006_021bc7d0 = func_ov006_021b570c(1, func_ov006_021af4ec, 0, 0x78);
}
