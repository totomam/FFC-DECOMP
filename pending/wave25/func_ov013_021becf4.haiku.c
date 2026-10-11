#include "ffc/types.h"

extern void func_ov013_021bec9c(void *p);

void func_ov013_021becf4(void *a)
{
    uint8_t *p = *(uint8_t **)((uint8_t *)a + 0x20);
    if (*(uint16_t *)((uint8_t *)a + 2) != 0 ||
        *(uint16_t *)((uint8_t *)a + 0xc) != *(uint16_t *)((uint8_t *)a + 0x10)) {
        *(uint8_t *)(p + 0x13c) = 1;
        return;
    }
    uint32_t n = *(uint32_t *)(p + 0x138) + 1;
    *(uint32_t *)(p + 0x138) = n;
    if (n != *(uint32_t *)(p + 0x130)) {
        func_ov013_021bec9c(p);
    }
}
