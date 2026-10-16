#include "ffc/types.h"
extern void func_ov000_0214db04(void);
extern void func_ov000_0214dbe0(void);
extern uint32_t *func_ov000_0214d1d8(void *fn, void *a);
extern void func_ov000_0214d2ac(void *a, void *p);
void func_ov000_0214dac8(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t *p;
    if (f & 1) p = func_ov000_0214d1d8((void*)func_ov000_0214db04, a);
    else p = func_ov000_0214d1d8((void*)func_ov000_0214dbe0, a);
    p[4] = b;
    p[5] = c;
    p[6] = d;
    p[7] = e;
    func_ov000_0214d2ac(a, p);
}
