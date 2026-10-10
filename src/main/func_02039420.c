#include "ffc/types.h"

extern uint32_t func_02030f9c(uint32_t first, uint32_t second, uint32_t third);
extern uint32_t data_020ae6a4;

uint32_t func_02039420(uint32_t a) {
    uint32_t r = 0;
    if (func_02030f9c(a, (uint32_t)&data_020ae6a4, 0) != r - 1) {
        r = 1;
    }
    return r;
}
