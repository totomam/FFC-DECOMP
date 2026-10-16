#include "ffc/types.h"
extern uint8_t data_ov003_0217a98c[];
void func_ov003_02165ed8(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    p[5] = a;
    p[8] = d;
    p[3] &= ~0xff;
    p[0] = (uint32_t)data_ov003_0217a98c;
    p[6] = b;
    p[7] = c;
    p[9] = e;
}
