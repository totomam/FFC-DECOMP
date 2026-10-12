#include "ffc/types.h"
typedef struct { uint32_t w[4]; } P;
typedef struct { uint16_t h[9]; } H;
typedef struct { H h; uint32_t a, b; P c; } E;
typedef struct { uint8_t pad[0x2c]; E *tbl; } O;
void func_0201af7c(O *p, int32_t idx, E *d)
{
    E *s = &p->tbl[idx];
    d->h = s->h;
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
}
