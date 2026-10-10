#include "ffc/types.h"

extern void func_ov002_02199274(uint32_t a, uint32_t b);

void func_ov002_0219b000(uint32_t *p) {
    func_ov002_02199274(p[5], p[6]);
    p[3] = (p[3] & ~0xffu) | 2;
}
