#include "ffc/types.h"

extern uint32_t data_ov013_021c3f08;

void func_ov013_021bcee4(uint8_t *p) {
    if (*(uint32_t *)(p + 0x8c) == 0) {
        uint32_t v = *(uint32_t *)(p + 0xc);
        v &= ~0xffu;
        v |= 2;
        *(uint32_t *)(p + 0xc) = v;
    } else {
        uint32_t *d = &data_ov013_021c3f08;
        uint32_t a = d[0];
        uint32_t b = d[1];
        *(uint32_t *)(p + 0x80) = a;
        *(uint32_t *)(p + 0x84) = b;
    }
}
