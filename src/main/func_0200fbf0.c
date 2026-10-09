#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_0200fbf0(uint8_t *a, uint8_t *b) {
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x14, b + 8, 4);
    func_02084ca4(a + 0x18, b + 0xc, 4);
    func_02084ca4(a + 0x1c, b + 0x10, 0xc8);
    func_02084ca4(a + 0xe4, b + 0xd8, 4);
    func_02084ca4(a + 0xe8, b + 0xdc, 4);
}
