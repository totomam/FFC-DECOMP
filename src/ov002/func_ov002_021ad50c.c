#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern uint32_t func_ov002_021ad4e4(uint32_t a, uint32_t b);
extern void func_ov002_021ae4e4(S8 *out, uint32_t a, uint32_t b);

void func_ov002_021ad50c(S8 *out, uint32_t p1, uint32_t p2)
{
    S8 tmp;
    uint32_t r;

    r = func_ov002_021ad4e4(p1, p2);
    func_ov002_021ae4e4(&tmp, r, p1);
    out->a = tmp.a;
    out->b = tmp.b;
}
