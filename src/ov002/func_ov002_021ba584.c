#include "ffc/types.h"

void func_ov002_021ba584(void *p)
{
    void **obj = *(void ***)((uint8_t *)p + 0x80);
    ((void (*)(void *))(((void **)*obj)[10]))(obj);
}
