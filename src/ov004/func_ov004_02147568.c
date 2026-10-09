#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_020695d0(void *object);
extern void func_02056844(void *object);

void *func_ov004_02147568(void *p)
{
    func_020059cc((uint8_t *)p + 0xb8);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
