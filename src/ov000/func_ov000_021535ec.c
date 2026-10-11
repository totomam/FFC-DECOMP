#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(uint32_t x);
extern int func_02092a04(void *a, void *b, uint32_t c);
extern uint8_t data_ov000_02169644[];

int func_ov000_021535ec(uint8_t *p) {
    uint32_t v = (uint32_t)(func_ov000_02152ae4(0x10)[0x14bc] << 28) >> 28;
    if (v == 0 || v == 6) {
        if (func_02092a04(p + 0xc, data_ov000_02169644, 8) == 0) {
            return 0x14;
        }
    }
    return 0;
}
