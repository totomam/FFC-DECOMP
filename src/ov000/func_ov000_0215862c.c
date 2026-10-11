#include "ffc/types.h"

extern int32_t func_ov000_02148cbc(uint8_t *dst, uint32_t size, uint32_t idx);

int func_ov000_0215862c(uint8_t *base, uint32_t start, uint32_t len)
{
    uint32_t i;
    uint32_t end = start + len;

    for (i = start; i < end; i++) {
        if (func_ov000_02148cbc(base + ((i - start) << 8), 0x100, i) == -1) {
            return 0;
        }
    }
    return 1;
}
