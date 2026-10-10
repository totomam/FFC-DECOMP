#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    uint32_t lo;
    uint32_t hi;
} S;

uint64_t func_ov000_02154e00(S *p)
{
    uint64_t v = (uint64_t)p->hi << 32;
    return v | (uint64_t)p->lo;
}
