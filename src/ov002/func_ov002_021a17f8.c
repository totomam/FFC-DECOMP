#include "ffc/types.h"

extern void func_ov002_021a1788(uint32_t a, uint32_t b);

void func_ov002_021a17f8(uint32_t *p) {
    func_ov002_021a1788(p[5], p[6]);
    p[3] = (p[3] & ~0xffu) | 2;
}
