#include "ffc/types.h"

extern uint32_t data_ov002_021d52a0;

void func_ov002_021aa044(uint32_t *p) {
    uint8_t *b = (uint8_t *)p;
    int i;
    int j;
    int k;

    p[0] = (uint32_t)&data_ov002_021d52a0;
    *(uint32_t *)(b + 0xb4) = 0;
    p[1] = 0;
    for (i = 0; i < 13; i++) {
        b[8 + i] = 0;
        p[6 + i] = 1;
    }
    for (k = 0; k < 13; k++) {
        for (j = 0; j < 2; j++) {
            p[19 + 2 * k + j] = 0;
        }
    }
}
