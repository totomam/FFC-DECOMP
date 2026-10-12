#include "ffc/types.h"

uint32_t func_ov001_0217fc20(uint8_t *p) {
    int acc = 0;
    int i;
    uint8_t a = p[0];
    for (i = 1; i < 32; i++) {
        uint8_t *q = p + i;
        uint8_t prev = q[-1];
        int c7 = prev < a;
        acc = ((a & 1) ^ (acc ^ ((i ^ prev) & 1)) ^ (a < 0x4f)) ^ c7;
        if ((acc && !(*q & 1)) || (!acc && (*q & 1) == 1)) return 0;
    }
    return 1;
}
