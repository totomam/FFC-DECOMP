#include "ffc/types.h"

uint32_t func_ov001_0217fc20(uint8_t *p) {
    uint8_t a = p[0];
    int acc = 0;
    int i;
    for (i = 1; i < 32; i++) {
        int prev = p[i - 1];
        int c7 = prev < a;
        int c6 = a < 0x4f;
        acc = (a & 1) ^ acc ^ ((i ^ prev) & 1) ^ c6 ^ c7;
        if ((acc != 0) != (p[i] & 1)) {
            return 0;
        }
    }
    return 1;
}
