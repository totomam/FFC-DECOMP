#include "ffc/types.h"

extern void func_020849c4(uint32_t a, uint32_t b, uint32_t size);
extern void func_ov006_021b5774(uint32_t a, void *b);
extern uint32_t data_ov006_021bc7d0[];

void func_ov006_021af54c(void *p)
{
    func_020849c4(data_ov006_021bc7d0[1], data_ov006_021bc7d0[2], 0x20);
    func_ov006_021b5774(1, p);
}
