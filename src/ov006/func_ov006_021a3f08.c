#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern uint32_t func_ov006_021b3e6c(uint32_t a, uint8_t b);
extern uint32_t func_ov006_021b570c(uint32_t a, void (*fn)(void), uint32_t b, uint32_t c);
extern void func_ov006_021a3fa8(void);
extern uint8_t data_ov006_021b80e0[];
extern uint32_t *data_ov006_021bc6f8;

void func_ov006_021a3f08(uint32_t a)
{
    uint32_t mode = 4;
    if (data_ov006_021bc6f8 != 0) {
        return;
    }
    data_ov006_021bc6f8 = (uint32_t *)func_ov006_021b49e4(12, 4);
    *((uint8_t *)data_ov006_021bc6f8 + 8) = (uint8_t)a;
    data_ov006_021bc6f8[0] = func_ov006_021b3e6c(0, data_ov006_021b80e0[a * 4]);
    data_ov006_021bc6f8 = data_ov006_021bc6f8;
    {
        uint32_t *inner = (uint32_t *)data_ov006_021bc6f8[0];
        inner[0] = (inner[0] & 0xfe00ff00) | 0xe50026;
    }
    {
        uint16_t *h = (uint16_t *)data_ov006_021bc6f8[0];
        h[2] = (uint16_t)((h[2] & 0xfffff3ff) | (mode << 9));
    }
    data_ov006_021bc6f8[1] = func_ov006_021b570c(0, func_ov006_021a3fa8, 0, 0x78);
}
