#include "ffc/types.h"
typedef struct { uint32_t fn; int32_t adj; } PMF;
typedef struct { uint8_t pad[0x38]; uint8_t *base; PMF m; uint32_t a; } S;
void func_0204434c(S *s)
{
    PMF *m = &s->m;
    uint8_t *o = s->base + (m->adj >> 1);
    uint32_t f;
    if (m->adj & 1)
        f = *(uint32_t *)(*(uint8_t **)o + m->fn);
    else
        f = m->fn;
    ((void (*)(void *, uint32_t))f)(o, s->a);
}
