#include "ffc/types.h"

extern uint32_t func_ov000_02152b68(void);
extern uint8_t data_ov000_0216e26c[];

uint32_t func_ov000_02152818(void)
{
    uint32_t r4 = 0xff;
    uint32_t r0 = func_ov000_02152b68();
    if (r0 >= 0xa && r0 <= 0x10) {
        uint8_t *p = *(uint8_t **)(data_ov000_0216e26c + 0xc);
        r4 = p[0x17];
    }
    return r4;
}
