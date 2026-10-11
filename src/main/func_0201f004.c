#include "ffc/types.h"

extern void func_0201d1f0(void *p, uint32_t v, uint32_t n);
extern void func_02084b2c(void *p, int c, uint32_t n);

void func_0201f004(uint8_t *p, int flag)
{
    if (flag == 0) {
        func_0201d1f0(p, *(uint32_t *)(p + 0x7c), 8);
        func_02084b2c(*(void **)(p + 0x84), 0, 0x20);
    } else {
        func_0201d1f0(p, *(uint32_t *)(p + 0x80), 8);
        func_02084b2c(*(void **)(p + 0x88), 0, 0x20);
    }
}
