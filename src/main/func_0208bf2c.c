#include "ffc/types.h"

uint32_t func_0208bf2c(uint32_t x) {
    uint32_t r = 0;
    uint32_t s = x - 9;
    if (s <= 0x17) {
        uint32_t one = 1;
        if (0x80001fu & (one << s)) {
            r = one;
        }
    }
    return r;
}
