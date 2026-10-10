#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02010574(uint8_t *a, uint8_t *b) {
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x10, b + 4, 0x18);
    func_02084ca4(a + 0x28, b + 0x1c, 1);
    func_02084ca4(a + 0x29, b + 0x1d, 1);
    func_02084ca4(a + 0x2c, b + 0x1e, 4);
}
