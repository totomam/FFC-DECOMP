#include "ffc/types.h"

extern void func_02056844(uint32_t arg);

uint32_t *func_02060bac(uint32_t *a)
{
    int i;
    for (i = 0; i < 4; i++) {
        func_02056844(a[i + 1]);
    }
    return a;
}
