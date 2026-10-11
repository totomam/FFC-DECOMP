#include "ffc/types.h"

extern int32_t func_ov000_021552ac(void *p);

int32_t func_02071e28(uint8_t *p)
{
    if (func_ov000_021552ac(p + 8)) {
        return 1;
    }
    return 0;
}
