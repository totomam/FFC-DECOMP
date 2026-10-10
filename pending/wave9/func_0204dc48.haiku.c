#include "ffc/types.h"

extern void *func_0204dc74(void);

uint32_t func_0204dc48(void)
{
    void *p = func_0204dc74();
    if (p != 0) {
        return *(uint32_t *)((uint8_t *)p + 0x14);
    }
    return 0;
}
