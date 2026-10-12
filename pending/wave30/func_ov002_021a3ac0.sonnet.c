#include "ffc/types.h"

extern uint32_t data_ov002_021d3aa0[];
extern uint64_t func_0209a76c(uint8_t a, int b);

uint32_t func_ov002_021a3ac0(uint32_t v, uint32_t mode, uint32_t off) {
    uint8_t sel = 0;
    int i;
    int k;

    for (i = 0; i < 6; i++) {
        if (v == data_ov002_021d3aa0[i]) {
            sel = (uint8_t)i;
            break;
        }
    }

    uint8_t res = 0;
    switch (mode) {
    case 0:
        res = (uint8_t)(sel + off);
        break;
    case 1:
        res = (uint8_t)(sel + 6 - off);
        break;
    }

    k = 6;
    uint64_t d = func_0209a76c(res, k);
    return data_ov002_021d3aa0[(uint32_t)(d >> 32)];
}
