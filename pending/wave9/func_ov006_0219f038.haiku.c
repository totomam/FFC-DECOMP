#include "ffc/types.h"

uint16_t func_ov006_0219f038(int32_t x) {
    uint32_t lo = (uint8_t)(x >> 8);
    uint32_t hi = (x << 8) & 0xff00;
    return (uint16_t)(lo | hi);
}
