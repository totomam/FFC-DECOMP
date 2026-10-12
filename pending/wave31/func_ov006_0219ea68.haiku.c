#include "ffc/types.h"

extern uint16_t func_ov006_0219f038(uint16_t v);
extern void func_ov006_0219ef5c(void *p, uint32_t v, uint32_t n);

void func_ov006_0219ea68(void *out, uint32_t a, uint32_t b, uint32_t c, int8_t d, int8_t e, uint32_t f)
{
    uint16_t *p = (uint16_t *)out;
    p[0] = func_ov006_0219f038(1);
    p[1] = 0;
    p[2] = 0;
    p[3] = func_ov006_0219f038((uint16_t)a);
    p[4] = 0;
    p[5] = func_ov006_0219f038((uint16_t)b);
    p[6] = func_ov006_0219f038((uint16_t)c);
    ((int8_t *)out)[0xe] = d;
    ((int8_t *)out)[0xf] = e;
    func_ov006_0219ef5c((uint8_t *)out + 0x10, f, 8);
}
