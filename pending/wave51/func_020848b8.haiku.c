#include "ffc/types.h"

extern uint32_t func_02087460(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02088f30(void);

void func_020848b8(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    if (func_02087460(a, b, c, d) != 0) {
        uint32_t flag = (*(volatile uint32_t *)0x4004008 & 1) != 0;
        if (flag) {
            return;
        }
    }
    if (a != 0) {
        return;
    }
    uint32_t orig = b & 0xff000000;
    switch (d) {
    case 0:
        b += c;
        break;
    case 0x800000:
        b -= c;
        break;
    }
    uint32_t nw = b & 0xff000000;
    if (orig != 0x4000000 && orig < 0x8000000) {
        if (nw != 0x4000000 && nw < 0x8000000) {
            return;
        }
    }
    func_02088f30();
}
