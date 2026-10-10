/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t w[16];
} S64;

void func_02084b00(S64 *src, S64 *dst)
{
    *dst = *src;
}
