#include "ffc/types.h"

extern void func_020870a0(void *object);

void func_02087248(void **p)
{
    void *obj = *p;
    *p = 0;
    *(uint32_t *)((uint8_t *)obj + 0xb0) = 0;
    func_020870a0(obj);
}
