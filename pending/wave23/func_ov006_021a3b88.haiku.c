#include "ffc/types.h"

extern void *func_ov006_021a3b48(void *p);
extern void *func_ov006_021b3888(void *p, uint32_t *buf, uint32_t n);
extern void func_020878ac(void *p, uint32_t v);
extern void func_ov006_021b392c(void *p);

void func_ov006_021a3b88(void *p, void (*cb)(void *, uint32_t, uint32_t))
{
    uint32_t v;
    void *r;
    r = func_ov006_021b3888(func_ov006_021a3b48(p), &v, 4);
    func_020878ac(r, v);
    cb(r, 0, v);
    func_ov006_021b392c(r);
}
