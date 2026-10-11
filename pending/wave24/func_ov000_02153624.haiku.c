#include "ffc/types.h"

extern void *func_ov000_02152ae4(uint32_t);

uint8_t func_ov000_02153624(void) {
    uint8_t *base = (uint8_t *)func_ov000_02152ae4(0x10);
    uint8_t i = 0;
    do {
        if (base[i * 0x24 + 0x903] == 0) {
            break;
        }
        i = (uint8_t)(i + 1);
    } while (i < 0x15);
    return i;
}
