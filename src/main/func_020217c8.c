#include "ffc/types.h"

extern void *func_02054844(void *object);
extern void func_02054c90(void *object);
extern void func_02056844(void *object);

void *func_020217c8(void *p)
{
    func_02054844((uint8_t *)p + 0xc);
    func_02054c90(p);
    func_02056844(p);
    return p;
}
