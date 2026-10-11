#include "ffc/types.h"

extern uint32_t func_ov000_0215a638(void);
extern uint32_t func_ov000_021553c4(uint32_t a, uint8_t *b);
extern uint8_t data_ov000_0217004c[];

uint32_t func_ov000_0215999c(uint32_t a)
{
    uint8_t *base = *(uint8_t **)(data_ov000_0217004c + 0xc);
    uint8_t *r5 = *(uint8_t **)(base + 0x18);
    uint32_t r;

    if (r5 == 0) {
        return 0;
    }
    r = func_ov000_0215a638();
    r = func_ov000_021553c4(r, r5 + a * 12);
    if (r == 0 || r == (uint32_t)-1) {
        return 0;
    }
    return r;
}
