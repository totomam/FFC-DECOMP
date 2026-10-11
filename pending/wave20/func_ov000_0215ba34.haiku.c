#include "ffc/types.h"

extern void func_ov000_0215b7f4(int32_t);

void func_ov000_0215ba34(void *unused, uint32_t *p)
{
    uint32_t v = p[1];
    if (v == 0x603 || v == 0x901 || v == 0xb01) {
        return;
    }
    func_ov000_0215b7f4(3);
}
