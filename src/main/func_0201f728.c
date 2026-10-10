#include "ffc/types.h"

extern int func_02036b60(int x);

int func_0201f728(int *p, int i)
{
    return func_02036b60(p[0x60 / 4] + (i << 3));
}
