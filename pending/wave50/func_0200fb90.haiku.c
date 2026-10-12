#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_0200fb90(uint8_t *a, uint8_t *b) {
    func_02084ca4(b, a + 0xc, 4);
    *(uint32_t *)(a + 0x10) = 0;
    func_02084ca4(b + 8, a + 0x14, 4);
    func_02084ca4(b + 0xc, a + 0x18, 4);
    func_02084ca4(b + 0x10, a + 0x1c, 0xc8);
    func_02084ca4(b + 0xd8, a + 0xe4, 4);
    func_02084ca4(b + 0xdc, a + 0xe8, 4);
}
