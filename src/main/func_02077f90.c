#include "ffc/types.h"

extern uint32_t func_02077cc4(uint32_t start, uint32_t end, uint32_t c);

uint32_t func_02077f90(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t end = (b + a) & ~3u;
    uint32_t start = (a + 3) & ~3u;
    if (start > end || end - start < 0x4c) {
        return 0;
    }
    return func_02077cc4(start, end, c);
}
