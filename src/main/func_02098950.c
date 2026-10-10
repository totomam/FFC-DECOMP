#include "ffc/types.h"

typedef struct {
    int32_t pad[2];
    int32_t a;
    int32_t b;
} S;

int32_t func_02098950(S *p)
{
    return p->b - p->a;
}
