#include "ffc/types.h"

extern void *func_0208de98(void *a, int b, void *c, void *d, uint16_t e, int f, int g);
extern void func_ov006_0219c99c(int a, void *b);

void *func_ov006_0219c848(void *p0, void *p1, void *p2, int p3, uint16_t p4)
{
    void *r;
    r = func_0208de98(p0, 0, p1, p2, p4, 1, 3);
    func_ov006_0219c99c(15, r);
    return r;
}
