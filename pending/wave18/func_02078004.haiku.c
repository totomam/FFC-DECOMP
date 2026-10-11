#include "ffc/types.h"

extern void func_02077bec(void *a, uint32_t b, void *c, uint32_t d, uint32_t e);

void *func_02078004(void *p, uint32_t a1, uint32_t a2)
{
    uint32_t *s = (uint32_t *)p;
    uint32_t *r4 = (uint32_t *)((uint8_t *)p + 0x24);
    func_02077bec(p, 0x46524d48, r4 + 3, a1, a2);
    s[0x24 / 4] = s[0x18 / 4];
    r4[1] = s[0x1c / 4];
    r4[2] = 0;
    return p;
}
