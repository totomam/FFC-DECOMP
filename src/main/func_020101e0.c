#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t size);

void func_020101e0(uint8_t *p, uint8_t *q) {
    func_02084ca4(p + 0xc, q, 4);
    func_02084ca4(p + 0x10, q + 4, 4 << 8);
}
