#include "ffc/types.h"

void func_ov009_021ad840(uint8_t *p) {
    uint8_t m = p[0x27b];
    if (m == 0) {
        p[0x280] = p[0x288];
    } else if (m == 1) {
        p[0x280] = p[0x289];
    }
}
