#include "ffc/types.h"

void func_ov001_02171d4c(uint32_t *p)
{
    p[3] = 0;
    p[4] = 0;
    if (p[8] == 0) {
        uint8_t *q = (uint8_t *)p[1];
        *q = 0;
    }
}
