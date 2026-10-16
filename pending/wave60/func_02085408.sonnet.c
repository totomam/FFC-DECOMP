/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_02085408(uint32_t v, volatile uint32_t *p)
{
    uint32_t old = *p;
    *p = v;
    return old;
}
