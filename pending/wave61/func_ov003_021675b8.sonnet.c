#include "ffc/types.h"
extern uint32_t data_ov003_0217ac5c;
typedef struct S { uint32_t vt; uint32_t p4,p8; uint32_t c; uint32_t p10; uint32_t f14,f18,f1c,f20,f24,f28,f2c; uint8_t f30; } S;
S* func_ov003_021675b8(S *s, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint8_t f, uint32_t g, uint32_t h)
{
    s->f14 = a;
    s->f20 = d;
    s->c &= ~0xff;
    s->f24 = e;
    s->f28 = g;
    s->f2c = h;
    s->vt = (uint32_t)&data_ov003_0217ac5c;
    s->f18 = b;
    s->f1c = c;
    s->f30 = f;
}
