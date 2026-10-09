#include "ffc/types.h"

extern void *func_020558d8(void *object);
extern void func_020695d0(void *object);

void *func_ov013_021bcffc(void *object)
{
    func_020558d8((uint8_t *)object + 0xb8);
    func_020695d0(object);
    return object;
}
