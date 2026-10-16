#include "ffc/types.h"
extern void func_021961ad(uint32_t a, uint32_t b);

void func_ov009_021ad868(uint8_t *p)
{
    uint8_t t = p[0x27b];
    if (t == 0) {
        p[0x27e] = p[0x28a];
    } else if (t == 1) {
        p[0x27e] = p[0x28b];
    }
    func_021961ad(*(uint32_t *)(p + 0x16c), (uint8_t)(p[0x27e] + 1));
}
