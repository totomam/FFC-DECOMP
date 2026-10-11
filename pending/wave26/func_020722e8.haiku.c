#include "ffc/types.h"

extern void func_02071ee8(void *p, uint32_t x);
extern void func_02071f74(void *p, uint32_t a, uint32_t b);
extern uint32_t func_02072240(uint32_t a, uint32_t b, void *c, uint32_t d);
extern void func_02071f0c(void *p);

uint32_t func_020722e8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint8_t buf[16];
    uint32_t r;

    func_02071ee8(buf, b);
    func_02071f74(buf, c, d);
    r = func_02072240(a, b, buf, e);
    func_02071f0c(buf);
    return r;
}
