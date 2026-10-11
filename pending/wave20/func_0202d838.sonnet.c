#include "ffc/types.h"

extern void func_02023e48(uint32_t x);

void func_0202d838(uint32_t *p)
{
    uint32_t *q = (uint32_t *)p[0x80 / 4];
    if (q != 0) {
        func_02023e48(q[0x34 / 4]);
        return;
    }
    q = (uint32_t *)p[0x84 / 4];
    if (q != 0) {
        func_02023e48(q[0x34 / 4]);
    }
}
