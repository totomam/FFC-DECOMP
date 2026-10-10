#include "ffc/types.h"

extern void func_02034300(void *p, int32_t x);

void func_02034670(void *p)
{
    func_02034300(p, 0);
    if (*(int32_t *)((uint8_t *)p + 0x34) != 0) {
        *(int32_t *)((uint8_t *)p + 0x34) -= 1;
    }
}
