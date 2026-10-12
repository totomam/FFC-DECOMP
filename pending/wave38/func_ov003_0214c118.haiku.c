#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, int zero, int x, int y, uint32_t d, uint32_t e);
extern uint8_t data_ov003_021795fc[];

typedef struct {
    void *vt;
    uint8_t pad[0x80];
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint16_t g;
    uint32_t h;
} Obj;

typedef struct {
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S3;

void *func_ov003_0214c118(uint32_t a, S3 s, uint32_t e, uint32_t f, uint16_t g, uint32_t h)
{
    Obj *obj = (Obj *)func_0205681c(0xa4);
    if (obj) {
        func_02056c9c(obj, 0, s.c, s.d, s.d, e);
        obj->vt = data_ov003_021795fc;
        obj->a = a;
        obj->b = s.b;
        obj->c = s.c;
        obj->d = s.d;
        obj->e = e;
        obj->f = f;
        obj->g = g;
        obj->h = h;
    }
    return obj;
}
