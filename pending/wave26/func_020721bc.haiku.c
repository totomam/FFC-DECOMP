#include "ffc/types.h"

extern void func_02071ee8(uint32_t *buf, uint32_t a, uint32_t b);
extern void func_02071f64(uint32_t *buf, uint32_t a);
extern uint32_t func_02072148(uint32_t a, uint32_t *buf, uint32_t b);
extern void func_02071f0c(uint32_t *buf);

uint32_t func_020721bc(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t buf[4];
    uint32_t r;

    func_02071ee8(buf, b, c);
    func_02071f64(buf, b);
    r = func_02072148(a, buf, c);
    func_02071f0c(buf);
    return r;
}
