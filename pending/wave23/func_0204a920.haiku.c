#include "ffc/types.h"

extern uint32_t data_02141510[];
extern void func_02088f30(void);

void func_0204a920(uint8_t *r0, int r1)
{
    uint32_t v = data_02141510[1];
    uint8_t *p = r0 + 0x2c;

    if (v == 0) {
        return;
    }
    if (r1 != 0) {
        goto check_eq;
    }
    if (v != (uint32_t)p) {
        goto call;
    }
check_eq:
    if (r1 == 0) {
        return;
    }
    if (v != (uint32_t)p) {
        return;
    }
call:
    func_02088f30();
}
