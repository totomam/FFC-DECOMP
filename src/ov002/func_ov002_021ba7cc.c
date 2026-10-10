#include "ffc/types.h"

void func_ov002_021ba7cc(void *p)
{
    void **obj = *(void ***)((uint8_t *)p + 0x80);
    ((void (*)(void *))(((void **)*obj)[11]))(obj);
}
