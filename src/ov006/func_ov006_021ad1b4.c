#include "ffc/types.h"

extern uint8_t data_ov006_021bc7a0;
extern void func_ov006_021ad13c(void);
extern void func_ov006_021a64c8(void (*)(void));

void func_ov006_021ad1b4(void)
{
    data_ov006_021bc7a0++;
    if (data_ov006_021bc7a0 >= 0x78) {
        func_ov006_021a64c8(func_ov006_021ad13c);
    }
}
