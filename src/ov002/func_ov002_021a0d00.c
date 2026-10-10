#include "ffc/types.h"

extern void func_ov002_021aa870(uint32_t a, uint32_t b);

void func_ov002_021a0d00(uint32_t *p) {
    func_ov002_021aa870(p[5], p[6]);
    p[3] = (p[3] & ~0xffu) | 2;
}
