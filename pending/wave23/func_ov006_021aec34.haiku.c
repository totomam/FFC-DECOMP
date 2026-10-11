#include "ffc/types.h"

extern uint8_t data_ov006_021bc7c4;
extern void func_ov006_021aec64(void);
extern void func_ov006_021a3e78(int x);
extern void func_ov006_021a3bfc(int x);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021aecb4(void);

void func_ov006_021aec34(void)
{
    data_ov006_021bc7c4 = 0;
    func_ov006_021aec64();
    func_ov006_021a3e78(8);
    func_ov006_021a3bfc(0x29);
    func_ov006_021b0600(0x10);
    func_ov006_021a64c8(func_ov006_021aecb4);
}
