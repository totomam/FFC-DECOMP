#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_0200aa8c(void *p)
{
    func_020059cc((uint8_t *)p + 0x88);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
