#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7f8;
extern uint32_t func_ov006_021b5774(uint32_t x);
extern uint32_t func_ov006_021b570c(uint32_t a, void (*f)(void), uint32_t b, uint32_t c);
extern void func_ov006_021b17d4(void);

void func_ov006_021b15c0(uint32_t unused)
{
    data_ov006_021bc7f8[0x1b] = 0xFF;
    *(uint16_t *)(data_ov006_021bc7f8 + 0x18) += 1;
    if (*(uint16_t *)(data_ov006_021bc7f8 + 0x18) >= 0x78) {
        func_ov006_021b5774(0);
        *(uint32_t *)(data_ov006_021bc7f8 + 0x14) = func_ov006_021b570c(1, func_ov006_021b17d4, 0, 0x78);
    }
}
