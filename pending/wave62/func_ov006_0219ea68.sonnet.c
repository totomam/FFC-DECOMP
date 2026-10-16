#include "ffc/types.h"
extern uint16_t func_ov006_0219f038(uint16_t v);
extern void func_ov006_0219ef5c(void *p, uint32_t x, uint32_t n);
void func_ov006_0219ea68(uint16_t *p, uint32_t a, uint32_t b, uint32_t c, int8_t s1, int8_t s2, uint32_t x)
{
    p[0] = func_ov006_0219f038(1);
    p[1] = 0;
    p[2] = 0;
    p[3] = func_ov006_0219f038(a);
    p[4] = 0;
    p[5] = func_ov006_0219f038(b);
    p[6] = func_ov006_0219f038(c);
    ((int8_t *)p)[14] = s1;
    ((int8_t *)p)[15] = s2;
    func_ov006_0219ef5c(p + 8, x, 8);
}
