#include "ffc/types.h"

extern void func_02071ee8(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_02071f74(void *p, uint32_t a, uint32_t b);
extern uint32_t func_02072148(uint32_t a, void *p, uint32_t c);
extern void func_02071f0c(void *p);

uint32_t func_020721f0(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t buf[4];
    uint32_t r;

    func_02071ee8(buf, b, c, d);
    func_02071f74(buf, b, c);
    r = func_02072148(a, buf, d);
    func_02071f0c(buf);
    return r;
}
