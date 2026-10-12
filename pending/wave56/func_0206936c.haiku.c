#include "ffc/types.h"

typedef void (*VFn)(void *out, void *self);
typedef struct Obj {
    VFn *vt;
} Obj;

void func_0206936c(uint32_t *out, Obj *obj, uint32_t idx)
{
    uint32_t buf[4];
    uint32_t b[2];
    uint32_t x, y;

    obj->vt[6](buf, obj);
    switch (idx) {
    default:
        obj->vt[5](b, obj);
        x = b[0];
        out[2] = x;
        y = b[1];
        out[3] = y;
        out[0] = x;
        out[1] = y;
        return;
    case 1:
        y = buf[1];
        out[0] = buf[0];
        out[1] = y;
        y = buf[3];
        out[2] = buf[0];
        out[3] = y;
        return;
    case 3:
        y = buf[1];
        out[0] = buf[2];
        out[1] = y;
        y = buf[3];
        out[2] = buf[2];
        out[3] = y;
        return;
    case 4:
        y = buf[3];
        out[0] = buf[0];
        out[1] = y;
        y = buf[3];
        out[2] = buf[2];
        out[3] = y;
        return;
    case 2:
        y = buf[1];
        out[0] = buf[0];
        out[1] = y;
        y = buf[1];
        out[2] = buf[2];
        out[3] = y;
        return;
    }
}
