#include "ffc/types.h"
extern uint32_t data_ov006_021ba0a0;
extern uint8_t *data_ov006_021ba160;
#define P(k) (data_ov006_021ba160 + idx * 0x5d4 + (k))
void func_ov006_0219a314(int idx)
{
    uint16_t a, b;
    if ((data_ov006_021ba0a0 & (1 << idx)) == 0) return;
    if (*P(0x1d52) == 0) return;
    if (*(uint16_t *)P(0x1d4c) == 0) return;
    a = *(uint16_t *)P(0x1d48);
    b = *(uint16_t *)P(0x1d4a);
    if (b <= a && a <= b + 2) {
        *(uint16_t *)P(0x1d48) = *(volatile uint16_t *)P(0x1d48) + 1;
        return;
    }
    ((uint16_t *)(data_ov006_021ba160 + idx * 0x5d4))[0xea4] = b;
}
