#include "ffc/types.h"

#define VF(o, off) (((void **)*(void **)(o))[(off) / 4])

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef void (*VSet2)(void *, int32_t, int32_t);
typedef void (*VSetV)(void *, Vec2);
typedef void (*VGet)(Vec2 *, void *);

void func_ov007_0219a8f4(uint8_t *self, int32_t flag)
{
    void *obj;
    void *pos;
    int32_t kx;
    int32_t ky;

    if (flag != 0) {
        Vec2 arg;
        Vec2 out;
        kx = 2;
        ky = 0;
        obj = *(void **)(self + 0xa8);
        ((VSet2)VF(obj, 0x38))(obj, kx, ky);
        Vec2 *o = &out;
        int32_t ox, oy, ty;
        if (*(uint8_t *)(self + 0xa4) == 0) {
            pos = *(void **)(self + 0xb0);
            ((VGet)VF(pos, 0x18))(o, pos);
            oy = o->y;
            ox = o->x;
            ty = *(int32_t *)(self + 0xa0) - oy / 2;
            arg.x = *(int32_t *)(self + 0x9c) - ox / 2 - 4;
            arg.y = ty;
            ((VSetV)VF(*(void **)(self + 0xb0), 0xc))(*(void **)(self + 0xb0), arg);
            obj = *(void **)(self + 0xac);
            ((VSet2)VF(obj, 0x38))(obj, kx, ky);
        }
    } else {
        Vec2 arg;
        Vec2 out;
        kx = 1;
        ky = 0;
        obj = *(void **)(self + 0xa8);
        ((VSet2)VF(obj, 0x38))(obj, kx, ky);
        Vec2 *o = &out;
        int32_t ox, oy, ty;
        if (*(uint8_t *)(self + 0xa4) == 0) {
            pos = *(void **)(self + 0xb0);
            ((VGet)VF(pos, 0x18))(o, pos);
            oy = o->y;
            ox = o->x;
            ty = *(int32_t *)(self + 0xa0) - oy / 2;
            arg.x = *(int32_t *)(self + 0x9c) - ox / 2 + 4;
            arg.y = ty;
            ((VSetV)VF(*(void **)(self + 0xb0), 0xc))(*(void **)(self + 0xb0), arg);
            obj = *(void **)(self + 0xac);
            ((VSet2)VF(obj, 0x38))(obj, kx, ky);
        }
    }
}
