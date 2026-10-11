#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);

uint32_t func_ov000_0214fec4(void)
{
    uint8_t *base = func_ov000_0214fa54();
    uint32_t *p = *(uint32_t **)(base + 0x12c4);
    if (p != 0 && *(uint32_t *)(base + 0x12c8) > 0xc) {
        return p[1];
    }
    return 0;
}
