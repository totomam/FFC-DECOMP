#include "ffc/types.h"

extern void func_0204b0b0(void *p, uint32_t v);
extern void func_0204b0ac(void *p, uint32_t v);

void func_0204b054(uint32_t *p)
{
    p[3] = (uint32_t)-1;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    func_0204b0b0(p, 0);
    func_0204b0ac(p, 0);
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
}
