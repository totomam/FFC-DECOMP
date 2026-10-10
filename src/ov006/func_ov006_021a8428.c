#include "ffc/types.h"

extern uint8_t data_ov006_021bc75c;
extern void func_ov006_021a83b8(void);
extern void func_ov006_021a64c8(void (*)(void));

void func_ov006_021a8428(void)
{
    data_ov006_021bc75c++;
    if (data_ov006_021bc75c >= 0x78) {
        func_ov006_021a64c8(func_ov006_021a83b8);
    }
}
