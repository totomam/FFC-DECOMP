#include "ffc/types.h"

void func_ov009_021ad954(uint8_t *p) {
    int i = 0x27d;
    int v;
    if (p[i] != 0) {
        v = p[i] - 1;
    } else {
        v = p[i + 1];
    }
    p[i] = v;
    i = 0x27b;
    if (p[i] == 0) {
        p[i + 0x11] = p[i + 2];
    } else if (p[i] == 1) {
        p[i + 0x12] = p[i + 2];
    }
}
