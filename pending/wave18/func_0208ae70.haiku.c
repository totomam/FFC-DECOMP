#include "ffc/types.h"

extern uint8_t data_021434e4[];
extern uint32_t func_0208ae78(uint32_t mask);

uint32_t func_0208ae70(uint32_t mask) {
    uint16_t flags = *(uint16_t *)(data_021434e4 + 0x3a);
    if (flags & mask) {
        return func_0208ae78(mask);
    }
    return mask;
}
