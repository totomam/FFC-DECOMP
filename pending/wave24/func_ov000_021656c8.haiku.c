#include "ffc/types.h"

extern int32_t func_ov000_02165560(uint32_t a, uint32_t b, uint32_t c, uint32_t *d, uint32_t e);

int func_ov000_021656c8(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3) {
    if (func_ov000_02165560(a0, 0xffff, 0x1002, &a1, 4) == -1) {
        return 0;
    }
    return 1;
}
