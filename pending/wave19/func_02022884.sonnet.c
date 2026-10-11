#include "ffc/types.h"
void func_02022884(int8_t *b) {
    int v;
    if (b[0x18] != 0) v = 1; else v = 0;
    *(uint8_t *)(*(uint32_t *)(b + 0x14) + 0x164) = v;
    *(uint32_t *)(b + 0xc) = (*(uint32_t *)(b + 0xc) & ~0xffu) | 2;
}
