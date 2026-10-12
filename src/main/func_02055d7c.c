#include "ffc/types.h"

extern void *func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02055d7c(uint8_t *a, uint8_t *b) {
    func_02084ca4(a + 0xc, b, 4);
    func_02084ca4(a + 0x10, b + 4, 1);
    func_02084ca4(a + 0x11, b + 5, 1);
    func_02084ca4(a + 0x12, b + 6, 1);
    func_02084ca4(a + 0x14, b + 7, 4);
}
