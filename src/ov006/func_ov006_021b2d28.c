#include "ffc/types.h"

extern void func_ov006_0219c6e4(void);
extern uint8_t *data_ov006_021bc808;

uint32_t func_ov006_021b2d28(void) {
    uint8_t *base = data_ov006_021bc808;
    uint8_t st = base[0xa90];

    if (st == 1 || st == 0x14 || st == 0x17 || st == 0x1a || st == 0x1d) {
        base[0xa90] = 0x22;
        data_ov006_021bc808[0xa90 + 0x1c] = 0;
        return 1;
    }
    if (st == 4 || st == 5 || st == 6 || st == 0xd) {
        if (st == 4) {
            if (*(uint32_t *)(base + 0xa98) < 6) {
                return 0;
            }
        }
        func_ov006_0219c6e4();
        data_ov006_021bc808[0xa90] = 0x10;
        data_ov006_021bc808[0xa90 + 0x1c] = 2;
        return 1;
    }
    if ((uint8_t)(st + 0xf7) <= 1) {
        base[0xa90] = 0x20;
        return 1;
    }
    if (st == 0xc) {
        base[0xa90] = 0x22;
        return 1;
    }
    return 0;
}
