#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_02012444(uint8_t *s, uint8_t *d) {
    func_02084ca4(d, s + 0xc, 4);
    *(uint32_t *)(s + 0x10) = 0;
    func_02084ca4(d + 8, s + 0x14, 0x5c);
    func_02084ca4(d + 0x64, s + 0x70, 4);
    func_02084ca4(d + 0x68, s + 0x74, 0xc);
}
