#include "ffc/types.h"

extern void func_02088f30(void);
extern uint16_t data_021414ec[];

void func_020867a8(uint32_t a, uint32_t b)
{
    uint32_t v = ((b & (0x7f << 8)) << 8) >> 16;
    if (v == 0x10) {
        data_021414ec[0] = 1;
        return;
    }
    if (v == 0x20) {
        data_021414ec[1] = 1;
        func_02088f30();
        return;
    }
    func_02088f30();
}
