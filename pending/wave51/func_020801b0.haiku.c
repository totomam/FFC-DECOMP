/* cflags: -nothumb */
#include "ffc/types.h"

#define P3(a, b, c) ((int32_t)((((int64_t)(a) * (int64_t)(b)) * (int64_t)(c)) >> 24))
#define Q2(a, b) ((int32_t)(((int64_t)(a) * (int64_t)(b)) >> 12))

void func_020801b0(int32_t *o, int32_t *v, int32_t s, int32_t t)
{
    int32_t sb = 0x1000 - t;
    int32_t v0 = v[0];
    int32_t v1 = v[1];
    int32_t v2 = v[2];
    int32_t p01 = P3(sb, v0, v1);
    int32_t p02 = P3(sb, v0, v2);
    int32_t p12 = P3(sb, v1, v2);
    int32_t q0 = Q2(s, v0);
    int32_t q1 = Q2(s, v1);
    int32_t q2 = Q2(s, v2);

    o[0] = P3(sb, v0, v0) + t;
    o[1] = p01 + q2;
    o[2] = p02 - q1;
    o[3] = p01 - q2;
    o[4] = P3(sb, v1, v1) + t;
    o[5] = p12 + q0;
    o[6] = p02 + q1;
    o[7] = p12 - q0;
    o[8] = P3(sb, v2, v2) + t;
}
