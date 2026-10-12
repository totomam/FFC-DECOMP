/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { int32_t m[9]; } Mat3;

void func_02080304(const Mat3 *a, const Mat3 *b, Mat3 *out)
{
    Mat3 tmp;
    Mat3 *r = (out == b) ? &tmp : out;
    r->m[0] = (int32_t)(((int64_t)a->m[0]*b->m[0] + (int64_t)a->m[1]*b->m[3] + (int64_t)a->m[2]*b->m[6]) >> 12);
    r->m[1] = (int32_t)(((int64_t)a->m[0]*b->m[1] + (int64_t)a->m[1]*b->m[4] + (int64_t)a->m[2]*b->m[7]) >> 12);
    r->m[2] = (int32_t)(((int64_t)a->m[0]*b->m[2] + (int64_t)a->m[1]*b->m[5] + (int64_t)a->m[2]*b->m[8]) >> 12);
    r->m[3] = (int32_t)(((int64_t)a->m[3]*b->m[0] + (int64_t)a->m[4]*b->m[3] + (int64_t)a->m[5]*b->m[6]) >> 12);
    r->m[4] = (int32_t)(((int64_t)a->m[3]*b->m[1] + (int64_t)a->m[4]*b->m[4] + (int64_t)a->m[5]*b->m[7]) >> 12);
    r->m[5] = (int32_t)(((int64_t)a->m[3]*b->m[2] + (int64_t)a->m[4]*b->m[5] + (int64_t)a->m[5]*b->m[8]) >> 12);
    r->m[6] = (int32_t)(((int64_t)a->m[6]*b->m[0] + (int64_t)a->m[7]*b->m[3] + (int64_t)a->m[8]*b->m[6]) >> 12);
    r->m[7] = (int32_t)(((int64_t)a->m[6]*b->m[1] + (int64_t)a->m[7]*b->m[4] + (int64_t)a->m[8]*b->m[7]) >> 12);
    r->m[8] = (int32_t)(((int64_t)a->m[6]*b->m[2] + (int64_t)a->m[7]*b->m[5] + (int64_t)a->m[8]*b->m[8]) >> 12);
    if (r == &tmp) *out = tmp;
}
