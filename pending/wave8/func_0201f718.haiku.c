#include "ffc/types.h"

extern int func_02036b5c(int x);

int func_0201f718(int *p, int i)
{
    return func_02036b5c(p[0x60 / 4] + (i << 3));
}
