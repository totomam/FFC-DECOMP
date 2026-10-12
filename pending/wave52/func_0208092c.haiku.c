/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_02081418(int32_t *v, int32_t *w);
extern void func_02081398(int32_t *a, int32_t *b, int32_t *out);
extern int32_t func_0208135c(int32_t *a, int32_t *b);

void func_0208092c(int32_t *a, int32_t *up, int32_t *b, int32_t *out)
{
    int32_t A[3];
    int32_t B[3];
    int32_t C[3];

    A[0] = a[0] - b[0];
    A[1] = a[1] - b[1];
    A[2] = a[2] - b[2];
    func_02081418(A, A);
    func_02081398(up, A, B);
    func_02081418(B, B);
    func_02081398(A, B, C);

    out[0] = B[0];
    out[1] = C[0];
    out[2] = A[0];
    out[3] = B[1];
    out[4] = C[1];
    out[5] = A[1];
    out[6] = B[2];
    out[7] = C[2];
    out[8] = A[2];
    out[9] = -func_0208135c(a, B);
    out[10] = -func_0208135c(a, C);
    out[11] = -func_0208135c(a, A);
}
