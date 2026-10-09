#include "ffc/types.h"

extern void *func_ov009_0219a484(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_ov009_0219a544(void *p)
{
    func_ov009_0219a484((uint8_t *)p + 0x94);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
