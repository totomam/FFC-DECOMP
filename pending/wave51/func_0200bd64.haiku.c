#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef void (*vfn3)(void *, Vec2);

void func_0200bd64(uint8_t *p) {
    int32_t off = 0;
    Vec2 v;
    if (p[0xc8]) {
        off = -0x40;
    }
    v.y = *(int32_t *)(p + 0xb4) + *(int32_t *)(p + 0xc4) + off;
    v.x = *(int32_t *)(p + 0xb0) + *(int32_t *)(p + 0xc0);
    {
        void *o1 = *(void **)(p + 0x98);
        vfn3 f1 = (vfn3)((*(void ***)o1)[3]);
        f1(o1, v);
    }
    v.y = *(int32_t *)(p + 0xb4) + *(int32_t *)(p + 0xc4) + *(int32_t *)(p + 0xa8) + off;
    v.x = *(int32_t *)(p + 0xb0) + *(int32_t *)(p + 0xc0) + *(int32_t *)(p + 0xa4);
    {
        void *o2 = *(void **)(p + 0x94);
        vfn3 f2 = (vfn3)((*(void ***)o2)[3]);
        f2(o2, v);
    }
}
