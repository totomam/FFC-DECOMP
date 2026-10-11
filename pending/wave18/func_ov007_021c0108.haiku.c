#include "ffc/types.h"

extern void func_02092878();

void func_ov007_021c0108(uint8_t *p, uint32_t a, uint32_t b, uint32_t c) {
    func_02092878(p + 4, a, b, c);
    func_02092878(p + 0x18, c);
    *(uint32_t *)(p + 0x14) = b;
    *(uint32_t *)p = 1;
}
