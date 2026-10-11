#include "ffc/types.h"

extern void func_021961ad(uint32_t a, uint8_t b);

void func_ov009_021ad868(uint8_t *p)
{
    uint8_t x = p[0x27b];
    if (x == 0) {
        p[0x27e] = p[0x28a];
    } else if (x == 1) {
        p[0x27e] = p[0x28b];
    }
    func_021961ad(*(uint32_t *)(p + 0x16c), (uint8_t)(p[0x27e] + 1));
}
