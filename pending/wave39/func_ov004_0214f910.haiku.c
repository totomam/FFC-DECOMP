#include "ffc/types.h"

extern void func_01ffd834(int32_t a, int32_t b, int32_t c, int32_t d);
extern uint32_t data_ov004_021596a4[];

void func_ov004_0214f910(uint8_t *p)
{
    int32_t flag = 1;
    int32_t a = *(int32_t *)(p + 0xec);
    int32_t b = *(int32_t *)(p + 0xe8);
    int32_t nb = b + a;

    *(int32_t *)(p + 0xe8) = nb;
    a = a + 0xe66;
    *(int32_t *)(p + 0xec) = a;

    if (nb >= 0 && a >= 0) {
        flag = 0;
    }
    if (flag != 0) {
        func_01ffd834(*(int32_t *)(p + 0x90), 0, nb >> 12, a);
    } else {
        uint32_t w0 = data_ov004_021596a4[0];
        uint32_t w1 = data_ov004_021596a4[1];
        *(uint32_t *)(p + 0x80) = w0;
        *(uint32_t *)(p + 0x84) = w1;
    }
}
