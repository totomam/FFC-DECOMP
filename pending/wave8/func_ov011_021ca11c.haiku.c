#include "ffc/types.h"
extern uint32_t func_02093bb4(const uint16_t *text);
extern int func_0200a82c(int a, int b, int c, int d, uint16_t *p, uint8_t e);

int func_ov011_021ca11c(int a, int b, int c, uint16_t *d)
{
    volatile uint8_t x;
    uint16_t *p;
    p = d + func_02093bb4(d);
    return func_0200a82c(a, b, c, (int)d, p, (uint8_t)x);
}
