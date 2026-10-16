/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { uint32_t w[8]; } S;
void func_020836d0(S *src, volatile S *dst) { *dst = src[0]; *dst = src[1]; }
