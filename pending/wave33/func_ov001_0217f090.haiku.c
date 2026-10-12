#include "ffc/types.h"

extern void *func_ov001_0217f324(void *a, void *b);
extern uint32_t *func_ov001_0217f30c(void);
extern uint32_t func_ov001_0217f27c(uint32_t v);
extern void *func_ov001_0217f2c4(void *p, uint32_t v);
extern void func_020996c0(uint64_t a, uint64_t b);
extern uint32_t func_ov001_0217f28c(void);

void *func_ov001_0217f090(void *a, void *b, uint64_t *c)
{
    uint32_t *p = func_ov001_0217f324(a, b);
    if (p == 0) {
        return 0;
    }
    if (p[1] == 0) {
        uint32_t *q = func_ov001_0217f30c();
        uint32_t d = q[0] - ((uint32_t *)c)[0];
        return func_ov001_0217f2c4(p, func_ov001_0217f27c(d));
    }
    if (p[1] == 1) {
        uint64_t *q = (uint64_t *)func_ov001_0217f30c();
        func_020996c0(*q, *c);
        return func_ov001_0217f2c4(p, func_ov001_0217f28c());
    }
    return func_ov001_0217f30c();
}
