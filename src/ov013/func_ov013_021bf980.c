#include "ffc/types.h"

extern void func_020694ac(uint8_t *p, uint32_t a, uint32_t b, uint32_t c);
extern uint8_t data_ov013_021c4798[];

uint8_t *func_ov013_021bf980(uint8_t *p, uint32_t a, uint8_t b, uint32_t c)
{
    uint32_t *q;
    func_020694ac(p, 0, 0, c);
    *(uint8_t **)p = data_ov013_021c4798;
    q = (uint32_t *)(p + 0xc0);
    *q = 0;
    q[1] = 0;
    q[2] = 0;
    *(uint32_t *)(p + 0xd8) = c;
    q = (uint32_t *)(p + 0xe8);
    *q = 0;
    q[1] = 0;
    q[2] = 0;
    *(uint32_t *)(p + 0xf8) = a;
    *(uint32_t *)(p + 0xfc) = 0;
    *(uint32_t *)(p + 0x100) = 0;
    *(uint32_t *)(p + 0x108) = 0;
    *(uint32_t *)(p + 0x10c) = 0;
    *(uint8_t *)(p + 0x110) = b;
    return p;
}
