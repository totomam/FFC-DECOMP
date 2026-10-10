#include "ffc/types.h"

void func_ov005_02197250(void *p)
{
    void **obj = *(void ***)((uint8_t *)p + 0x80);
    ((void (*)(void *))(((void **)*obj)[11]))(obj);
}
