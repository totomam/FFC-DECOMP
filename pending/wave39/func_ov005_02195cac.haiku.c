#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef void (*VFn)(void *self, Vec2 v);

typedef struct {
    uint8_t pad0[0x24];
    void *obj24;
    void *obj28;
    Vec2 pos;
    Vec2 pos2;
    uint8_t pad1[4];
    int32_t field40;
    int32_t field44;
} Self;

void func_ov005_02195cac(Self *self, Vec2 a, int32_t c)
{
    Vec2 t[2];
    self->pos2.x = self->pos.x + a.x;
    self->pos2.y = self->pos.y + a.y;
    t[1] = self->pos;
    ((VFn *)(*(void **)self->obj24))[3](self->obj24, t[1]);
    if (self->field44 != 2) {
        t[0].x = self->pos.x;
        t[0].y = self->pos.y;
        ((VFn *)(*(void **)self->obj28))[3](self->obj28, t[0]);
    }
    self->field40 = 0;
}
