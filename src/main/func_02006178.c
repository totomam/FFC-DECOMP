#include "ffc/types.h"

extern void func_020796e8(void *p);

void func_02006178(void *p) {
    uint8_t *b = (uint8_t *)p;
    uint32_t *w = (uint32_t *)p;
    b[0] = 0;
    b[1] = 0;
    *(uint32_t *)(b + 0x28b4) = 0;
    w[1] = 0x7f;
    w[2] = 0x7f;
    w[3] = 0x7f;
    b[2] = 0;
    b[3] = 0;
    func_020796e8(p);
}
