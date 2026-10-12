/* cflags: -nothumb */
#include "ffc/types.h"

#define SH(x, n) ((int32_t)((x) >> (n)))
#define M(a, b) ((int64_t)(a) * (int64_t)(b))

void func_020801b0(int32_t *o, int32_t *v, int32_t s, int32_t t)
{
    int32_t sb = 0x1000 - t;
    int32_t v0 = v[0];
    int32_t v1 = v[1];
    int64_t a0 = M(sb, v0);
    int32_t p01 = SH(a0 * (int64_t)v1, 24);
    int32_t v2 = v[2];
    int32_t p02 = SH(a0 * (int64_t)v2, 24);
    int32_t q0 = SH(M(s, v0), 12);
    int32_t d0 = SH((int64_t)sb * M(v0, v0), 24);
    int32_t d1 = SH((int64_t)sb * M(v1, v1), 24);
    int32_t d2 = SH((int64_t)sb * M(v2, v2), 24);
    int32_t q1 = SH(M(s, v1), 12);
    int32_t q2 = SH(M(s, v2), 12);
    int32_t p12 = SH(M(sb, v1) * (int64_t)v2, 24);

    o[0] = d0 + t;
    o[4] = d1 + t;
    o[8] = d2 + t;
    o[3] = p01 - q2;
    o[1] = p01 + q2;
    o[2] = p02 - q1;
    o[6] = p02 + q1;
    o[5] = p12 + q0;
    o[7] = p12 - q0;
}
