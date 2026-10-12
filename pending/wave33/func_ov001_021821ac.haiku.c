#include "ffc/types.h"

extern uint32_t func_ov000_0214f148(void);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t data_ov001_02195074;
extern uint8_t data_ov001_02195078[];
extern uint8_t data_ov001_02191a28[];
extern uint8_t data_ov001_02191a30[];
extern uint8_t data_ov001_02191a34[];

uint8_t *func_ov001_021821ac(uint32_t a, uint32_t b, uint8_t *c, uint32_t d) {
    uint8_t *p = c;
    if (c == 0) {
        uint32_t v = data_ov001_02195074 ^ 1;
        data_ov001_02195074 = v;
        p = data_ov001_02195078 + 0x16 * v;
    }
    if (a != 0) {
        if (b != 0) {
            func_02086ad4(p, (uint32_t)data_ov001_02191a28, func_ov000_0214f148(), b);
        } else {
            func_02086ad4(p, (uint32_t)data_ov001_02191a30, func_ov000_0214f148());
        }
    } else if (b != 0) {
        func_02086ad4(p, (uint32_t)data_ov001_02191a34, b);
    } else {
        *p = 0;
    }
    return p;
}
