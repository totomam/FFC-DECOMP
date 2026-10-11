#include "ffc/types.h"

extern void func_02056bf4(void *p, uint32_t v);

void func_ov002_0219b8d0(uint8_t *a, uint32_t *out1, uint32_t *out2)
{
    uint32_t off = 0x4a * 4;
    if (*(uint32_t *)(a + off) != 0) {
        func_02056bf4(a + 0x48, *(uint32_t *)(a + off));
        func_02056bf4(a + 0x48, *(uint32_t *)(a + off + 4));
        *out1 = *(uint32_t *)(a + off);
        *out2 = *(uint32_t *)(a + off + 4);
        *(uint32_t *)(a + off) = 0;
    }
}
