#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(uint32_t);
extern uint32_t func_ov000_0214fa18();

int8_t func_ov000_02154424(uint32_t a) {
    uint8_t *p = func_ov000_02152ae4(0x10);
    uint32_t off = 0x14ce;
    int i;
    uint32_t m;
    int hit;

    if (a == 0) {
        i = 0;
        m = 1;
    } else {
        i = 1;
        m = 2;
    }
    while (i <= *(uint16_t *)(p + off)) {
        hit = (func_ov000_0214fa18() & m) != 0;
        if (hit == 1) {
            break;
        }
        m = (m << 2) & 0xFFFF;
        i += 2;
    }
    if (i > *(uint16_t *)(p + off)) {
        return (int8_t)(a != 0 ? 1 : 0);
    }
    return (int8_t)i;
}
