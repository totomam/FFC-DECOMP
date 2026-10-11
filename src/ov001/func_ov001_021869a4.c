#include "ffc/types.h"

extern int func_ov001_02185e8c(uint32_t a, uint8_t *b, int c);
extern int func_ov001_02186890(uint32_t a, uint32_t b);
extern uint32_t data_ov001_0219575c[];

int func_ov001_021869a4(uint32_t *pa, uint32_t *pb)
{
    uint32_t *base;
    uint32_t a = *pa;
    uint32_t b = *pb;
    int d, e;
    base = (uint32_t *)data_ov001_0219575c[1];
    d = func_ov001_02185e8c(a, (uint8_t *)base + 0x498, 0);
    e = func_ov001_02185e8c(b, (uint8_t *)base + 0x498, 0);
    if (d - e == 0) {
        return func_ov001_02186890(a, b);
    }
    if (*(uint32_t *)((uint8_t *)data_ov001_0219575c[1] + 0x6a0) == 0) {
        return -(d - e);
    }
    return d - e;
}
