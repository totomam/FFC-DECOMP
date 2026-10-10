#include "ffc/types.h"

extern void func_02064b44(void *p, uint32_t v);

void func_02064b1c(void *p)
{
    if (((uint8_t *)p)[0x2c]) {
        func_02064b44(p, 0);
    }
}
