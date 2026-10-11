#include "ffc/types.h"

extern int func_ov000_021592ac(void *a, uint8_t *b, int c, int d);
extern uint32_t func_02093748(uint8_t *a, int b, int c);
extern uint8_t data_ov000_0216b004[];

uint8_t func_ov000_02163aa4(int x)
{
    uint8_t buf[4] = {0, 0, 0, 0};
    uint8_t r = 0;
    if (func_ov000_021592ac(data_ov000_0216b004, buf, x + 8, 0x2f) > 0) {
        r = (uint8_t)func_02093748(buf, 0, 10);
    }
    return r;
}
