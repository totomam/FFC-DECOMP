#include "ffc/types.h"

void func_ov009_021ad954(uint8_t *p) {
    if (p[0x27d] == 0) {
        p[0x27d] = p[0x27e];
    } else {
        p[0x27d]--;
    }
    if (p[0x27b] == 0) {
        p[0x28c] = p[0x27d];
    } else if (p[0x27b] == 1) {
        p[0x28d] = p[0x27d];
    }
}
