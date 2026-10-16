/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } V;
typedef struct { uint32_t a, b, c, d; } Q;
typedef struct { V v0, v1, v2, v3; Q q; } S;
void func_02084b00(S *src, S *dst) {
    *dst = *src;
}
