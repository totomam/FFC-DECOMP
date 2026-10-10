#include "ffc/types.h"

extern void func_ov002_0219c874(uint32_t a, uint32_t b);

void func_ov002_0219c8ac(uint32_t *p) {
    func_ov002_0219c874(*(uint32_t *)((uint8_t *)p + 0x80), *(uint32_t *)((uint8_t *)p + 0x84));
    p[3] = (p[3] & ~0xffU) | 2;
}
