#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t a);
extern void func_ov006_021a3724(void);
extern void func_ov006_021b3fd0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a7afc(void);
extern uint8_t data_ov006_021bc748[];

void func_ov006_021a7abc(void)
{
    if (func_ov006_021b3fb8(1) == 0) {
        if (data_ov006_021bc748[1] != 0) {
            func_ov006_021a3724();
        }
        func_ov006_021b3fd0(3, 1, 1, 8);
        func_ov006_021b3fd0(3, 0, 0x14, 8);
        func_ov006_021a64c8(func_ov006_021a7afc);
    }
}
