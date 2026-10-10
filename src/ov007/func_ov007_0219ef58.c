#include "ffc/types.h"

extern void func_ov007_0219ebe4(uint32_t a, uint8_t b);

void func_ov007_0219ef58(uint8_t *p) {
    func_ov007_0219ebe4(*(uint32_t *)(p + 0x14), p[0x13]);
    *(uint32_t *)(p + 0x0c) = (*(uint32_t *)(p + 0x0c) & ~0xffu) | 2;
}
