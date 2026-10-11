#include "ffc/types.h"

void func_02020f40(int32_t *r0, int32_t *r1, int32_t r2, int32_t r3)
{
    int32_t b = r1[1];
    int32_t s1 = r3 + 3 + (b + 7) / 8;
    int32_t a = r1[0];
    int32_t s0 = r2 + 2 + (a + 7) / 8;
    r0[0] = s0;
    r0[1] = s1;
}
