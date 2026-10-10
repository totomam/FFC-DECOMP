#include "ffc/types.h"

extern uint32_t data_ov000_0217001c[];

void func_ov000_02159014(uint32_t a, uint32_t b) {
    if (data_ov000_0217001c[0] != 9) {
        data_ov000_0217001c[0] = a;
        data_ov000_0217001c[1] = b;
    }
}
