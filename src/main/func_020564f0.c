#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_020564f0(uint8_t *a, uint8_t *b) {
    func_02084ca4(b, a + 0xc, 4);
    func_02084ca4(b + 4, a + 0x10, 4);
    func_02084ca4(b + 8, a + 0x14, 0x70);
    func_02084ca4(b + 0x78, a + 0x84, 6);
}
