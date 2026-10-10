#include "ffc/types.h"

extern void func_ov006_021b5774(uint32_t a, uint32_t b);
extern void func_ov006_021b49fc(void *p);
extern uint8_t *data_ov006_021bc7e8;

void func_ov006_021b05e0(void) {
    func_ov006_021b5774(0, *(uint32_t *)(data_ov006_021bc7e8 + 0xa8));
    func_ov006_021b49fc(&data_ov006_021bc7e8);
}
