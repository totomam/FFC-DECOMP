#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x8];
    uint32_t v;
} S;

uint32_t func_02036ce0(S *p)
{
    return p->v >> 29;
}
