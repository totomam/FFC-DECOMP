#include "ffc/types.h"

extern void func_ov002_021b3cf0(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint8_t data_ov002_021d5abc[];

void *func_ov002_021b385c(void *p, uint32_t a, uint32_t b, uint32_t c)
{
    func_ov002_021b3cf0(p, a, b, c, 0, 1, 1);
    *(uint8_t **)p = data_ov002_021d5abc;
    return p;
}
