#include "ffc/types.h"
extern uint32_t func_020817c8(int32_t first, int32_t second);
typedef struct { uint32_t a, b; } P;
void func_ov003_02147830(P *o, P *p, int32_t t, ...) {
    int32_t *ap = &t;
    uint32_t y = func_020817c8(p->b, *ap);
    o->a = func_020817c8(p->a, *ap);
    o->b = y;
}
