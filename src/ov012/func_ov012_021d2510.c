#include "ffc/types.h"

extern void func_ov012_021d2198(void *p);

void func_ov012_021d2510(void *p)
{
    if (*(int32_t *)((uint8_t *)p + 0x110) == 1) {
        func_ov012_021d2198(p);
    }
}
