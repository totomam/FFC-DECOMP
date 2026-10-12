#include "ffc/types.h"

extern int func_0207ea0c(void *p);

uint8_t func_02052208(uint8_t *p)
{
    if (p[0x55] == 0) {
        return p[0x54];
    }
    p[0x54] = (func_0207ea0c(p + 4) != 0);
    if (p[0x54] != 0) {
        p[0x55] = 0;
    }
    return p[0x54];
}
