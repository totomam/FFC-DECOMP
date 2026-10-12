#include "ffc/types.h"

extern int func_ov007_0219c5d4(uint32_t arg);

void func_ov007_0219e41c(uint8_t *p) {
    uint32_t c;
    uint32_t *q;
    uint32_t v;

    if (func_ov007_0219c5d4(*(uint32_t *)(p + 0xd8)) != 0) {
        return;
    }
    c = *(uint32_t *)(p + 0xd0);
    *(uint32_t *)(p + 0xd0) = *(uint32_t *)(p + 0xd0) + 1;
    if (c < 0x4b0) {
        return;
    }
    q = *(uint32_t **)(p + 0xbc);
    if (*q & 1) {
        v = 0xe;
    } else {
        v = 0xd;
    }
    **(uint32_t **)(p + 0xb8) = v;
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
