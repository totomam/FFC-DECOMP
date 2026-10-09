#include "ffc/types.h"

extern void func_0202a9ac(void *cursor);
extern uint32_t func_0202a9ec(uint32_t a, uint32_t b);
extern void func_02056844(uint32_t a);

typedef struct {
    uint32_t count;
    uint32_t f4;
    uint32_t f8;
} S;

void func_0204f948(uint32_t *out, S *p, uint32_t x)
{
    uint32_t v = x;
    if (v == p->f8) {
        func_0202a9ac(&x);
        p->f8 = x;
    }
    *out = func_0202a9ec(v, p->f4);
    func_02056844(v);
    p->count--;
}
