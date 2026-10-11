#include "ffc/types.h"

extern uint32_t data_ov007_021c780c[2];

void func_ov007_021ba984(uint8_t *p)
{
    uint32_t a, b;
    *(uint32_t *)(p + 0xc4) = 0;
    *(uint32_t *)(p + 0xc8) = 3;
    *(uint32_t *)(p + 0xcc) = 0;
    *(uint32_t *)(p + 0xd0) = 0x270f;
    *(uint8_t *)(p + 0xd4) = 1;
    *(uint8_t *)(p + 0xd5) = 1;
    *(uint8_t *)(p + 0xd6) = 1;
    *(uint8_t *)(p + 0xd7) = 0x14;
    a = data_ov007_021c780c[0];
    b = data_ov007_021c780c[1];
    *(uint32_t *)(p + 0xb4) = b;
    *(uint32_t *)(p + 0xb0) = a;
}
