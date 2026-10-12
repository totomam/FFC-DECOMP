#include "ffc/types.h"

extern void *func_ov001_0217f324(void *a, void *b);
extern uint32_t *func_ov001_0217f30c(void);
extern uint32_t func_ov001_0217f27c(uint32_t x);
extern uint32_t func_ov001_0217f2c4(void *obj, uint32_t v);
extern uint32_t func_ov001_0217f28c(void);
extern uint32_t func_02099a74(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

uint32_t func_ov001_0217f0e8(void *a, void *b, uint32_t *p)
{
    uint32_t *obj = func_ov001_0217f324(a, b);
    if (obj == 0) {
        return 0;
    }
    if (obj[1] == 0) {
        uint32_t *q = func_ov001_0217f30c();
        return func_ov001_0217f2c4(obj, func_ov001_0217f27c(p[0] * q[0]));
    } else if (obj[1] == 1) {
        uint32_t *q = func_ov001_0217f30c();
        uint32_t r = func_02099a74(p[0], p[1], q[0], q[1]);
        return func_ov001_0217f2c4(obj, func_ov001_0217f28c());
    }
    return (uint32_t)func_ov001_0217f30c();
}
