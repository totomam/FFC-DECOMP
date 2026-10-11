#include "ffc/types.h"

extern void func_0200795c(uint8_t *p, uint32_t a);

void func_0200798c(uint8_t *p)
{
    if (p[0x10] != 0) {
        if (p[0x11] == 0) {
            func_0200795c(p, 0);
            p[0x11] = 1;
        }
    }
}
