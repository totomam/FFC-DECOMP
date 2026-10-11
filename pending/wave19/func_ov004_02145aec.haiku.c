#include "ffc/types.h"

extern void func_ov004_0214f764(uint32_t a, uint32_t b);

void func_ov004_02145aec(uint8_t *p) {
    if (*(uint8_t *)(p + 0xa4)) {
        func_ov004_0214f764(*(uint32_t *)(p + 0x8c), 0);
    }
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
