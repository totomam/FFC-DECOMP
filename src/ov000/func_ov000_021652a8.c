#include "ffc/types.h"

extern int func_ov000_02165238(int a, int b, int c, int d, void *e);

int func_ov000_021652a8(int a, int b, int c, int d)
{
    uintptr_t p = ((uintptr_t)&d) & ~(uintptr_t)3;
    return func_ov000_02165238(a, b, c, d, (void *)(p + 4));
}
