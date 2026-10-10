#include "ffc/types.h"

extern void func_0205f470(uint32_t v);

void func_ov005_021962a0(uint8_t *a)
{
    int i;

    for (i = 0; i < a[0x9c]; i++) {
        uint8_t *o = *(uint8_t **)(a + 0x80 + i * 4);
        uint8_t *s = *(uint8_t **)(o + 0x50);
        func_0205f470(*(uint32_t *)(s + 0x94));
        o = *(uint8_t **)(a + 0x8c + i * 4);
        s = *(uint8_t **)(o + 0x50);
        func_0205f470(*(uint32_t *)(s + 0x94));
    }
    {
        uint8_t *q = *(uint8_t **)(a + 0x98);
        if (q != 0) {
            uint8_t *s = *(uint8_t **)(q + 0x50);
            func_0205f470(*(uint32_t *)(s + 0x94));
        }
    }
}
