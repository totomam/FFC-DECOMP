#include "ffc/types.h"

extern uint8_t data_ov006_021bc7a0;
extern void func_ov006_021ad0a0(void);
extern void func_ov006_021a3eb8(void);
extern void func_ov006_021a3bfc(int32_t arg);
extern void func_ov006_021b0600(int32_t arg);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021ad0f0(void);

void func_ov006_021ad074(void)
{
    data_ov006_021bc7a0 = 0;
    func_ov006_021ad0a0();
    func_ov006_021a3eb8();
    func_ov006_021a3bfc(0x26);
    func_ov006_021b0600(0x10);
    func_ov006_021a64c8(func_ov006_021ad0f0);
}
