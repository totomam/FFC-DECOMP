#include "ffc/types.h"

extern uint32_t data_ov000_0217001c[];

uint32_t func_ov000_02158f58(uint32_t *p) {
    if (p != 0) {
        *p = data_ov000_0217001c[1];
    }
    return data_ov000_0217001c[0];
}
