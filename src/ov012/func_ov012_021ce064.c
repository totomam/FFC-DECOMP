#include "ffc/types.h"

void func_ov012_021ce064(void *p)
{
    void **obj = *(void ***)((uint8_t *)p + 0xa8);
    ((void (*)(void *))(((void **)*obj)[10]))(obj);
}
