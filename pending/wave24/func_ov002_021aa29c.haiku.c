#include "ffc/types.h"

typedef struct {
    int32_t v[2];
} Ent;

typedef struct {
    uint8_t pad[0x4c];
    Ent ent[8];
} S;

void func_ov002_021aa29c(S *s, int32_t n)
{
    int32_t i;
    uint8_t *p = (uint8_t *)s;
    uint8_t *q = p + n;
    *(uint32_t *)(p + 4) &= ~(1u << n);
    q[8] = 0;
    for (i = 0; i < 2; i++) {
        s->ent[n].v[i] = i;
    }
}
