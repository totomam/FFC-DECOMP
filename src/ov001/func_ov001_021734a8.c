#include "ffc/types.h"

extern void *func_ov001_02172654(void);

uint32_t func_ov001_021734a8(void)
{
    void *p = func_ov001_02172654();
    if (p != 0) {
        return *(uint32_t *)((uint8_t *)p + 0x10);
    }
    return 0;
}
