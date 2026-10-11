#include "ffc/types.h"

extern void func_0207cabc(uint16_t v);
extern void func_0207cb04(uint16_t v);
extern uint8_t *data_ov006_021bc80c;

uint32_t func_ov006_021b3804(void *p0, int code)
{
    switch (code) {
    case 9:
        func_0207cabc(*(uint16_t *)(data_ov006_021bc80c + 0xe4));
        return 0;
    case 10:
        func_0207cb04(*(uint16_t *)(data_ov006_021bc80c + 0xe4));
        return 0;
    case 1:
        return 4;
    default:
        return 0x102;
    }
}
