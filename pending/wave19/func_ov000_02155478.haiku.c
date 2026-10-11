#include "ffc/types.h"

extern void func_02084b2c(void *p, int a, int n);
extern void func_ov000_02154e38(void *p, uint32_t v);
extern void func_ov000_02154ee8(void *p, int v);

void func_ov000_02155478(void *a, uint32_t b)
{
    func_02084b2c(a, 0, 12);
    func_ov000_02154e38(a, b);
    func_ov000_02154ee8(a, 3);
}
