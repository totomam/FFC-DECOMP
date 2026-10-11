#include "ffc/types.h"

extern uint32_t data_ov006_021bc7d0[];
extern void func_ov006_021af54c(void);
extern void func_ov006_021b570c(int a, void (*f)(void), int b, int c);

void func_ov006_021af520(uint32_t base, uint32_t x, uint32_t y)
{
    data_ov006_021bc7d0[1] = base + (x << 5);
    data_ov006_021bc7d0[2] = (y << 5) + 0x05000000;
    func_ov006_021b570c(1, func_ov006_021af54c, 0, 0x78);
}
