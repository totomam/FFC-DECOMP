#include "ffc/types.h"

extern uint8_t data_ov006_021bc774;
extern void func_ov006_021a909c(void);
extern void func_ov006_021a64c8(void (*)(void));

void func_ov006_021a9114(void)
{
    data_ov006_021bc774++;
    if (data_ov006_021bc774 >= 0x78) {
        func_ov006_021a64c8(func_ov006_021a909c);
    }
}
