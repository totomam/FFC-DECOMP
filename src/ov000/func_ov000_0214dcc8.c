#include "ffc/types.h"

extern void func_ov000_0214dcd4(uint32_t x);

typedef struct {
    uint32_t a;
    uint32_t b;
} func_02007ab4_arg;

void func_ov000_0214dcc8(func_02007ab4_arg *p)
{
    func_ov000_0214dcd4(p->b);
}
