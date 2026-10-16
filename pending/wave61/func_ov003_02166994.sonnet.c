#include "ffc/types.h"
extern uint32_t data_ov003_0217aac4;
typedef struct S { uint32_t *vt; uint32_t a, b; uint32_t lo:8; uint32_t hi:24; uint32_t d; uint32_t e; uint16_t f; uint16_t g; uint32_t h; uint32_t i; } S;
void func_ov003_02166994(S *p, uint32_t a, uint16_t b, uint16_t c, uint32_t d, uint32_t e)
{
    p->e = a;
    p->h = d;
    p->lo = 0;
    p->vt = &data_ov003_0217aac4;
    p->f = b;
    p->g = c;
    p->i = e;
}
