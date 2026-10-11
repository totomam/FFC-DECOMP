#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_ov002_021ad4e4(uint32_t a, uint32_t b);
extern void func_ov002_021ae4e4(Pair *out, uint32_t x, uint32_t y);

void func_ov002_021ad534(Pair *out, uint32_t a, uint32_t b)
{
    Pair tmp;
    uint32_t hi;
    uint32_t lo;
    uint32_t r = func_ov002_021ad4e4(a, b);
    func_ov002_021ae4e4(&tmp, r, a);
    hi = tmp.b;
    lo = tmp.a;
    out->a = lo;
    out->b = hi;
}
