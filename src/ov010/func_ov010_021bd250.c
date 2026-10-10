#include "ffc/types.h"

void func_ov010_021bd250(void *p)
{
    void **obj = *(void ***)((uint8_t *)p + 0x9c);
    ((void (*)(void *))(((void **)*obj)[11]))(obj);
}
