#include "ffc/types.h"

extern uint32_t func_02007654(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020073e4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

uint32_t func_02007494(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    if (func_02007654(a, b, c, d)) {
        return 1;
    }
    return func_020073e4(a, b, c, d);
}
