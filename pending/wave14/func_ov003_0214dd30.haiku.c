#include "ffc/types.h"

extern uint32_t func_ov003_02153cb4(void);

uint32_t func_ov003_0214dd30(uint8_t *self)
{
    uint32_t v = *(uint32_t *)(self + 0x9c);
    if (v != 0) {
        return func_ov003_02153cb4();
    }
    return 0x171717;
}
