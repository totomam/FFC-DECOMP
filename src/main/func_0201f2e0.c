#include "ffc/types.h"

extern int32_t func_02036994(void *a, uint8_t b);

int32_t func_0201f2e0(int32_t unused, void *p)
{
    uint8_t i = 0;
    do {
        if (func_02036994(p, i)) {
            return 1;
        }
        i++;
    } while (i < 3);
    return 0;
}
