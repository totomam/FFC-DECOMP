#include "ffc/types.h"

extern uint32_t data_ov000_0216b390[];

void func_ov000_021653f4(void *p)
{
    if (p != 0) {
        ((void (*)(void *))data_ov000_0216b390[1])(p);
    }
}
