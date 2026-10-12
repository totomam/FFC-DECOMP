#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t w;
} Quad;

typedef struct {
    uint8_t pad[0x1c];
    void *obj;
    int32_t a;
    int32_t b;
} Self;

int32_t func_02065e10(Self *self, Vec2 p, Vec2 q) {
    Quad r;
    void **vt;

    r = (Quad){ p.x + self->a, p.y + self->b, q.x + self->a, q.y + self->b };
    vt = *(void ***)self->obj;
    return ((int32_t (*)(void *, Quad))vt[0x10])(self->obj, r);
}
