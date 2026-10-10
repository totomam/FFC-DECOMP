#include "ffc/types.h"

uint8_t func_ov000_02151484(int32_t x) {
    if (x & 2) {
        return (uint8_t)((uint32_t)x >> 2);
    }
    return (uint8_t)((x >> 2) + 0x19);
}
