#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c3bb4;

void func_ov007_021a1dac(uint8_t *s)
{
    uint32_t a = data_ov007_021c3bb4.a;
    uint32_t b = data_ov007_021c3bb4.b;
    *(uint32_t *)(s + 0x80) = a;
    *(uint32_t *)(s + 0x84) = b;
    switch (*(uint32_t *)(s + 0x90)) {
    case 0: {
        uint32_t *p = *(uint32_t **)(s + 0x88);
        *p = 0;
        break;
    }
    case 1: {
        uint32_t *p = *(uint32_t **)(s + 0x88);
        uint32_t w;
        *p = 1;
        w = *(uint32_t *)(s + 0xc);
        w &= ~0xffu;
        w |= 2;
        *(uint32_t *)(s + 0xc) = w;
        break;
    }
    }
}
