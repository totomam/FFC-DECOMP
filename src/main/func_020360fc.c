#include "ffc/types.h"

extern uint32_t func_020360d8(void *p);
extern uint8_t *func_02017dd8(uint32_t a, uint32_t b);
extern uint32_t func_020361f0(void *p);
extern uint32_t data_020b8e44;

uint32_t func_020360fc(void *p) {
    uint32_t idx = func_020360d8(p);
    if (!idx) {
        return 0;
    }
    uint8_t *base = func_02017dd8(data_020b8e44, (uint8_t)*(uint32_t *)((uint8_t *)p + 0x58));
    uint8_t *q = base;
    q += *(uint32_t *)(base + 8);
    uint16_t v = *(uint16_t *)(q + (idx << 1) - 2);
    return v - func_020361f0(p);
}
