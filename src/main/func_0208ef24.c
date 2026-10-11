#include "ffc/types.h"

extern void func_02088f30(uint32_t a, uint32_t b);
extern uint16_t data_021440c4;

void func_0208ef24(uint32_t x, uint32_t y)
{
    uint32_t m = y & 0x3f;
    if (m == 1) {
        data_021440c4 = 1;
        return;
    }
    func_02088f30(m, y);
}
