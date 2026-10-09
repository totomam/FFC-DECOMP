#include "ffc/types.h"

extern void *func_020367a8(void *object);
extern void func_020695d0(void *object);
extern void func_02056844(void *object);

void *func_ov009_021ae044(void *p)
{
    func_020367a8((uint8_t *)p + 0xe8);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
