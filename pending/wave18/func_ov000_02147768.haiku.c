#include "ffc/types.h"

extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern uint8_t data_ov000_0216bce0[];
extern uint8_t data_ov000_0216bc60[];

uint32_t func_ov000_02147768(void) {
    uint64_t r;
    uint64_t s;
    r = func_0209a71c(*(uint64_t *)(data_ov000_0216bce0 + 0),
                      *(uint64_t *)(data_ov000_0216bc60 + 0x78));
    s = *(uint64_t *)(data_ov000_0216bce0 + 8) + r;
    *(uint64_t *)(data_ov000_0216bc60 + 0x78) = s;
    return (uint32_t)(s >> 32);
}
