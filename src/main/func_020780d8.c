#include "ffc/types.h"

extern uint32_t func_02078004(uint32_t start, uint32_t end, uint32_t c);

uint32_t func_020780d8(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t end = (b + a) & ~3u;
    uint32_t start = (a + 3) & ~3u;
    if (start > end || end - start < 0x30) {
        return 0;
    }
    return func_02078004(start, end, c);
}
