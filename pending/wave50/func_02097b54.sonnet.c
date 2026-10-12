#include "ffc/types.h"

extern void *data_020b370c;
extern void func_02097cc0(void *obj);

typedef struct Obj {
    void *vt;
    uint32_t a4, a8, ac, a10, a14, a18;
    uint32_t a1c, a20;
    uint32_t a24, a28, a2c;
    uint32_t a30, a34;
    uint8_t f38, f39, f3a;
} Obj;

Obj *func_02097b54(Obj *obj, uint32_t p)
{
    uint32_t z;
    obj->a4 = 0;
    obj->a8 = 0;
    obj->ac = 0;
    obj->a10 = 0;
    obj->a14 = 0;
    obj->a18 = 0;
    obj->vt = &data_020b370c;
    obj->a1c = 0;
    obj->a20 = 0;
    obj->f38 = (p != 0);
    z = 0;
    obj->f39 = z;
    obj->f3a = z;
    obj->a4 = z;
    obj->a8 = z;
    obj->ac = z;
    obj->a14 = z;
    obj->a10 = z;
    obj->a18 = z;
    obj->a2c = z;
    obj->a28 = z;
    obj->a24 = z;
    func_02097cc0(obj);
    ((void (*)(Obj *, int, uint32_t))((void **)obj->vt)[2])(obj, z, p);
    return obj;
}
