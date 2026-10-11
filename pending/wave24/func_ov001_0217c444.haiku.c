#include "ffc/types.h"

extern uint32_t *func_ov001_0217c148(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov000_0214f148(uint32_t a);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint32_t data_ov001_021910dc;

uint32_t func_ov001_0217c444(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t *p = func_ov001_0217c148(d, a, b);
    uint32_t r = (uint32_t)p;
    if (p) {
        uint32_t s = func_ov000_0214f148(a);
        func_ov000_021652a8(1, 0, 8, (uint32_t)&data_ov001_021910dc, s, b, p[4]);
        r = 0x6a;
        p[0] = r;
    }
    return r;
}
