#include "ffc/types.h"

extern uint32_t func_02086700(uint32_t);
extern void func_02077fd8(uint32_t, void *);
extern void func_020866dc(uint32_t);
extern uint32_t data_ov006_021bc824;

void func_ov006_021b4a28(void *p)
{
    uint32_t r = func_02086700(1);
    if (p != 0) {
        func_02077fd8(data_ov006_021bc824, p);
        func_020866dc(r);
    }
}
