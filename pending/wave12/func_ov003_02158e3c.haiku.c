#include "ffc/types.h"

extern int func_ov003_02146464(int x);

void func_ov003_02158e3c(uint8_t *p)
{
    if (func_ov003_02146464(*(int32_t *)(p + 0x108)) != 0) {
        return;
    }
}
