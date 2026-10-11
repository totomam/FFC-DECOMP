#include "ffc/types.h"

extern int func_ov000_02155220(void *p);

int func_ov000_021552f4(uint8_t *p)
{
    if (func_ov000_02155220(p + 0x10) != 0 && *(int32_t *)(p + 0x1c) > 0) {
        return 1;
    }
    return 0;
}
