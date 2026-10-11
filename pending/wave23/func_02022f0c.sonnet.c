#include "ffc/types.h"
typedef struct { int16_t a; int16_t b; } P;
typedef struct { int16_t c; int16_t pad; uint8_t d; } Q;
typedef struct { uint8_t f; uint8_t pad; int16_t a, b, c; uint16_t v; uint8_t d; uint8_t pad2; } E;
typedef struct { uint8_t pad[0x20]; E e[4]; } S;
void func_02022f0c(S *p, int idx, uint16_t v, P s, Q t) {
    E *e = &p->e[idx & 3];
    e->a = s.a;
    e->b = s.b;
    e->c = t.c;
    e->v = v;
    e->d = t.d;
    p->e[0].f = 1;
}
