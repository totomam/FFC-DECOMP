#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02055d38(uint8_t *a, uint8_t *b) {
    func_02084ca4(b, a + 0xc, 4);
    func_02084ca4(b + 4, a + 0x10, 1);
    func_02084ca4(b + 5, a + 0x11, 1);
    func_02084ca4(b + 6, a + 0x12, 1);
    func_02084ca4(b + 7, a + 0x14, 4);
}
