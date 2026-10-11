#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint32_t data_ov008_021a8670;

void *func_ov008_0219fb54(void *p)
{
    uint8_t *s = (uint8_t *)p;
    uint32_t *q;
    uint32_t *r;
    uint32_t i;
    func_020694ac(p, 0, 0);
    q = (uint32_t *)(s + 0xd0);
    *(uint32_t *)s = (uint32_t)&data_ov008_021a8670;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    r = (uint32_t *)(s + 0xec);
    r[0] = 0;
    r[1] = 0;
    r[2] = 0;
    *(uint32_t *)(s + 0xfc) = 0;
    i = 0x100;
    s[i] = 0;
    s[i + 1] = 0;
    s[i + 2] = 0;
    s[i + 3] = 0;
    s[i + 4] = 0;
    return p;
}
