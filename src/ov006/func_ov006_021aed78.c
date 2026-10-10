#include "ffc/types.h"

extern uint8_t data_ov006_021bc7c4;
extern void func_ov006_021aed00(void);
extern void func_ov006_021a64c8(void (*)(void));

void func_ov006_021aed78(void)
{
    data_ov006_021bc7c4++;
    if (data_ov006_021bc7c4 >= 0x78) {
        func_ov006_021a64c8(func_ov006_021aed00);
    }
}
