#include "ffc/types.h"

extern void *func_02057a70(void *object);
extern void func_02054844(void *object);
extern void func_02056844(void *object);

void *func_02054338(void *p)
{
    func_02057a70((uint8_t *)p + 0xc);
    func_02054844(p);
    func_02056844(p);
    return p;
}
