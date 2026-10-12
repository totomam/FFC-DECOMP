#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(uint32_t arg);
extern uint32_t func_ov000_0214fa18(void);

int func_ov000_021544e8(void) {
    uint8_t *p = func_ov000_02152ae4(0x10);
    uint16_t flags = *(uint16_t *)(p + 0x14c6);
    int16_t count;
    uint8_t i = 0;
    uint8_t k = 0;

    if (flags == 0) {
        return -1;
    }
    count = *(int16_t *)(p + 0x14ce);
    if (count <= 0) {
        return -1;
    }
    do {
        uint32_t bit = 1u << i;
        if (flags & bit) {
            if (k == p[0x14c5]) {
                if (func_ov000_0214fa18() & (uint16_t)bit) {
                    return (int8_t)i;
                }
                p[0x14c5]++;
            }
            k++;
        }
        i++;
    } while (i < count);
    return -1;
}
