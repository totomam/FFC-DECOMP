#include "ffc/types.h"

extern void *data_ov006_021b99bc[];
extern void *data_ov006_021bc7ec;
extern void func_ov006_021b0d10(void);
extern void *func_ov006_021a3b48(void *p);
extern uint32_t func_ov006_021b3888(void *p, uint32_t a, uint32_t b);
extern void func_ov006_021b570c(uint32_t a, void *f, uint32_t b, uint32_t c);

void func_ov006_021b0cdc(uint32_t idx)
{
    void *r = func_ov006_021a3b48(data_ov006_021b99bc[idx]);
    *(uint32_t *)&data_ov006_021bc7ec = func_ov006_021b3888(r, 0, 4);
    func_ov006_021b570c(1, (void *)func_ov006_021b0d10, 0, 0x78);
}
