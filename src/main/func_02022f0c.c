#include "ffc/types.h"
typedef struct { int16_t a, b, c, d; uint8_t e; } S;
typedef struct { int16_t a, b, c, d; uint8_t e; uint8_t pad; } E;
typedef struct { uint8_t pad[0x20]; uint8_t f; uint8_t g; E t[4]; } O;
void func_02022f0c(O *p, uint32_t i, int16_t v, S s) {
    i &= 3;
    p->t[i].a = s.a;
    p->t[i].b = s.b;
    p->t[i].c = s.c;
    p->t[i].d = v;
    p->t[i].e = s.e;
    p->f = 1;
}
