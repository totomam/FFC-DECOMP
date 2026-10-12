#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
typedef struct { uint32_t d, e; } P;
extern void func_02056c9c(void *obj, int zero, uint32_t x, uint32_t y, P p);
extern uint8_t data_ov003_021795fc[];

typedef struct {
    void *vt;
    uint8_t pad[0x80];
    uint32_t a, b, c, d, e, f;
    uint16_t g;
    uint32_t h;
} Obj;

typedef struct {
    uint32_t b, c;
    P p;
    uint32_t f;
    uint16_t g;
    uint32_t h;
} S;

void *func_ov003_0214c118(uint32_t a, S s)
{
    Obj *obj = (Obj *)func_0205681c(0xa4);
    if (obj) {
        func_02056c9c(obj, 0, s.p.d, s.c, s.p);
        obj->vt = data_ov003_021795fc;
        obj->a = a;
        obj->b = s.b;
        obj->c = s.c;
        obj->d = s.p.d;
        obj->e = s.p.e;
        obj->f = s.f;
        obj->g = s.g;
        obj->h = s.h;
    }
    return obj;
}
