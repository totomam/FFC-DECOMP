#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d, e, f; } S;
typedef struct { uint8_t pad[0x5c]; S s; } T;
typedef struct { uint8_t pad[0x3c]; T *t; } P;
static inline void cp(S *d, S *q){ uint32_t e,f; d->a=q->a; d->b=q->b; d->c=q->c; d->d=q->d; e=q->e; f=q->f; d->f=f; d->e=e; }
void func_0201d1b0(P *p, S *q) {
    cp(&p->t->s, q);
}
