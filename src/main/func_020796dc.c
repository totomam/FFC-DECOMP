#include "ffc/types.h"

uint16_t func_020796dc(uint16_t **pp)
{
    uint16_t *p = *pp;
    uint16_t v = *p;
    *pp = p + 1;
    return v;
}
