#include "ffc/types.h"

extern void func_020213b8(int32_t x);
extern uint32_t data_ov004_02158724[2];

void func_ov004_021496c4(uint8_t *p)
{
    uint32_t v;
    uint32_t a, b;

    func_020213b8(0x9b);
    v = *(uint32_t *)(p + 0x8c);
    v += 0x3c;
    *(uint32_t *)(p + 0x8c) = v;
    if (v == *(uint32_t *)(p + 0x90)) {
        a = data_ov004_02158724[0];
        b = data_ov004_02158724[1];
        *(uint32_t *)(p + 0x80) = a;
        *(uint32_t *)(p + 0x84) = b;
    }
}
