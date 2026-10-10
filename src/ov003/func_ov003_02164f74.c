#include "ffc/types.h"

extern int func_02043b88(uint32_t a, uint32_t b);

void func_ov003_02164f74(uint32_t *p)
{
    if (func_02043b88(p[0x20], p[0x21]) != 0) {
        p[3] = (p[3] & ~0xffu) | 2;
    }
}
