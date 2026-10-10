#include "ffc/types.h"

typedef struct {
    uint32_t f[6];
} Blk;

void func_0205b04c(Blk *p)
{
    uint32_t *q = &p->f[2];
    p->f[0] = 0;
    p->f[1] = 0;
    p->f[2] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
}
