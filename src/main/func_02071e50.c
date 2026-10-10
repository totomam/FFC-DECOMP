#include "ffc/types.h"

extern int32_t func_ov000_02155354(void *p);

int32_t func_02071e50(uint8_t *p)
{
    if (func_ov000_02155354(p + 8)) {
        return 1;
    }
    return 0;
}
