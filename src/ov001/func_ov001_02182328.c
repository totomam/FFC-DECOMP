#include "ffc/types.h"

extern uint32_t func_ov000_0214f148(void);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint8_t data_ov001_021950a4[];
extern uint8_t data_ov001_021950c4[];
extern uint8_t data_ov001_02191a3c[];
extern uint8_t data_ov001_02191a44[];
extern uint8_t data_ov001_02191a48[];

uint8_t *func_ov001_02182328(uint32_t a, uint32_t b, uint8_t *p)
{
    uint8_t *r = p;
    if (p == 0) {
        uint32_t f = ((uint32_t *)data_ov001_021950a4)[7] ^ 1;
        ((uint32_t *)data_ov001_021950a4)[7] = f;
        r = data_ov001_021950c4 + 0x16 * f;
    }
    if (a != 0) {
        if (b != 0) {
            func_02086ad4(r, (uint32_t)data_ov001_02191a3c, func_ov000_0214f148(), b);
        } else {
            func_02086ad4(r, (uint32_t)data_ov001_02191a44, func_ov000_0214f148());
        }
    } else {
        if (b != 0) {
            func_02086ad4(r, (uint32_t)data_ov001_02191a48, b);
        } else {
            *r = 0;
        }
    }
    return r;
}
