#include "ffc/types.h"
typedef struct O O;
typedef struct { void *p[4]; void (*f)(int32_t *, O *); } VT;
struct O { VT *vt; uint8_t pad[0x90]; uint32_t flags; };
void func_02005904(int32_t *out, O *obj) {
    int32_t v[4];
    obj->vt->f(v, obj);
    if ((obj->flags & 3) == 0) out[0] = (v[0] + v[2]) >> 1;
    else if (obj->flags & 1) out[0] = v[0];
    else out[0] = v[2];
    if ((obj->flags & 0xc) == 0) out[1] = (v[1] + v[3]) >> 1;
    else if (obj->flags & 4) out[1] = v[1];
    else out[1] = v[3];
}
