#include "ffc/types.h"

extern void *func_ov000_0214d210(void *p, uint32_t x);
extern void func_ov000_0214d268(void *p, uint32_t x);

void func_ov000_0214d2c4(void *p, uint32_t x)
{
    void *r = func_ov000_0214d210(p, x);
    func_ov000_0214d268(r, x);
}
