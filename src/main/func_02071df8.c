#include "ffc/types.h"

extern int32_t func_ov000_02155270(void *p);

int32_t func_02071df8(uint8_t *p)
{
    if (func_ov000_02155270(p + 8)) {
        return 1;
    }
    return 0;
}
