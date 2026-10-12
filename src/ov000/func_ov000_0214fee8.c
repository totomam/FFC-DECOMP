#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);
extern uint32_t func_ov000_0215045c(uint8_t *p, uint32_t x);

uint8_t *func_ov000_0214fee8(uint32_t a)
{
    uint8_t *base = func_ov000_0214fa54();
    uint8_t *node = *(uint8_t **)(base + 0x12c4);
    uint8_t *r4;

    r4 = 0;
    if (a == 0) {
        return r4;
    }
    if (node != 0 && *(uint32_t *)(base + 0x12c8) > 0xc) {
        r4 = *(uint8_t **)(node + 4);
        while (r4 != 0) {
            if (func_ov000_0215045c((uint8_t *)((uint32_t)r4 + 0x10) + 4, a) != 0) {
                break;
            }
            r4 = *(uint8_t **)(r4 + 0xc);
        }
    }
    return r4;
}
