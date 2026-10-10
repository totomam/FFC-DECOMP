#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x4];
    uint32_t f;
} S;

void func_02060ea4(S *s, uint32_t v)
{
    s->f = (s->f & ~31u) | (v & 31u);
}
