#include "ffc/types.h"

extern void func_0207ced8(void *obj, int a, int b);
extern uint8_t data_02140d00[];

typedef struct Inner {
    uint32_t pad[3];
    uint32_t c;
    uint32_t d;
    uint32_t e;
} Inner;

typedef struct Outer {
    Inner *inner;
} Outer;

void func_0207d370(Outer *p)
{
    func_0207ced8(p, 2, 1);
    p->inner->c = 0;
    p->inner->d = (uint32_t)data_02140d00;
    p->inner->e = 1;
    func_0207ced8(p, 6, 1);
}
