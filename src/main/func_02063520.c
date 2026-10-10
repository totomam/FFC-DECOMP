#include "ffc/types.h"

extern void func_0206345c(uint32_t v);

uint32_t *func_02063520(uint32_t *p, uint32_t *q)
{
    uint32_t v = *q;
    *p = v;
    func_0206345c(v);
    return p;
}
