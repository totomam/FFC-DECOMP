#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
} S;

typedef struct {
    uint8_t pad[0x1c];
    void *obj;
    S s;
} Ctx;

typedef void (*VFn)(void *, S);

void func_02065dec(Ctx *p)
{
    void **vt = *(void ***)p->obj;
    ((VFn)vt[16])(p->obj, p->s);
}
