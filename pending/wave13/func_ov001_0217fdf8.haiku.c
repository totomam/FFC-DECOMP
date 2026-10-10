#include "ffc/types.h"

typedef struct {
    int32_t pad;
    int32_t a;
    int32_t b;
} S;

int32_t func_ov001_0217fdf8(S *p)
{
    return p->a - p->b;
}
