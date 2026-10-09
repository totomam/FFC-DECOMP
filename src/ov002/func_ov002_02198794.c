#include "ffc/types.h"

extern void func_ov002_021986e8(uint32_t a, uint32_t b);

void func_ov002_02198794(uint32_t *p) {
    func_ov002_021986e8(p[6], p[5]);
    p[3] = (p[3] & ~0xffu) | 2;
}
