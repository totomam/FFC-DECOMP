#include "ffc/types.h"

extern uint8_t data_02141510[];
extern uint32_t data_ov000_0216bc60[];
extern uint16_t func_ov000_02147704(void);

void func_ov000_021477d0(uint16_t r0, uint16_t r1, uint32_t r2)
{
    uint8_t *obj = *(uint8_t **)(*(uint8_t **)(data_02141510 + 4) + 0xa4);
    uint16_t t;

    if (obj == 0) {
        return;
    }
    if (r2 == 0x7f000001) {
        r2 = data_ov000_0216bc60[0x50 / 4];
    }
    *(uint16_t *)(obj + 0x1a) = r1;
    t = *(uint16_t *)(obj + 0x1a);
    *(uint16_t *)(obj + 0x18) = t;
    *(uint32_t *)(obj + 0x20) = r2;
    *(uint32_t *)(obj + 0x1c) = r2;
    if (r0 == 0) {
        *(uint16_t *)(obj + 0xa) = func_ov000_02147704();
    } else {
        *(uint16_t *)(obj + 0xa) = r0;
    }
}
