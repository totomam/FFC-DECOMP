#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void *func_0203b688(void *a);
extern uint32_t func_ov003_02160ab0(void *a, S s, void *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern S data_ov003_0217a41c;

void *func_ov003_02160a7c(void *a, uint32_t b, uint32_t c)
{
    void *p = func_0203b688(a);
    uint32_t r = func_ov003_02160ab0(a, data_ov003_0217a41c, p, b, c);
    func_02056bc0(p, (void *)r);
    return p;
}
