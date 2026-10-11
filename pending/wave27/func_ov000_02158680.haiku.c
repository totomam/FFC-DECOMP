#include "ffc/types.h"

extern uint32_t func_ov000_02148cbc(uint8_t *p, uint32_t size, uint32_t id);

uint32_t func_ov000_02158680(uint8_t *base, uint32_t start, uint32_t count)
{
    uint32_t i;
    uint32_t end = start + count;

    for (i = start; i < end; i++) {
        uint32_t r = func_ov000_02148cbc(base + ((i - start) << 9), 0x200, i + 0x11);
        if (r == 0xFFFFFFFF) {
            return 0;
        }
    }
    return 1;
}
