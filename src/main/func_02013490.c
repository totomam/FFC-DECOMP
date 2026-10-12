#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02013490(uint8_t *a, uint8_t *b) {
    func_02084ca4(b, a + 0xc, 4);
    func_02084ca4(b + 4, a + 0x10, 4);
    func_02084ca4(b + 8, a + 0x14, 4);
    func_02084ca4(b + 0xc, a + 0x18, 0x18);
    func_02084ca4(b + 0x24, a + 0x30, 4);
    func_02084ca4(b + 0x28, a + 0x34, 4);
    func_02084ca4(b + 0x2c, a + 0x38, 1);
    func_02084ca4(b + 0x2d, a + 0x39, 1);
    func_02084ca4(b + 0x2e, a + 0x3c, 4);
}
