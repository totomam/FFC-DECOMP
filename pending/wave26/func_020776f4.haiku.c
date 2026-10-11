#include "ffc/types.h"

extern uint32_t data_020b290c;

void func_020776f4(uint8_t *p)
{
    uint32_t state = *(uint32_t *)(p + 0x98);
    if (state != 0) {
        if (state == 1) {
            uint32_t *s = &data_020b290c;
            uint32_t a = s[0];
            uint32_t b = s[1];
            *(uint32_t *)(p + 0x88) = a;
            *(uint32_t *)(p + 0x8c) = b;
        }
    } else {
        uint32_t *q = *(uint32_t **)(p + 0x90);
        *q = 0;
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    }
}
