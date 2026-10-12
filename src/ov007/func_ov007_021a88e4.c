#include "ffc/types.h"

void func_ov007_021a88e4(uint8_t *a, uint32_t *b) {
    uint32_t off;
    switch (b[3]) {
    case 0x100a8:
        off = 0x150;
        *(uint32_t *)(a + off) = b[4];
        *(uint32_t *)(a + off + 4) = b[5];
        *(uint32_t *)(a + off + 8) = b[6];
        *(uint32_t *)(a + off + 0xc) = b[7];
        *(uint32_t *)(a + off + 0x10) = b[8];
        *(uint32_t *)(a + off + 0x14) = b[9];
        break;
    case 0x100aa: {
        uint8_t *p = a + b[4];
        p[0x13c] = 1;
        break;
    }
    }
}
