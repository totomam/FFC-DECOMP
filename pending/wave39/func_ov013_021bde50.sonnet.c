#include "ffc/types.h"

extern void func_02056bf4(void *dst, uint32_t val);

void func_ov013_021bde50(uint8_t *a)
{
    uint32_t v;
    uint32_t two;
    uint32_t f8;
    uint8_t *sub;

    two = 2;
    **(uint32_t **)(a + 0xc8) = two;
    v = *(uint32_t *)(a + 0xf4);
    (*(uint32_t **)(a + 0xc8))[1] = v;
    v = *(uint32_t *)(a + 0xf8);
    (*(uint32_t **)(a + 0xc8))[2] = v;
    v = *(uint32_t *)(a + 0xf0);
    (*(uint32_t **)(a + 0xc8))[7] = v;
    *(uint8_t *)((*(uint32_t **)(a + 0xc8)) + 8) = 0;

    f8 = *(uint32_t *)(a + 0xf8);
    sub = a + 0x48;
    func_02056bf4(sub, *(uint32_t *)(a + 0xf4));
    func_02056bf4(sub, f8);

    *(uint32_t *)(a + 0xc) = (*(uint32_t *)(a + 0xc) & ~0xffu) | two;
}
