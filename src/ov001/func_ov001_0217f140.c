#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t *func_ov001_0217f324(uint32_t a, uint32_t b);
extern uint32_t *func_ov001_0217f30c(uint32_t *o, uint32_t state);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_ov001_0217f27c(void);
extern uint32_t func_ov001_0217f2c4(uint32_t *o, uint32_t v);
extern uint32_t func_0209b98c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov001_0217f28c(void);

uint32_t func_ov001_0217f140(uint32_t a, uint32_t b, uint32_t *c)
{
    uint32_t *o = func_ov001_0217f324(a, b);
    if (o == 0) {
        return 0;
    }
    uint32_t s = o[1];
    if (s == 0) {
        uint32_t *p = func_ov001_0217f30c(o, s);
        func_0209a76c(p[0], c[0]);
        return func_ov001_0217f2c4(o, func_ov001_0217f27c());
    }
    if (s == 1) {
        volatile uint32_t *p = (volatile uint32_t *)func_ov001_0217f30c(o, s);
        uint32_t x = p[0];
        uint32_t y = p[1];
        func_0209b98c(x, y, c[0], c[1]);
        return func_ov001_0217f2c4(o, func_ov001_0217f28c());
    }
    return (uint32_t)func_ov001_0217f30c(o, s);
}
