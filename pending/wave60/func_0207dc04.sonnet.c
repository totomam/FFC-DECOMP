/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; } Q;
typedef struct { uint32_t a, b; } P;
typedef struct { Q q; P p; uint16_t h0, h1; } S;
void func_0207dc04(S *s)
{
    Q *dq = (Q *)0x4000290;
    uint16_t *h = (uint16_t *)dq;
    P *dp = (P *)(h + 20);
    P *sp = &s->p;
    uint16_t a, b;
    *dq = s->q;
    a = s->h0;
    b = s->h1;
    h[-8] = a;
    h[16] = b;
    *dp = *sp;
}
