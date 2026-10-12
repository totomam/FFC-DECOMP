#include "ffc/types.h"

extern uint8_t data_020a1a54[];
extern uint32_t func_02087460(void);
extern void func_02088f30(void);

uint32_t func_0207ce28(uint32_t a)
{
    uint32_t r4 = 0;
    uint32_t r2;
    if (a & 0x10) {
        r2 = 1;
        a = a & ~0x10u;
    } else {
        r2 = r4;
        a = a & ~0x10u;
    }
    if (a <= 3) {
        if (r2 == 0) {
            r4 = (uint32_t)data_020a1a54;
        } else {
            if (func_02087460() == 0) {
                func_02088f30();
            } else {
                r4 = 0x21d8f40;
            }
        }
    }
    return r4;
}
