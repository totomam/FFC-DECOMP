#include "ffc/types.h"

extern uint32_t func_02086700(uint32_t x);
extern uint32_t func_02077fb8(uint32_t a, uint32_t b, uint32_t c);
extern void func_02088f30(void);
extern void func_020866dc(uint32_t x);
extern uint32_t data_ov006_021bc824;

uint32_t func_ov006_021b49b4(uint32_t a, uint32_t b)
{
    uint32_t r6 = func_02086700(1);
    uint32_t r4 = func_02077fb8(data_ov006_021bc824, a, b);
    if (r4 == 0) {
        func_02088f30();
    }
    func_020866dc(r6);
    return r4;
}
