#include "ffc/types.h"

extern int32_t func_ov000_021552f4(void *p);

int32_t func_02071e3c(uint8_t *p)
{
    if (func_ov000_021552f4(p + 8)) {
        return 1;
    }
    return 0;
}
