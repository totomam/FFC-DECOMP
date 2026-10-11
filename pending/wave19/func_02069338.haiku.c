#include "ffc/types.h"

typedef void (*VFn)(void *out, void *obj);

typedef struct {
    int32_t v[4];
} Buf;

void func_02069338(int32_t *dst, void *obj)
{
    Buf buf;
    Buf *p = &buf;
    int32_t *q = dst;
    VFn f = ((VFn *)(*(void **)obj))[4];
    f(p, obj);
    q[0] = (p->v[0] + p->v[2]) >> 1;
    q[1] = (p->v[1] + p->v[3]) >> 1;
}
