#include "ffc/types.h"

uint32_t func_02090310(uint8_t *p, uint8_t v)
{
    if (p == 0) {
        return 0;
    }
    *p = v;
    return 1;
}
