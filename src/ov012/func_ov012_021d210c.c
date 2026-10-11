#include "ffc/types.h"

extern void func_ov012_021d23d0(uint32_t *p, uint32_t i);

void func_ov012_021d210c(uint32_t *p, uint32_t v)
{
    uint8_t i;
    for (i = 0; i < 3; i++) {
        if (v == p[0x33 + i]) {
            p[0x45] = i + 1;
            func_ov012_021d23d0(p, i);
        }
    }
}
