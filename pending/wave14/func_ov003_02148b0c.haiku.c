#include "ffc/types.h"

typedef struct {
    int32_t b;
    int32_t c;
    int32_t d;
} S;

extern int32_t func_ov003_02148af8(int32_t a, int32_t b, int32_t c);

int32_t func_ov003_02148b0c(int32_t a, S s)
{
    return func_ov003_02148af8(a, s.b, s.c);
}
