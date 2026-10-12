/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_02084ac0(void *a, void *b, int32_t x, int32_t y);

typedef struct {
    int32_t m[3][3];
    int32_t t[3];
} Mat;

void func_0208059c(Mat *src, Mat *dst, int32_t x, int32_t y, int32_t z)
{
    if (src != dst) {
        func_02084ac0(src, dst, x, y);
    }
    dst->t[0] = (int32_t)(((int64_t)x * src->m[0][0] + (int64_t)y * src->m[1][0] + (int64_t)z * src->m[2][0]) >> 12) + src->t[0];
    dst->t[1] = (int32_t)(((int64_t)x * src->m[0][1] + (int64_t)y * src->m[1][1] + (int64_t)z * src->m[2][1]) >> 12) + src->t[1];
    dst->t[2] = (int32_t)(((int64_t)x * src->m[0][2] + (int64_t)y * src->m[1][2] + (int64_t)z * src->m[2][2]) >> 12) + src->t[2];
}
