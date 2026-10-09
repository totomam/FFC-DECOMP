#include "ffc/types.h"

void func_ov008_0219f844(void *p)
{
    void **obj = *(void ***)((uint8_t *)p + 0xa4);
    ((void (*)(void *))(((void **)*obj)[10]))(obj);
}
