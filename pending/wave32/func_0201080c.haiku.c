#include "ffc/types.h"

extern void *func_02084ca4(void *dst, const void *src, uint32_t n);

void func_0201080c(uint8_t *a, uint8_t *b) {
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x10, b + 4, 4);
    func_02084ca4(a + 0x14, b + 8, 0x98);
    func_02084ca4(a + 0xac, b + 0xa0, 0x58);
    func_02084ca4(a + 0x104, b + 0xf8, 0x1e0);
}
