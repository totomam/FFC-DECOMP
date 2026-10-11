#include "ffc/types.h"

extern void func_ov006_021b20f0(uint32_t x);
extern uint32_t func_0208e91c(uint8_t *p);
extern void func_ov006_021b2140(void);
extern uint8_t data_ov006_021bc800[];

int func_ov006_021b256c(void)
{
    if (*(uint32_t *)(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x40) != 6) {
        return 0;
    }
    func_ov006_021b20f0(3);
    if (func_0208e91c(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x1e00) != 2) {
        func_ov006_021b2140();
        return 0;
    }
    return 1;
}
