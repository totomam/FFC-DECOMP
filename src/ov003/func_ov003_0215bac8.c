#include "ffc/types.h"

extern void func_ov003_021588a8(uint32_t x);

typedef struct {
    uint32_t a;
    uint32_t b;
} func_02007ab4_arg;

void func_ov003_0215bac8(func_02007ab4_arg *p)
{
    func_ov003_021588a8(p->b);
}
