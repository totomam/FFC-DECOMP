#include "ffc/types.h"

extern void *func_ov002_021c8f10(void *object);
extern void func_02056844(void *object);

void *func_020139e8(void *object)
{
    func_ov002_021c8f10((uint8_t *)object + 0x14);
    func_02056844(object);
    return object;
}
