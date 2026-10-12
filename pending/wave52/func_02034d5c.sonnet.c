#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Vec2;
typedef struct VT { void *a[4]; Vec2 (*get)(void *); } VT;
typedef struct Obj { VT *vt; } Obj;
typedef struct Self { uint8_t pad[0x8c]; Obj *objs[21]; uint32_t count; } Self;

extern uint32_t func_0203b6fc(uint32_t p);
extern int32_t func_02062a78(void *obj, Vec2 a, Vec2 b, int32_t c, int32_t s5);
extern void func_02056bc0(void *object, void *node);

uint32_t func_02034d5c(Self *self, Vec2 off, int32_t c, int32_t s5)
{
    uint32_t handle;
    uint32_t i;

    handle = func_0203b6fc((uint32_t)off.y);
    for (i = 0; i < self->count; i++) {
        Vec2 v1, v2, p;
        v1 = self->objs[i]->vt->get(self->objs[i]);
        p.x = v1.x + off.x;
        p.y = v1.y + off.y;
        v2 = self->objs[i]->vt->get(self->objs[i]);
        func_02056bc0((void *)handle, (void *)func_02062a78(self->objs[i], v2, p, c, s5));
    }
    return handle;
}
