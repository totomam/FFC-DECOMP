#include "ffc/types.h"
typedef struct { uint8_t v; } S;
extern uint32_t func_02093bb4(const uint16_t *text);
extern int func_0200a82c(int a, int b, int c, int d, uint16_t *p, S e);

int func_ov011_021ca11c(int a, int b, int c, uint16_t *d)
{
    S x;
    uint16_t *p;
    p = d + func_02093bb4(d);
    return func_0200a82c(a, b, c, (int)d, p, x);
}
