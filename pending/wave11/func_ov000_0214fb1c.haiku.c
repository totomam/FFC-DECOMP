#include "ffc/types.h"

extern uint32_t data_ov000_0216e214[];

void func_ov000_0214fb1c(void) {
    uint8_t *base = (uint8_t *)data_ov000_0216e214;
    uint8_t *p = *(uint8_t **)(base + 4);
    *(uint32_t *)(p + 0x12d4) = 0xaaa082;
}
