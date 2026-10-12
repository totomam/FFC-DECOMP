#include "ffc/types.h"

extern void func_ov000_021653f4(void *p);

void func_ov007_021c10f8(int32_t n, void *base)
{
    if (base != 0) {
        int32_t i;
        for (i = 0; i < n; i++) {
            uint32_t *e = (uint32_t *)((uint8_t *)base + (i << 4));
            if (e[1] == 8 && e[2] != 0) {
                func_ov000_021653f4((void *)e[2]);
            }
            if (e[1] == 5) {
                func_ov000_021653f4((void *)e[2]);
            }
        }
        func_ov000_021653f4(base);
    }
}
