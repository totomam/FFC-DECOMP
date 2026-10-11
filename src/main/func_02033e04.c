#include "ffc/types.h"

void func_02033e04(uint32_t *p) {
    int i;
    p[0] = 0;
    p[1] = 0;
    p[10] = 0;
    p[11] = 0;
    p[12] = 0;
    for (i = 0; i < 4; i++) {
        p[2 + i] = 0;
        p[6 + i] = 0;
    }
}
