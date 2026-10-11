#include "ffc/types.h"

extern uint32_t func_02073868(uint32_t x);
extern uint32_t func_02073870(uint32_t x);
extern uint64_t func_0209a978(uint32_t a, uint32_t b);

uint32_t func_020751bc(uint8_t *p) {
    uint32_t r6 = func_02073868(*(uint32_t *)(p + 0x2c));
    uint32_t r4 = func_02073870(*(uint32_t *)(p + 0x2c));
    uint64_t ret = func_0209a978(*(uint32_t *)(p + 0x4250) + 1, r6);
    if ((uint32_t)(ret >> 32) == r4) {
        return 1;
    }
    return 0;
}
