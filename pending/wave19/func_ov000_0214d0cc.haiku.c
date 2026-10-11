#include "ffc/types.h"

extern uint32_t *data_ov000_02169a34;
extern uint32_t data_ov000_0216bcb0;
extern uint32_t data_ov000_0216bc70;
extern uint32_t data_ov000_0216bc8c;
extern uint32_t data_ov000_0216bcd0[];
extern uint32_t data_ov000_0216e00c[];

void func_ov000_0214d0cc(void) {
    uint32_t *p = data_ov000_02169a34;
    data_ov000_0216bcb0 = p[1];
    data_ov000_0216bc70 = p[2];
    data_ov000_0216bc8c = p[3];
    data_ov000_0216bcd0[0] = p[4];
    data_ov000_0216bcd0[1] = p[5];
    data_ov000_0216e00c[2] |= 2;
}
