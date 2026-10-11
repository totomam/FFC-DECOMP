#include "ffc/types.h"

extern void func_02060a64(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_02060bc8(uint32_t *p, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    int i;
    for (i = 0; i < 4; i++) {
        func_02060a64(p[i + 1], b, c, d, e);
    }
}
