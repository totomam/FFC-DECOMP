#include "ffc/types.h"

extern void func_02084b2c(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02077f90(uint32_t a, uint32_t b, uint32_t c);
extern void func_02088f30(void);
extern uint32_t data_ov006_021bc824;

void func_ov006_021b4974(uint32_t a) {
    uint32_t r = 0x40000;
    func_02084b2c(a, 0, r);
    r = func_02077f90(a, r, 0);
    data_ov006_021bc824 = r;
    if (r == 0) {
        func_02088f30();
    }
}
