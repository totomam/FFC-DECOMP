#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Vec3Tmp;

extern Vec3Tmp func_ov003_0215b62c(void *self);
extern void func_02023e9c(void *a, void *b);

void func_ov003_021588a8(void *self)
{
    uint8_t *p = (uint8_t *)self;
    Vec3Tmp v;
    Vec3Tmp tmp;
    uint32_t *obj;
    uint32_t *inner;

    obj = *(uint32_t **)(p + 0x2f0);
    if (obj != 0) {
        inner = *(uint32_t **)((uint8_t *)obj + 0x34);
        if (*(uint32_t *)((uint8_t *)inner + 0x2d4) == 0) {
            tmp = func_ov003_0215b62c(p);
            v = tmp;
            *(uint32_t *)(p + 0x2f8) = v.a;
            *(uint32_t *)(p + 0x2fc) = v.b;
            *(uint32_t *)(p + 0x300) = v.c;
            obj = *(uint32_t **)(p + 0x2f0);
            func_02023e9c(*(void **)((uint8_t *)obj + 0x34), p + 0x2f8);
        }
    }
}
