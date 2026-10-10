#include "ffc/types.h"

typedef struct {
    uint32_t pad[2];
    int32_t cur;
    int32_t max;
} S0207;

void func_0207c94c(S0207 *p)
{
    if (p->cur < p->max) {
        p->cur = p->cur + 1;
    }
}
