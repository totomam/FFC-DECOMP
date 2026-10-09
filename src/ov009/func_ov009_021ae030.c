#include "ffc/types.h"

extern void *func_020367a8(void *object);
extern void func_020695d0(void *object);

void *func_ov009_021ae030(void *object)
{
    func_020367a8((uint8_t *)object + 0xe8);
    func_020695d0(object);
    return object;
}
