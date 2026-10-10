#include "ffc/types.h"

extern uint32_t *func_0204f0d4(uint32_t x);

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void func_02060ebc(S *s)
{
    uint32_t *p = func_0204f0d4(s->a);
    *p = s->b;
}
