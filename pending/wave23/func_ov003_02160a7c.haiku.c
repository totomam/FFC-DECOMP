#include "ffc/types.h"

extern void *func_0203b688(void *a);
extern uint32_t func_ov003_02160ab0(void *a, uint32_t w1, uint32_t w2, void *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov003_0217a41c[2];

void *func_ov003_02160a7c(void *a, uint32_t b, uint32_t c)
{
    void *p = func_0203b688(a);
    uint32_t r = func_ov003_02160ab0(a, data_ov003_0217a41c[0], data_ov003_0217a41c[1], p, b, c);
    func_02056bc0(p, (void *)r);
    return p;
}
