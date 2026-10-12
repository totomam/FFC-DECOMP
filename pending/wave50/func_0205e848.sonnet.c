#include "ffc/types.h"

extern uint8_t data_020b1074[];
extern uint8_t data_020b1088[];

typedef struct { int32_t a, b, c, d; uint8_t e; uint8_t pp[3]; uint8_t f; } S;
typedef struct { int32_t q[4]; } V4;
typedef struct {
    void *vt;
    int32_t v[4];
    int32_t x, y, z;
    int32_t na, nb, c, d;
    uint8_t e, f;
} Out;

void *func_0205e848(Out *o, int32_t x, volatile int32_t y, volatile int32_t z, S s, ...)
{
    int32_t t[4];
    int32_t u[4];
    t[0] = s.a;
    t[1] = s.b;
    t[2] = s.a + y;
    t[3] = s.b + z;
    *(V4 *)u = *(V4 *)t;
    o->vt = data_020b1074;
    o->v[0] = u[0];
    o->v[1] = u[1];
    o->v[2] = u[2];
    o->v[3] = u[3];
    o->x = x;
    o->vt = data_020b1088;
    o->y = y;
    o->z = z;
    o->na = -s.a;
    o->nb = -s.b;
    o->c = s.c;
    o->d = s.d;
    o->e = s.e;
    o->f = s.f;
    return o;
}
