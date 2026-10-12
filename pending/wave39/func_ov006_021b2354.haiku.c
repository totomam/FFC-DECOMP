#include "ffc/types.h"

extern uint32_t data_ov006_021bc800[];
extern void func_ov006_021b20f0(int);
extern int func_0208de5c(void *, void *, uint16_t, void *, uint16_t, int);
extern void func_ov006_021b2140(void);
extern void func_ov006_021b23bc(void);

int func_ov006_021b2354(void)
{
    uint8_t *p = (uint8_t *)data_ov006_021bc800[1];
    uint32_t v = *(uint32_t *)(p + 0x40);
    if (v - 4 <= 2) {
        return 1;
    }
    func_ov006_021b20f0(4);
    p = (uint8_t *)data_ov006_021bc800[1];
    if (func_0208de5c((void *)func_ov006_021b23bc, p + 0x1060,
                      (uint16_t)*(uint32_t *)(p + 0x12a4),
                      p + 0xf80,
                      (uint16_t)*(uint32_t *)(p + 0x12a0), 1) != 2) {
        func_ov006_021b2140();
        return 0;
    }
    return 1;
}
