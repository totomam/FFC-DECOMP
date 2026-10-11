#include "ffc/types.h"

extern void *data_ov006_021bc7ec;
extern void func_020878ac(void *p, uint32_t size);
extern void func_020827ac(void *p, int v, uint32_t size);
extern void func_ov006_021b392c(void *p);
extern void func_ov006_021b5774(int a, uint32_t b);

void func_ov006_021b0d10(uint32_t param)
{
    uint32_t size = 0x600;
    func_020878ac(data_ov006_021bc7ec, size);
    func_020827ac(data_ov006_021bc7ec, 0, size);
    func_ov006_021b392c(data_ov006_021bc7ec);
    func_ov006_021b5774(1, param);
}
