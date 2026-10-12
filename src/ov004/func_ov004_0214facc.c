#include "ffc/types.h"

extern int func_ov004_021507f0(uint8_t *p, int idx);

int func_ov004_0214facc(uint8_t *p, int idx)
{
    int r7 = 0;
    int r2 = 0;
    int r3 = 0;
    uint8_t *e = *(uint8_t **)(p + 0x10C) + idx * 0x38;

    if (e[0x37] != 0) {
        if (e[0x34] == 0) {
            r3 = 1;
        }
    }
    if (r3) {
        if (e[0x36] == 0) {
            r2 = 1;
        }
    }
    if (r2) {
        if (func_ov004_021507f0(p, idx)) {
            r7 = 1;
        }
    }
    return r7;
}
