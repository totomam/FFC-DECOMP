#include "ffc/types.h"

extern uint32_t data_02fe00ac;
extern uint32_t data_02fe00a8;

uint32_t func_0204e5d8(uint32_t a) {
    if (a == 0) {
        return data_02fe00ac;
    }
    {
        uint32_t old = data_02fe00ac;
        uint32_t n = old + a;
        if (n > data_02fe00a8) {
            return (uint32_t)-1;
        }
        data_02fe00ac = n;
        return old;
    }
}
