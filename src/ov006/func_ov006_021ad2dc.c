#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t);
extern void func_ov006_021a68e4(void);
extern void func_ov006_021a3bdc(uint32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021ad30c(void);

void func_ov006_021ad2dc(void)
{
    uint32_t v = 1;

    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    func_ov006_021a68e4();
    func_ov006_021a3bdc(v);
    func_ov006_021a64c8(func_ov006_021ad30c);
}
