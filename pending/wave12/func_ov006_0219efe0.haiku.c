#include "ffc/types.h"

extern void func_ov000_0214ee04(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t *p);

void func_ov006_0219efe0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t *p, uint32_t v)
{
    *p = v;
    func_ov000_0214ee04(a, b, c, d, p);
}
