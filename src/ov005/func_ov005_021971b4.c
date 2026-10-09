#include "ffc/types.h"

void func_ov005_021971b4(void *p)
{
    void **obj = *(void ***)((uint8_t *)p + 0x84);
    ((void (*)(void *))(((void **)*obj)[10]))(obj);
}
