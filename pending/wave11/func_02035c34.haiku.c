#include "ffc/types.h"

typedef struct {
    uint32_t v;
} S;

uint32_t func_02035c34(S *p)
{
    return p->v >> 23;
}
