#include "ffc/types.h"

extern int32_t func_ov001_02185e8c(void *p, void *q, int32_t r);
extern uint8_t data_ov000_0216b11c[];
extern uint8_t data_ov000_0216b128[];
extern uint8_t data_ov000_0216b0e8[];
extern uint8_t data_ov000_0216b0dc[];
extern uint8_t data_ov000_0216b01c[];

int32_t func_ov000_021618d8(void *p)
{
    if (func_ov001_02185e8c(p, data_ov000_0216b11c, -1) == -1) {
        return 0;
    }
    if (func_ov001_02185e8c(p, data_ov000_0216b128, -1) == -1) {
        return 0;
    }
    if (func_ov001_02185e8c(p, data_ov000_0216b0e8, -1) == -1) {
        return 0;
    }
    if (func_ov001_02185e8c(p, data_ov000_0216b0dc, -1) == -1) {
        return 0;
    }
    return func_ov001_02185e8c(p, data_ov000_0216b01c, 0);
}
