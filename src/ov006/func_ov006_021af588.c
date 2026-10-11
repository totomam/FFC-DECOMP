#include "ffc/types.h"

extern uint32_t data_ov006_021bc7d0[];
extern void func_020849c4(void *p, uint32_t a, uint32_t b);
extern void func_ov006_021b5774(int a, void *b);

void func_ov006_021af588(void *p)
{
    func_020849c4((void *)data_ov006_021bc7d0[1], 0x05000000, 0x200);
    func_ov006_021b5774(1, p);
}
