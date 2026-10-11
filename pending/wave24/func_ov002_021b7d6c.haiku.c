#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
} S;

typedef struct {
    S s;
    uint32_t x, y;
} T;

extern int func_ov002_021b7ce8(void *p, S s);

int func_ov002_021b7d6c(void *p, S s)
{
    volatile T t;
    t.s = s;
    t.x = 0;
    t.y = 0;
    return func_ov002_021b7ce8(p, s);
}
