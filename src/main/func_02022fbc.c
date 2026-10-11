#include "ffc/types.h"

void func_02022fbc(uint32_t *p, uint32_t a, uint32_t b) {
    p[0x5b] = b + 0xbf;
    p[0x5c] = b;
    p[0x5d] = a;
    p[0x5e] = a + 0xff;
}
