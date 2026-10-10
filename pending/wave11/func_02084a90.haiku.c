/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c;
} S3;

void func_02084a90(S3 *src, S3 *dst) {
    *dst = *src;
}
