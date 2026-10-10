#include "ffc/types.h"

extern uint8_t func_ov006_021a54a8(void);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021aa848(void);

void func_ov006_021aa830(void)
{
    if (func_ov006_021a54a8() != 0x1f) {
        func_ov006_021a64c8(func_ov006_021aa848);
    }
}
