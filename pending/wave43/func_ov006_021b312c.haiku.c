#include "ffc/types.h"

extern uint32_t func_ov006_021b26a8(void);
extern void func_ov006_021b26b4(void);
extern uint16_t func_ov006_021b285c(void);
extern void func_ov006_021b2b74(void);
extern void func_02088f30(void);
extern uint8_t *data_ov006_021bc808;

void func_ov006_021b312c(void) {
    switch (func_ov006_021b26a8()) {
    case 1:
        func_ov006_021b26b4();
        return;
    case 7:
        *(uint16_t *)((uint8_t *)data_ov006_021bc808 + 0x64a) = func_ov006_021b285c();
        *(uint32_t *)((uint8_t *)data_ov006_021bc808 + 0xa98) = 0;
        *((uint8_t *)data_ov006_021bc808 + 0xa90) = 3;
        return;
    case 0:
        *(uint32_t *)((uint8_t *)data_ov006_021bc808 + 0xa98) = 0;
        *((uint8_t *)data_ov006_021bc808 + 0xa90) = 3;
        return;
    case 9:
        func_ov006_021b2b74();
        return;
    case 2:
    case 4:
    case 5:
    case 6:
    case 8:
    default:
        func_02088f30();
        return;
    case 3:
        return;
    }
}
