#include "ffc/types.h"

extern int func_02021240(int x);

int func_ov003_021498bc(uint32_t *p)
{
    uint32_t z = 0;
    p[0x7a] = z;
    p[0x7b] = z;
    return func_02021240(z - 1);
}
