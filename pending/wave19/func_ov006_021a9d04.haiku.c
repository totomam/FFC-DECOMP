#include "ffc/types.h"

extern uint8_t data_ov006_021bc778;
extern uint8_t data_ov006_021b859c[];
extern uint8_t data_ov006_021b85a0[];
extern uint8_t data_ov006_021b859e[];
extern void func_ov006_021a3cfc(uint32_t mode, uint32_t a, uint32_t b, uint32_t c);

void func_ov006_021a9d04(void) {
    uint32_t idx = data_ov006_021bc778;
    uint32_t mode = 2;
    uint32_t off;
    if (idx >= 4) {
        mode = 3;
    }
    off = idx << 3;
    func_ov006_021a3cfc(mode, *(uint16_t *)(data_ov006_021b859c + off), *(uint16_t *)(data_ov006_021b85a0 + off), *(uint16_t *)(data_ov006_021b859e + off));
}
