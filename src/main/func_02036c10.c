#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x4];
    uint32_t v;
} S;

uint32_t func_02036c10(S *p)
{
    return p->v >> 16;
}
