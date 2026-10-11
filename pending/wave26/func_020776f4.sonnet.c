#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
extern P data_020b290c;

void func_020776f4(uint8_t *p)
{
    uint32_t state = *(uint32_t *)(p + 0x98);
    if (state != 0) {
        if (state == 1) {
            P *s = &data_020b290c;
            uint32_t *d0 = (uint32_t *)(p + 0x88);
            uint32_t *d1 = (uint32_t *)(p + 0x8c);
            uint32_t a = s->a;
            uint32_t b = s->b;
            *d0 = a;
            *d1 = b;
        }
    } else {
        uint32_t *q = *(uint32_t **)(p + 0x90);
        *q = 0;
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    }
}
