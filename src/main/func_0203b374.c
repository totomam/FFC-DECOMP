#include "ffc/types.h"

extern void *func_ov011_021bd1f4(void *object);
extern void func_02056db0(void *object);
extern void func_02056844(void *object);

void *func_0203b374(void *p)
{
    func_ov011_021bd1f4((uint8_t *)p + 0x98);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
