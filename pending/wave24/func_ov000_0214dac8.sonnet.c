#include "ffc/types.h"

extern void func_ov000_0214db04(void);
extern void func_ov000_0214dbe0(void);
extern uint32_t *func_ov000_0214d1d8(void (*fn)(void), void *a);
extern void func_ov000_0214d2ac(void *a);

void func_ov000_0214dac8(void *a, uint32_t x, uint32_t y, uint32_t z, uint32_t w, uint32_t flag)
{
    uint32_t *p;
    if (flag & 1) {
        p = func_ov000_0214d1d8(func_ov000_0214db04, a);
    } else {
        p = func_ov000_0214d1d8(func_ov000_0214dbe0, a);
    }
    p[4] = x;
    p[5] = y;
    p[6] = z;
    p[7] = w;
    func_ov000_0214d2ac(a);
}
