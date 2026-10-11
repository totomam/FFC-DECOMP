#include "ffc/types.h"

void func_02022884(void *s) {
    uint8_t *b = (uint8_t *)s;
    uint8_t *q = *(uint8_t **)(b + 0x14);
    if (b[0x18]) {
        q[0x164] = 1;
    } else {
        q[0x164] = 0;
    }
    *(uint32_t *)(b + 0xc) = (*(uint32_t *)(b + 0xc) & ~0xffu) | 2;
}
