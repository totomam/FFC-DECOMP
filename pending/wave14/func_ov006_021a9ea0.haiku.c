#include "ffc/types.h"

extern uint8_t data_ov006_021b8568;
extern uint32_t data_ov006_021bc778;
extern void func_ov006_021af520(void *p, uint8_t a, uint8_t b);

void func_ov006_021a9ea0(void) {
    uint8_t v = data_ov006_021b8568;
    volatile uint8_t tmp = v;
    func_ov006_021af520((void *)(((uint32_t *)((uint32_t *)&data_ov006_021bc778)[1]))[2], v, v);
}
