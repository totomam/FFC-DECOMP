#include "ffc/types.h"

int func_ov000_0214a1bc(uint8_t *p, int n, int step, int val) {
    int i;
    for (i = 0; i < n; i++) {
        int v = (p[0] << 8) + p[1];
        if (step == 3) {
            v = (v << 8) + p[2];
        }
        if (v == val) {
            return 1;
        }
        p += step;
    }
    return 0;
}
