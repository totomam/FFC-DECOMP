#include "ffc/types.h"

extern uint32_t func_ov000_0214e984(void);

uint32_t func_ov000_0214ef60(void)
{
    uint32_t x = func_ov000_0214e984();
    uint32_t b3 = (x >> 24) << 24;
    uint32_t b0 = x << 24;
    return (b3 >> 24) | ((x >> 8) & 0xff00) | ((x << 8) & 0xff0000) | (b0 & 0xff000000);
}
