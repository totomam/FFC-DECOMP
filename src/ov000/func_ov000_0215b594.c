#include "ffc/types.h"

extern uint8_t data_ov000_02170064[];

uint32_t func_ov000_0215b594(void) {
    uint8_t *p = *(uint8_t **)(data_ov000_02170064 + 0x4);
    if (p != 0) {
        return *(uint32_t *)(p + 0x24);
    }
    return 0;
}
