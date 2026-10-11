/* cflags: -nothumb */
#include "ffc/types.h"

void func_02080498(int32_t *p, int32_t *q, uint32_t *out)
{
    long long a1 = (long long)p[1] * q[4];
    long long a2 = (long long)p[1] * q[3];
    long long a3 = (long long)p[1] * q[5];

    a1 += (long long)p[0] * q[1];
    a2 += (long long)p[0] * q[0];
    a3 += (long long)p[0] * q[2];

    a1 += (long long)p[2] * q[7];
    a2 += (long long)p[2] * q[6];
    a3 += (long long)p[2] * q[8];

    out[0] = (uint32_t)(a2 >> 12);
    out[1] = (uint32_t)(a1 >> 12);
    out[2] = (uint32_t)(a3 >> 12);
}
