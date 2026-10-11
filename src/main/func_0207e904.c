#include "ffc/types.h"

extern int func_0207e8dc(void *p, int a, int b);

int func_0207e904(void *p)
{
    int r4 = -1;
    if (func_0207e8dc(p, 0, 0) != 0) {
        r4 = *(uint16_t *)((uint8_t *)p + 0x38);
    }
    return r4;
}
