#include "ffc/types.h"

extern uint32_t func_ov000_02165c18(uint32_t a);
extern uint64_t func_0209a978(uint32_t x, uint32_t d);

uint32_t func_ov000_02165c48(uint32_t a, uint32_t b) {
    uint32_t d = b - a;
    if (d != 0) {
        uint32_t r = func_ov000_02165c18(a);
        uint64_t t = func_0209a978(r, d);
        return (uint32_t)(t >> 32) + a;
    }
    return a;
}
