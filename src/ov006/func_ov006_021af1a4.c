#include "ffc/types.h"

extern uint8_t data_ov006_021bc7cc;
extern uint32_t func_ov006_021a3744(void);
extern void func_ov006_021b0644(void);
extern void func_ov006_021b0600(uint32_t x);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021af1d4(void);

void func_ov006_021af1a4(void)
{
    if (data_ov006_021bc7cc != 0) {
        return;
    }
    if (func_ov006_021a3744() != 0) {
        return;
    }
    data_ov006_021bc7cc = 2;
    func_ov006_021b0644();
    func_ov006_021b0600(7);
    func_ov006_021a64c8(func_ov006_021af1d4);
}
