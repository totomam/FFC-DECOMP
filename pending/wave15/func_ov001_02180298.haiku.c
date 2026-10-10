#include "ffc/types.h"

extern int func_ov001_02181e1c(int a);

void func_ov001_02180298(int a, uint32_t **p)
{
    if (func_ov001_02181e1c(a) == 0) {
        (*p)[3] = 0;
        (*p)[4] = 1;
    }
}
