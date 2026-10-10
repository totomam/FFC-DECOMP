#include "ffc/types.h"

extern int32_t func_0200764c(uint8_t *p);

int32_t func_02006630(uint8_t *p)
{
    if (*p != 0) {
        return func_0200764c(p + 0x2bb8);
    }
    return 0;
}
