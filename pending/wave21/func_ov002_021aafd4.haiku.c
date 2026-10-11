#include "ffc/types.h"

extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);

uint32_t func_ov002_021aafd4(uint8_t *p) {
    if (p[0x250]) {
        return 0;
    }
    if (func_ov002_021aa11c(p + 0x190, 3) == 0) {
        return 1;
    }
    return 0;
}
