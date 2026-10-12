#include "ffc/types.h"

extern uint32_t func_0208d570(void);

uint16_t func_ov000_02150908(void) {
    uint32_t x = func_0208d570();
    uint32_t lo = 1;
    int32_t hi = lo << 15;
    uint32_t h;
    if (x == 0) {
        return 0;
    }
    if (!(hi & x)) {
        do {
            hi = (uint16_t)((hi >> 1) | (lo << 15));
        } while (!(hi & x));
    }
    if (!(lo & x)) {
        do {
            lo = (uint16_t)((lo << 1) | 1);
        } while (!(lo & x));
    }
    h = (uint16_t)(hi << 1);
    return (uint16_t)~(h | (lo >> 1));
}
