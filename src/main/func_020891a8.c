#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern uint32_t data_021418c8[];

void func_020891a8(uint32_t idx, uint32_t val) {
    uint32_t r;
    r = func_02088978();
    data_021418c8[idx] = val;
    if (val != 0) {
        uint32_t *p = (uint32_t *)0x2fffc00;
        p[0xe2] |= (1u << idx);
    } else {
        uint32_t *p = (uint32_t *)0x2fffc00;
        p[0xe2] &= ~(1u << idx);
    }
    func_0208898c(r);
}
