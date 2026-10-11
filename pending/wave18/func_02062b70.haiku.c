#include "ffc/types.h"

extern void func_0205729c(void *p);

typedef struct {
    uint32_t a;
    uint32_t b;
} S2;

typedef void (*VFn)(void *, S2);

void func_02062b70(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    S2 s;
    void *o;
    VFn f;

    func_0205729c(p0);
    s.a = *(uint32_t *)(p + 0x34);
    s.b = *(uint32_t *)(p + 0x38);
    o = *(void **)(p + 0x54);
    f = (VFn)((void **)*(void **)o)[3];
    f(o, s);
}
