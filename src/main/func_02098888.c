#include "ffc/types.h"

void func_02098888(uint32_t *p) {
    p[5] = 0;
    uint32_t base = p[8];
    p[4] = 0;
    p[6] = 0;
    uint32_t end = base + (p[7] << 1);
    p[1] = base;
    p[2] = base;
    p[3] = base;
    p[11] = end;
    p[10] = end;
    p[9] = end;
}
