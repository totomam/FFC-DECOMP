#include "ffc/types.h"

extern void func_0207c914(uint8_t *p, uint32_t v);

void func_02079a9c(uint8_t **pp, uint32_t r1) {
    if (*pp == 0) {
        return;
    }
    if ((*pp)[0x2c] == 2) {
        return;
    }
    func_0207c914(*pp + 0x1c, r1 << 8);
}
