#include "ffc/types.h"

int func_ov003_02147638(int a, int b, ...)
{
    int *p = &a;
    if (p[0] >= p[1]) {
        return 0;
    }
    return 1;
}
