#include "ffc/types.h"
void func_02022884(uint8_t *s) {
    uint8_t v;
    if (*(uint8_t*)(s+0x18) != 0) v = 1; else v = 0;
    *(uint8_t*)(*(uint32_t*)(s+0x14) + 0x164) = v;
    *(uint32_t*)(s+0xc) = (*(uint32_t*)(s+0xc) & ~0xffu) | 2;
}
