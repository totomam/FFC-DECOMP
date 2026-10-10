/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint32_t w[8]; } B32;

void func_020836d0(B32 *src, B32 *dst) {
    *dst = *src;
    src++;
    *dst = *src;
}
