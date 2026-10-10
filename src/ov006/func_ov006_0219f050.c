#include "ffc/types.h"

uint32_t func_ov006_0219f050(uint32_t x) {
    uint32_t a = x << 24;
    uint32_t b = (x << 8) & 0x00ff0000;
    uint32_t t = x >> 24;
    t = t << 24;
    uint32_t c = t >> 24;
    uint32_t d = (x >> 8) & 0xff00;
    return c | d | b | (a & 0xff000000);
}
