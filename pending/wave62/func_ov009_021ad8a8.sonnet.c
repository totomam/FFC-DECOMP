#include "ffc/types.h"
extern void func_02196144(uint32_t a, uint32_t b);
void func_ov009_021ad8a8(uint8_t *p) {
    uint8_t m = p[0x27b];
    if (m == 0) {
        uint8_t t = p[0x28a];
        if (p[0x28c] > t) p[0x28c] = t;
        p[0x27d] = p[0x28c];
    } else if (m == 1) {
        uint8_t t = p[0x28b];
        if (p[0x28d] > t) p[0x28d] = t;
        p[0x27d] = p[0x28d];
    }
    func_02196144(*(uint32_t*)(p + 0x16c), (uint8_t)(p[0x27d] + 1));
}
