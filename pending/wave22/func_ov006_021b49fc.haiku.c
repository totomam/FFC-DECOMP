#include "ffc/types.h"

extern uint32_t func_02086700(uint32_t x);
extern void func_02077fd8(uint32_t x);
extern void func_020866dc(uint32_t x);
extern uint32_t data_ov006_021bc824;

void func_ov006_021b49fc(uint32_t *p)
{
    uint32_t h = func_02086700(1);
    if (*p != 0) {
        func_02077fd8(data_ov006_021bc824);
        func_020866dc(h);
        *p = 0;
    }
}
