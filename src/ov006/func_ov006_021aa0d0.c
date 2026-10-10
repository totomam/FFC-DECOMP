#include "ffc/types.h"

extern uint8_t func_ov006_021a42a0(void);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021aa0e8(void);

void func_ov006_021aa0d0(void)
{
    if (func_ov006_021a42a0() != 0xff) {
        func_ov006_021a64c8(func_ov006_021aa0e8);
    }
}
