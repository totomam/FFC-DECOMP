#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c;
} Trip;

typedef struct {
    uint32_t pad[2];
    Trip *dst;
} Obj;

void func_02071f64(Obj *p, const Trip *src)
{
    *p->dst = *src;
}
