#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x50];
    uint32_t *arr;
} S;

void func_0201d198(S *s, uint32_t i, uint32_t *v)
{
    uint32_t val = *v;
    *(s->arr + i) = val;
}
