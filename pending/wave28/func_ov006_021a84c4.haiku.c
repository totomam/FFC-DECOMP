#include "ffc/types.h"

extern void func_ov006_021b3fd0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov006_021b46e8(uint32_t a, uint32_t b);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021a850c(void);
extern uint8_t data_ov006_021bc760;

void func_ov006_021a84c4(void)
{
    func_ov006_021b3fd0(2, 0, 0x15, 8);
    func_ov006_021b46e8(0, 0x15);
    if (data_ov006_021bc760 != 0) {
        func_ov006_021b3fd0(2, 1, 1, 8);
        func_ov006_021b46e8(1, 1);
    }
    func_ov006_021a64c8((void *)func_ov006_021a850c);
}
