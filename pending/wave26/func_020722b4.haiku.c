#include "ffc/types.h"

extern void func_02071ee8(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_02071f64(void *p, uint32_t b);
extern uint32_t func_02072240(uint32_t a, uint32_t b, void *p, uint32_t c);
extern void func_02071f0c(void *p);

uint32_t func_020722b4(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    uint32_t buf[4];
    uint32_t r;

    func_02071ee8(buf, a1, a2, a3);
    func_02071f64(buf, a2);
    r = func_02072240(a0, a1, buf, a3);
    func_02071f0c(buf);
    return r;
}
