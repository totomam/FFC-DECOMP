#include "ffc/types.h"

extern uint32_t *func_ov001_0217f324(void *a, uint32_t b, void *c);
extern void *func_ov001_0217f30c(void);
extern uint32_t func_ov001_0217f27c(uint32_t v);
extern uint32_t func_ov001_0217f2c4(uint32_t *obj, uint32_t v);
extern uint32_t func_ov001_0217f28c(uint64_t v);
extern uint64_t func_02099390(uint64_t a, uint64_t b);
extern uint32_t func_ov001_0217f19c(void *a, uint32_t b, void *c);

uint32_t func_ov001_0217f030(void *p0, uint32_t p1, void *p2)
{
    uint32_t *r4 = func_ov001_0217f324(p0, p1, p2);
    uint32_t kind;
    if (r4 == 0) {
        return 0;
    }
    kind = r4[1];
    if (kind == 0) {
        uint32_t *p = (uint32_t *)func_ov001_0217f30c();
        uint32_t v = func_ov001_0217f27c(((uint32_t *)p2)[0] + p[0]);
        return func_ov001_0217f2c4(r4, v);
    }
    if (kind == 1) {
        uint64_t *q = (uint64_t *)func_ov001_0217f30c();
        uint64_t r = func_02099390(*(uint64_t *)p2, *q);
        uint32_t v = func_ov001_0217f28c(r);
        return func_ov001_0217f2c4(r4, v);
    }
    return func_ov001_0217f19c(p0, p1, p2);
}
