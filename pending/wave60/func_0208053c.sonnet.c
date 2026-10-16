/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { uint32_t a,b,c; } T;
typedef struct { T t; uint32_t z; } U;
typedef struct { T t[4]; } S;
typedef struct { U u[4]; } D;
void func_0208053c(S *s, D *d) {
    d->u[0].t = s->t[0]; d->u[0].z = 0;
    d->u[1].t = s->t[1]; d->u[1].z = 0;
    d->u[2].t = s->t[2]; d->u[2].z = 0;
    d->u[3].t = s->t[3]; d->u[3].z = 0x1000;
}
