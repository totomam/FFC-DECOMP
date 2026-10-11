#include "ffc/types.h"

extern uint32_t data_02141510;

void func_ov000_021477b4(void) {
    uint8_t *base = *(uint8_t **)((uint8_t *)&data_02141510 + 4);
    uint8_t *p = *(uint8_t **)(base + 0xa4);
    if (p) {
        p[8] = 10;
        *(uint32_t *)(p + 0x50) = 0;
    }
}
