#include "ffc/types.h"

extern uint32_t func_ov006_021b49e4(uint32_t a, int32_t b);
extern uint32_t data_ov006_021bc734;
extern void func_ov006_021a69d8(void);
extern void func_ov006_021a69f8(void);
extern void func_ov006_021a69ec(void);
extern int func_ov006_021a3368(int a, int b, void (*c)(void), void (*d)(void), void (*e)(void), uint32_t f);
extern void func_02088f30(void);
extern void func_020871d8(int a);

void func_ov006_021a68e4(void) {
    data_ov006_021bc734 = func_ov006_021b49e4(12, 12 - 16);
    if (func_ov006_021a3368(15, 64, func_ov006_021a69d8, func_ov006_021a69ec, func_ov006_021a69f8, 2 << 10) != 1) {
        func_02088f30();
    }
    func_020871d8(10);
}
