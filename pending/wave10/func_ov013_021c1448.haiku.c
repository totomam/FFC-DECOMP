#include "ffc/types.h"

extern uint32_t data_ov013_021c4b44[2];

void func_ov013_021c1448(uint8_t *p) {
    if (*(uint32_t *)(p + 0xcc) == 0) {
        uint32_t *q = *(uint32_t **)(p + 0xc4);
        *q = 1;
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    } else {
        uint32_t *d = data_ov013_021c4b44;
        uint32_t a = d[0];
        uint32_t b = d[1];
        *(uint32_t *)(p + 0xb8) = a;
        *(uint32_t *)(p + 0xbc) = b;
    }
}
