#include "ffc/types.h"

extern void func_ov003_0215f0d4(uint8_t *p);

void func_ov003_0215f094(uint8_t *p, uint32_t *q) {
    uint32_t o = 0x13 << 4;
    uint32_t v;
    v = q[0];
    *(uint32_t *)(p + o) = v;
    *(uint32_t *)(p + (o - 12)) = v;
    v = q[1];
    *(uint32_t *)(p + (o + 4)) = v;
    *(uint32_t *)(p + (o - 8)) = v;
    v = q[2];
    *(uint32_t *)(p + (o + 8)) = v;
    *(uint32_t *)(p + (o - 4)) = v;
    *(uint32_t *)(p + (o + 0x14)) = 0;
    *(uint32_t *)(p + (o + 0x10)) = 0;
    *(uint32_t *)(p + (o + 0xc)) = 0;
    func_ov003_0215f0d4(p);
}
