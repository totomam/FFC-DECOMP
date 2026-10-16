#include "ffc/types.h"
typedef struct { uint8_t c; } A;
typedef struct { uint32_t b[4]; } E;
typedef struct { E *p; uint32_t n; } V;
extern void func_02053670(void *d, E *b, E *e, A a);
void *func_02053644(void *d, V *s)
{
    if (d != (void*)s) {
        A a;
        E *b = s->p;
        E *e;
        a.c = 0;
        e = b + s->n;
        func_02053670(d, b, e, a);
    }
    return d;
}
