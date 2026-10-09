#include "ffc/types.h"

extern void *func_020367a8(void *object);
extern void func_02039738(void *object);
extern void func_02056844(void *object);

void *func_0203b2d4(void *p)
{
    func_020367a8((uint8_t *)p + 0xa0);
    func_02039738(p);
    func_02056844(p);
    return p;
}
