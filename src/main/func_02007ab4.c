#include "ffc/types.h"

extern void func_0207accc(uint32_t x);

typedef struct {
    uint32_t a;
    uint32_t b;
} func_02007ab4_arg;

void func_02007ab4(func_02007ab4_arg *p)
{
    func_0207accc(p->b);
}
