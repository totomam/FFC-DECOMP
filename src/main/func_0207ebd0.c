#include "ffc/types.h"

extern uint32_t data_021412e0[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_0207ebd0(Pair *out, uint32_t *src)
{
    Pair tmp;
    tmp.a = data_021412e0[1];
    tmp.b = src[6];
    *out = tmp;
}
