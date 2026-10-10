#include "ffc/types.h"

extern void func_020744d4(uint32_t a, uint32_t b);

void func_02073e04(uint32_t *p) {
    func_020744d4(*(uint32_t *)((uint8_t *)p + 0x80), *(uint32_t *)((uint8_t *)p + 0x8c));
    p[3] = (p[3] & ~0xffU) | 2;
}
