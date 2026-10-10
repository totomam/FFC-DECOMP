#include "ffc/types.h"

void func_0206ebd0(uint8_t *p) {
    if (p[0x88] != 0) {
        uint32_t v = *(uint32_t *)(p + 0xc);
        v &= ~0xffu;
        *(uint32_t *)(p + 0xc) = v | 2;
    }
}
