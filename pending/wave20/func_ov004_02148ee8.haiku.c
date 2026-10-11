#include "ffc/types.h"

extern void func_02058564(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_ov004_02148ee8(uint8_t *p, uint32_t idx) {
    uint8_t *q = p + (idx << 2);
    uint32_t v1 = *(uint32_t *)(q + 0x1d0);
    uint32_t v0 = *(uint32_t *)(p + 0x1e4);
    uint32_t v2 = *(uint32_t *)(p + 0x1dc);
    uint32_t v3 = *(uint32_t *)(p + 0x1e0);
    func_02058564(v0, v1, v2, v3, 0);
}
