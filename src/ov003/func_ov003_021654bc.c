#include "ffc/types.h"

extern uint8_t data_ov003_0217afec[];

void func_ov003_021654bc(uint8_t *p, uint32_t a, uint16_t b, uint16_t c,
                             uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                             uint16_t s4, uint32_t s5, uint8_t s6)
{
    *(uint32_t *)(p + 0xc) &= ~0xffu;
    *(uint8_t **)(p + 0) = data_ov003_0217afec;
    *(uint32_t *)(p + 0x14) = a;
    *(uint8_t *)(p + 0x18) = s6;
    *(uint16_t *)(p + 0x1a) = b;
    *(uint16_t *)(p + 0x1c) = c;
    *(uint16_t *)(p + 0x1e) = s4;
    *(uint32_t *)(p + 0x20) = s5;
    *(uint32_t *)(p + 0x24) = s0;
    *(uint32_t *)(p + 0x28) = s1;
    *(uint32_t *)(p + 0x2c) = s2;
    *(uint32_t *)(p + 0x30) = s3;
}
