#include "ffc/types.h"

void func_ov009_021ad990(uint8_t *p)
{
    uint8_t a = p[0x27d];
    uint8_t b = p[0x27e];
    if (a >= b) {
        p[0x27d] = 0;
    } else {
        p[0x27d] = a + 1;
    }
    if (p[0x27b] == 0) {
        p[0x28c] = p[0x27d];
    } else if (p[0x27b] == 1) {
        p[0x28d] = p[0x27d];
    }
}
