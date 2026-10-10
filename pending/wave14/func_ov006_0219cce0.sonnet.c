#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t x, int y);
extern uint32_t data_ov006_021ba1c8[];

void func_ov006_0219cce0(int a) {
    int t = a - 2;
    data_ov006_021ba1c8[2] = t;
    data_ov006_021ba1c8[3] = func_0209a76c(30, t);
    data_ov006_021ba1c8[4] = 30;
}
