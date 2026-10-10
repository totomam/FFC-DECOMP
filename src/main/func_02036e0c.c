#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xc];
    uint32_t f;
} S;

void func_02036e0c(S *s, uint32_t v)
{
    s->f = (s->f & ~1u) | (v & 1u);
}
