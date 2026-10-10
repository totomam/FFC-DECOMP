#include "ffc/types.h"

extern void func_0207fc10(void *p);

typedef struct {
    uint8_t pad[0x20];
    uint32_t *inner;
} Outer;

void func_0207f8c0(Outer *p)
{
    uint32_t *q = p->inner;
    func_0207fc10(p);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
    q[4] = 0;
    q[5] = 0;
    q[6] = 0;
}
