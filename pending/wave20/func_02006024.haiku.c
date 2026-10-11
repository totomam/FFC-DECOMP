#include "ffc/types.h"

void func_02006024(uint8_t *p, uint32_t a, uint32_t b, int32_t n) {
    *(uint32_t *)(p + 4) = a;
    *(uint32_t *)(p + 8) = b;
    *(uint32_t *)(p + 0x14) = 0;
    p[1] = 0;
    if (n <= 0) {
        *(uint32_t *)(p + 0xc) = b;
        p[0] = 1;
        *(uint32_t *)(p + 0x10) = 0;
        return;
    }
    *(uint32_t *)(p + 0xc) = a;
    *(uint32_t *)(p + 0x10) = n;
    p[0] = 0;
}
