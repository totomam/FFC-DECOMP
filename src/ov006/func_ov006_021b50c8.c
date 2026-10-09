#include "ffc/types.h"

extern void func_ov006_021b509c(uint32_t x);

typedef struct {
    uint32_t a;
    uint32_t b;
} func_02007ab4_arg;

void func_ov006_021b50c8(func_02007ab4_arg *p)
{
    func_ov006_021b509c(p->b);
}
