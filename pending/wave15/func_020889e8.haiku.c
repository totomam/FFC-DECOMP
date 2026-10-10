/* cflags: -nothumb */
#include "ffc/types.h"

extern uint32_t func_tail(uint32_t x);

uint32_t func_020889e8(uint32_t x) {
    if (x >= 4) {
        return func_tail(x - 4);
    }
    return x - 4;
}
