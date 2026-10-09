#include "ffc/types.h"

extern void *func_ov011_021bd1f4(void *object);
extern void func_02056db0(void *object);

void *func_0203b360(void *object)
{
    func_ov011_021bd1f4((uint8_t *)object + 0x98);
    func_02056db0(object);
    return object;
}
