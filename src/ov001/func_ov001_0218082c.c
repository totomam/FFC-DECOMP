#include "ffc/types.h"

typedef struct {
    int32_t pad[21];
    int32_t a;
    int32_t b;
} S;

int32_t func_ov001_0218082c(S *p)
{
    return p->a - p->b;
}
