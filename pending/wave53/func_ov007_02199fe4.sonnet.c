#include "ffc/types.h"

extern uint32_t data_ov007_021c2884[2];

void func_ov007_02199fe4(uint8_t *s)
{
    uint32_t st = *(uint32_t *)(s + 0x94);
    switch (st) {
    case 0:
    {
        uint32_t *d = data_ov007_021c2884;
        uint32_t x = d[0];
        uint32_t y = d[1];
        *(uint32_t *)(s + 0x80) = x;
        *(uint32_t *)(s + 0x84) = y;
    }
        break;
    case 1:
        **(uint32_t **)(s + 0x88) = 2;
        *(uint32_t *)(s + 0x0c) = (*(uint32_t *)(s + 0x0c) & ~0xffu) | 2;
        break;
    case 2:
        **(uint32_t **)(s + 0x88) = 8;
        *(uint32_t *)(s + 0x0c) = (*(uint32_t *)(s + 0x0c) & ~0xffu) | 2;
        break;
    case 3:
        **(uint32_t **)(s + 0x88) = 3;
        *(uint32_t *)(s + 0x0c) = (*(uint32_t *)(s + 0x0c) & ~0xffu) | 2;
        break;
    case 4:
        **(uint32_t **)(s + 0x88) = 4;
        *(uint32_t *)(s + 0x0c) = (*(uint32_t *)(s + 0x0c) & ~0xffu) | 2;
        break;
    case 5:
        **(uint32_t **)(s + 0x88) = 5;
        *(uint32_t *)(s + 0x0c) = (*(uint32_t *)(s + 0x0c) & ~0xffu) | 2;
        break;
    default:
        break;
    }
}
