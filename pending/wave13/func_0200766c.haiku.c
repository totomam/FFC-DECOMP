#include "ffc/types.h"

extern int func_0200764c(void *p);

uint32_t func_0200766c(void *p)
{
    if (func_0200764c(p) != 0) {
        return *(uint32_t *)((uint8_t *)p + 0x20);
    }
    return 0;
}
