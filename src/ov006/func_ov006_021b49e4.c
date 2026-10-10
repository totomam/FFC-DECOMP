#include "ffc/types.h"

extern void *func_ov006_021b49b4(void *p);
extern void func_02084b2c(void *a, int b, void *c);

void *func_ov006_021b49e4(void *p)
{
    void *r = func_ov006_021b49b4(p);
    func_02084b2c(r, 0, p);
    return r;
}
