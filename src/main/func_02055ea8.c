#include "ffc/types.h"

extern void func_02084ca4(void *dst, const void *src, uint32_t n);

void func_02055ea8(uint8_t *p, uint8_t *s) {
    func_02084ca4(p + 0xc, s, 4);
    func_02084ca4(p + 0x10, s + 4, 4);
    func_02084ca4(p + 0x14, s + 8, 0x4C0);
    func_02084ca4(p + 0x4D4, s + 0x4C8, 6);
}
