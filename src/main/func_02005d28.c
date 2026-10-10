#include "ffc/types.h"

extern void func_02056858(uint32_t v);

void *func_02005d28(uint32_t *p)
{
    func_02056858(p[0]);
    func_02056858(p[1]);
    return p;
}
