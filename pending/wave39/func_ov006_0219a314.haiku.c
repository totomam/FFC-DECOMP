#include "ffc/types.h"

extern uint32_t data_ov006_021ba0a0;
extern uint8_t *data_ov006_021ba160;

void func_ov006_0219a314(uint32_t idx)
{
    uint32_t flags = data_ov006_021ba0a0;
    uint8_t *p;
    uint16_t a, b;

    if (flags & (1u << idx)) {
        p = data_ov006_021ba160 + idx * 0x5d4;
        if (p[0x1d52] && *(uint16_t *)(p + 0x1d4c)) {
            a = *(uint16_t *)(p + 0x1d48);
            b = *(uint16_t *)(p + 0x1d4a);
            if (b > a || a > b + 2) {
                *(uint16_t *)(p + 0x1d48) = b;
            } else {
                *(uint16_t *)(p + 0x1d48) = a + 1;
            }
        }
    }
}
