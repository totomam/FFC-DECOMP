#include "ffc/types.h"

extern uint32_t func_0200674c(void *p);

uint32_t func_020067f4(void *p)
{
    if (((uint8_t *)p)[3] != 0) {
        return func_0200674c(p);
    }
    return 0;
}
