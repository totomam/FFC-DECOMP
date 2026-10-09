#include "ffc/types.h"

extern void *func_02054a88(void *object);
extern void func_02057698(void *object);
extern void func_02056844(void *object);

void *func_ov004_021567d0(void *p)
{
    func_02054a88((uint8_t *)p + 0x2c);
    func_02057698(p);
    func_02056844(p);
    return p;
}
