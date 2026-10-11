#include "ffc/types.h"

extern void func_ov006_021b49fc(void *p);
extern void func_ov006_021b5078(void *p);
extern void func_ov006_021b3f0c(uint32_t v, void *p);
extern uint8_t *data_ov006_021bc884;

void func_ov006_021b5794(uint32_t a, void *b)
{
    uint8_t *p = (uint8_t *)b;
    if (p[0x11] != 0) {
        func_ov006_021b49fc(p + 0xc);
    }
    func_ov006_021b5078(p);
    func_ov006_021b3f0c(*(uint32_t *)(data_ov006_021bc884 + (a << 6)), p);
}
