#include "ffc/types.h"

extern uint8_t data_02141510[];

void func_ov000_021477a4(void) {
    uint8_t *p = *(uint8_t **)(data_02141510 + 4);
    *(uint32_t *)(p + 0xa4) = 0;
}
