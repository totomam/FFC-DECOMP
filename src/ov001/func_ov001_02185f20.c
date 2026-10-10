#include "ffc/types.h"

uint32_t func_ov001_02185f20(void *p)
{
    uint16_t v = *(uint16_t *)((uint8_t *)p + 4);
    uint32_t ret = (uint8_t)((int32_t)v >> 8);
    ret |= ((uint32_t)v << 8) & 0xff00;
    return (uint16_t)ret;
}
