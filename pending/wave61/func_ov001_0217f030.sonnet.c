#include "ffc/types.h"
extern uint32_t *func_ov001_0217f324(uint32_t a);
extern uint32_t *func_ov001_0217f30c(void);
extern uint32_t func_ov001_0217f27c(uint32_t a);
extern uint32_t func_ov001_0217f2c4(uint32_t *o, uint32_t v);
extern uint32_t func_02099390(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov001_0217f28c(uint32_t a);
extern uint32_t func_ov001_0217f19c(uint32_t a, uint32_t b, uint32_t *c);
uint32_t func_ov001_0217f030(uint32_t a, uint32_t b, uint32_t *c)
{
    uint32_t *o = func_ov001_0217f324(a);
    uint32_t t;
    if (o == 0) return 0;
    t = o[1];
    if (t == 0) {
        return func_ov001_0217f2c4(o, func_ov001_0217f27c(c[0] + func_ov001_0217f30c()[0]));
    }
    if (t == 1) {
        uint32_t *p = func_ov001_0217f30c();
        uint32_t r = func_02099390(c[0], c[1], p[0], p[1]);
        return func_ov001_0217f2c4(o, func_ov001_0217f28c(r));
    }
    return func_ov001_0217f19c(a, b, c);
}
