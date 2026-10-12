#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Vec2;

extern uint32_t func_0203b6fc(uint32_t p);
extern int32_t func_02062a78(void *obj, Vec2 a, Vec2 b, int32_t c, int32_t s5);
extern void func_02056bc0(void *object, void *node);

typedef Vec2 (*GetPosFn)(void *self);

uint32_t func_02034d5c(uint8_t *self, Vec2 off, int32_t c, int32_t s5)
{
    uint32_t handle;
    uint32_t i;

    handle = func_0203b6fc((uint32_t)off.y);
    for (i = 0; i < *(uint32_t *)(self + 0xe0); i++) {
        Vec2 v1;
        Vec2 v2;
        Vec2 p;
        int32_t r;

        v1 = ((GetPosFn)(((void **)(*(void **)(*(void **)(self + 0x8c + i * 4))))[4]))(*(void **)(self + 0x8c + i * 4));
        p.x = v1.x + off.x;
        p.y = v1.y + off.y;
        v2 = ((GetPosFn)(((void **)(*(void **)(*(void **)(self + 0x8c + i * 4))))[4]))(*(void **)(self + 0x8c + i * 4));
        r = func_02062a78(*(void **)(self + 0x8c + i * 4), v2, p, c, s5);
        func_02056bc0((void *)handle, (void *)r);
    }
    return handle;
}
