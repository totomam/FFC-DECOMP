#include "ffc/types.h"

extern void *data_ov006_021bc7e4;
extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void func_02084050(void *p, uint32_t arg);
extern void func_ov000_02158738(void *p);

void func_ov006_021afce8(void)
{
    void *p = func_ov006_021b49e4(0x6f8, 0x20);
    data_ov006_021bc7e4 = p;
    func_02084050((uint8_t *)p + 0x4f8, 0xa001);
    func_ov000_02158738(data_ov006_021bc7e4);
}
