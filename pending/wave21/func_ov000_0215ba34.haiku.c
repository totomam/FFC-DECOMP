#include "ffc/types.h"

extern void func_ov000_0215b7f4(int x);

void func_ov000_0215ba34(void *a, uint32_t *b)
{
    uint32_t v = b[1];
    if (v == 0x603) {
        return;
    }
    if (v == 0x901) {
        return;
    }
    if (v == 0xb01) {
        return;
    }
    func_ov000_0215b7f4(3);
}
