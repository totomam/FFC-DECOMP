#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_020119b4(uint8_t *s, uint8_t *d) {
    func_02084ca4(d, s + 0xc, 4);
    *(uint32_t *)(s + 0x10) = 0;
    func_02084ca4(d + 8, s + 0x14, 4);
    func_02084ca4(d + 0xc, s + 0x18, 1);
    func_02084ca4(d + 0xd, s + 0x19, 1);
}
