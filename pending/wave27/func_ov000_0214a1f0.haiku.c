#include "ffc/types.h"

extern int func_ov000_0214a1bc(uint32_t a, uint32_t b, uint32_t c, uint16_t d);
extern const uint16_t data_ov000_0216980c[];

uint16_t func_ov000_0214a1f0(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t i;
    for (i = 0; i < 2; i++) {
        if (func_ov000_0214a1bc(a, b, c, data_ov000_0216980c[i])) {
            return data_ov000_0216980c[i];
        }
    }
    return 0;
}
