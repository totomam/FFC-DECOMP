#include "ffc/types.h"

extern int32_t func_020073e4(uint8_t *p);

int32_t func_0200664c(uint8_t *p)
{
    int32_t off = 0xb7 << 6;
    if (*p != 0) {
        return func_020073e4(p + off);
    }
    return 0;
}
