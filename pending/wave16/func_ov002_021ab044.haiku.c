#include "ffc/types.h"

extern uint32_t func_ov002_021aa11c(const void *object, uint32_t bit);

uint32_t func_ov002_021ab044(void *param0)
{
    uint8_t *obj = (uint8_t *)param0;

    if (func_ov002_021aa11c(obj + 0x190, 4)) {
        return *(uint32_t *)(obj + 0x244);
    }
    return 0;
}
