#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_020695d0(void *object);

void *func_02033c00(void *object)
{
    func_020059cc((uint8_t *)object + 0xc4);
    func_020695d0(object);
    return object;
}
