#include "ffc/types.h"

typedef struct {
    uint32_t pad[6];
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S;

void func_0203235c(uint32_t *out, S *in)
{
    uint32_t t = in->d;
    t = t - in->b;
    uint32_t u = in->c;
    u = u - in->a;
    out[1] = t;
    out[0] = u;
}
