#include "ffc/types.h"

extern void *func_020558d8(void *object);
extern void func_020695d0(void *object);
extern void func_02056844(void *object);

void *func_ov013_021c3794(void *p)
{
    func_020558d8((uint8_t *)p + 0xb8);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
