#include "ffc/types.h"

extern uint8_t data_ov006_021bc768;
extern void func_ov006_021a66e0(void);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021b4100(uint32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a8ab0(void);

void func_ov006_021a8a88(void)
{
    if (data_ov006_021bc768 == 0) {
        func_ov006_021a66e0();
    }
    func_ov006_021a37a8();
    func_ov006_021b4100(8);
    func_ov006_021a64c8((void *)func_ov006_021a8ab0);
}
