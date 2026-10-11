#include "ffc/types.h"

void func_ov007_021a777c(uint8_t *s) {
    uint32_t st = *(uint32_t *)(s + 0x84);
    int32_t v;

    switch (st) {
    case 0:
        v = 0;
        break;
    case 1:
        v = 1;
        break;
    case 2:
        v = 2;
        break;
    default:
        goto flags;
    }
    **(int32_t ***)&s[0x80] = v;
flags:
    *(uint32_t *)(s + 0xc) = (*(uint32_t *)(s + 0xc) & ~0xffu) | 2u;
}
