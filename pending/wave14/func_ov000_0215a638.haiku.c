#include "ffc/types.h"

extern uint8_t data_ov000_02170060[];

uint32_t func_ov000_0215a638(void) {
    uint8_t *p = *(uint8_t **)data_ov000_02170060;
    if (p != 0) {
        return *(uint32_t *)(p + 0x1c);
    }
    return 0;
}
