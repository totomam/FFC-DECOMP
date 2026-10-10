#include "ffc/types.h"

extern uint32_t func_020901a4(uint32_t x);

uint32_t func_020901dc(uint32_t x) {
    uint32_t v = x;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    return 32 - func_020901a4(v);
}
