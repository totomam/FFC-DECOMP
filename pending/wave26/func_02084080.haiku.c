#include "ffc/types.h"

void func_02084080(uint16_t *tbl, uint16_t *crc, uint8_t *data, uint32_t len) {
    uint32_t i;
    uint32_t c = *crc;
    for (i = 0; i < len; i++) {
        uint32_t t = c ^ *data++;
        c = (c >> 8) ^ tbl[t & 0xff];
    }
    *crc = (uint16_t)c;
}
