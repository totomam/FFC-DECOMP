#include "ffc/types.h"

void func_ov008_021a0b38(void *p)
{
    void **obj = *(void ***)((uint8_t *)p + 0xa8);
    ((void (*)(void *))(((void **)*obj)[10]))(obj);
}
