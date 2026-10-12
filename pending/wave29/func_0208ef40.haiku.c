#include "ffc/types.h"

extern uint32_t func_0208ef78(void);
extern uint32_t func_02088f30(uint32_t a, uint32_t b);
extern uint8_t data_021440c8[];

uint32_t func_0208ef40(uint32_t unused, uint32_t a) {
    uint32_t r;

    if ((a & 0x3f) == 0x11) {
        if (((uint32_t *)data_021440c8)[3] != 0) {
            return ((uint32_t *)data_021440c8)[3];
        }
        r = 0;
        if (((uint32_t *)data_021440c8)[6] != 0) {
            r = ((uint32_t (*)(void))((uint32_t *)data_021440c8)[6])();
        }
        if (r != 0) {
            func_0208ef78();
        }
        ((uint32_t *)data_021440c8)[3] = 1;
        return (uint32_t)data_021440c8;
    }
    return func_02088f30(a & 0x3f, a);
}
