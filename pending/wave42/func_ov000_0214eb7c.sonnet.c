#include "ffc/types.h"

extern int func_ov000_0214eb34(uint32_t a, uint32_t b);
extern int func_ov000_0214eac8(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov000_0216bc70;
extern uint32_t data_ov000_0216bcb0;
extern uint32_t data_ov000_0216bc8c;
extern uint32_t data_ov000_0216bcd0[2];

int func_ov000_0214eb7c(void) {
    uint32_t m = data_ov000_0216bc70;
    if (m == 0 || ((~m + 1) & ~m) != 0) return 0;
    if (func_ov000_0214eb34(m, data_ov000_0216bcb0) == 0) return 0;
    if (data_ov000_0216bc8c != 0) {
        if (func_ov000_0214eb34(data_ov000_0216bc70, data_ov000_0216bc8c) == 0
            || (data_ov000_0216bc70 != 0xFFFFFFFFu
                && (data_ov000_0216bcb0 & data_ov000_0216bc70) != (data_ov000_0216bc8c & data_ov000_0216bc70))
            || data_ov000_0216bcb0 == data_ov000_0216bc8c) {
            data_ov000_0216bc8c = 0;
        }
    }
    if (func_ov000_0214eac8(data_ov000_0216bc70, data_ov000_0216bcd0[0], data_ov000_0216bcb0) == 0)
        data_ov000_0216bcd0[0] = 0;
    if (func_ov000_0214eac8(data_ov000_0216bc70, data_ov000_0216bcd0[1], data_ov000_0216bcb0) == 0)
        data_ov000_0216bcd0[1] = 0;
    return 1;
}
