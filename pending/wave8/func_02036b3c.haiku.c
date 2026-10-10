#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x30];
    uint32_t f;
} S;

void func_02036b3c(S *s, uint32_t v)
{
    s->f = (s->f & ~1u) | (v & 1u);
}
