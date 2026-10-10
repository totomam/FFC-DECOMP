#include "ffc/types.h"

extern uint8_t data_ov006_021bc7c0;
extern void func_ov006_021ae90c(void);
extern void func_ov006_021a3bfc(uint32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021ae954(void);

void func_ov006_021ae8e8(void)
{
    data_ov006_021bc7c0 = 0;
    func_ov006_021ae90c();
    func_ov006_021a3bfc(0x2d);
    func_ov006_021a64c8((void *)func_ov006_021ae954);
}
