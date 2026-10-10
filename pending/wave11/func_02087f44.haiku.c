/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_02087f44(uint32_t clear, uint32_t set) {
    uint32_t v = __MRC(15, 0, 5, 0, 2);
    v &= ~clear;
    v |= set;
    __MCR(15, 0, v, 5, 0, 2);
}
