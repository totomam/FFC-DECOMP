#include "ffc/types.h"

int func_02082004(uint32_t *out, uint32_t *out2) {
    volatile uint32_t *hw = (volatile uint32_t *)0x04000600;
    if (hw[0] & 1) {
        return -1;
    }
    out[0] = hw[8];
    out[1] = hw[9];
    out[2] = hw[10];
    *out2 = hw[11];
    return 0;
}
