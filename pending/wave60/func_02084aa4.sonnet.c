/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { uint32_t a[8]; } S;
void func_02084aa4(const S *src, S *dst) {
    S t = *src;
    *dst = t;
}
