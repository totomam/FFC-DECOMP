#include "ffc/types.h"

uint32_t func_ov000_021518c8(uint8_t *p) {
    int i;
    for (i = 0; i < 10; i++) {
        uint8_t c = p[i];
        if (c < 0x20 || c > 0x7e) {
            return 0;
        }
    }
    return 1;
}
