#include "ffc/types.h"

extern uint8_t data_020b1074[];
extern uint8_t data_020b1088[];

typedef struct {
    int32_t a, b, c, d;
} V4;

typedef struct {
    void *vt;
    V4 v;
    int32_t x, y, z;
    int32_t na, nb, c, d;
    uint8_t e, f;
} Out;

void *func_0205e848(Out *o, int32_t x, volatile int32_t y, volatile int32_t z, ...)
{
    int32_t *va = (int32_t *)&z + 1;
    uint8_t *vb = (uint8_t *)va;
    int32_t t[4];
    int32_t u[4];
    t[0] = va[0];
    t[1] = va[1];
    t[2] = va[0] + y;
    t[3] = va[1] + z;
    *(V4 *)u = *(V4 *)t;
    o->vt = data_020b1074;
    o->v.a = u[0];
    o->v.b = u[1];
    o->v.c = u[2];
    o->v.d = u[3];
    o->x = x;
    o->vt = data_020b1088;
    o->z = z;
    o->y = y;
    o->na = -va[0];
    o->nb = -va[1];
    o->c = va[2];
    o->d = va[3];
    o->e = vb[0x10];
    o->f = vb[0x14];
    return o;
}
