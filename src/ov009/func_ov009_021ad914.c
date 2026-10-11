#include "ffc/types.h"

uint16_t func_ov009_021ad914(uint8_t *p) {
    uint32_t i = 0x27d;
    uint8_t a = p[i];
    if (a == p[i + 1]) {
        if (p[i - 2] == 0) {
            uint32_t v = *(uint32_t *)(p + i - 0xf5);
            return (uint16_t)(v - 10 * a);
        }
        if (p[i - 2] == 1) {
            uint32_t v = *(uint32_t *)(p + i - 0xad);
            return (uint16_t)(v - 10 * a);
        }
    }
    return 10;
}
