#include "ffc/types.h"

extern uint8_t func_ov000_0215370c(uint8_t *p);
extern void func_02084ca4(const void *src, void *dst, uint32_t n);
extern uint8_t data_ov000_02169644[];

uint8_t func_ov000_02153650(uint8_t *p)
{
    uint8_t idx;
    uint8_t *e;
    uint32_t flag;

    e = p + 0x900;
    idx = func_ov000_0215370c(p);
    e = e + idx * 0x24;
    flag = (uint32_t)(p[0x14bc] << 28) >> 28;
    if (flag == 0 || flag == 6) {
        func_02084ca4(data_ov000_02169644, e + 4, 8);
        e[3] = 8;
        e[1] = 0x14;
        idx = (uint8_t)(idx + 1);
    }
    return idx;
}
