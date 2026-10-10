#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} S;

void func_ov003_021475ac(S *p, S s)
{
    p->a = s.a;
    p->b = s.b;
    p->c = s.c;
}
