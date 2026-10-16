#include "ffc/types.h"
extern uint16_t data_0214136c;
extern uint16_t data_020b2944;
void func_020819e8(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t r = *(volatile uint32_t*)0x4000000;
    data_0214136c = a;
    if (data_020b2944 == 0) a = 0;
    *(volatile uint32_t*)0x4000000 = (r & 0xfff0fff0) | (a << 16) | b | (c << 3);
    if (data_0214136c == 0) data_020b2944 = 0;
}
