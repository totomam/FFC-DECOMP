#include "ffc/types.h"

extern int func_ov001_021803b0(void *a, void *b, int c);

int func_ov001_02181b20(void *a, void *b, int c)
{
    ((uint8_t *)b)[2] = 0x67;
    return func_ov001_021803b0(a, b, c);
}
