#include "ffc/types.h"

extern void *func_02067490(void *p, uint32_t x);
extern void func_0205f408(void *p, uint32_t x);

void func_02067e70(void *p, uint32_t x)
{
    void *r = func_02067490(p, x);
    func_0205f408(r, x);
}
