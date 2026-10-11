#include "ffc/types.h"

extern int32_t func_ov006_021a3744(void);
extern uint32_t func_ov006_021b570c(int32_t, void (*)(void), uint32_t, uint32_t);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021a8f30(void);
extern void func_ov006_021a8d50(void);
extern uint32_t data_ov006_021bc76c[];

void func_ov006_021a8d1c(void)
{
    if (func_ov006_021a3744() != -2) {
        data_ov006_021bc76c[1] = func_ov006_021b570c(1, func_ov006_021a8f30, 0, 0x78);
        func_ov006_021a64c8(func_ov006_021a8d50);
    }
}
