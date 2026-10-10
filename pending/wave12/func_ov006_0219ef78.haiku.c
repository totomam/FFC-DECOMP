#include "ffc/types.h"

extern int32_t func_ov000_0214ed98(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t *p);

int32_t func_ov006_0219ef78(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t *p5, uint32_t *p6)
{
    *p5 = (uint8_t)*p6;
    return func_ov000_0214ed98(a, b, c, d, p5);
}
