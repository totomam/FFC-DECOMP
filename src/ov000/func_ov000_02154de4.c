#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

uint64_t func_ov000_02154de4(S *p)
{
    uint64_t r;
    r = (uint64_t)(p->a & 0x7ff) << 32;
    r |= p->b;
    return r;
}
