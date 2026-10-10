#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x6c];
    uint32_t v;
} S;

uint32_t func_0202b2c0(S *p)
{
    return p->v >> 4;
}
