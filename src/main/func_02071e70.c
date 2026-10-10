#include "ffc/types.h"

extern int32_t func_ov000_02154fec(void *p);

int32_t func_02071e70(uint8_t *p)
{
    if (func_ov000_02154fec(p + 8)) {
        return 1;
    }
    return 0;
}
