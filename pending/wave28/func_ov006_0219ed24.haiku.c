#include "ffc/types.h"

extern void func_ov006_0219ed5c(uint32_t a, uint32_t *b);

uint32_t func_ov006_0219ed24(uint32_t crc, const uint8_t *data, int len, uint32_t init, uint32_t *table) {
    int i;
    if (init == 0) {
        func_ov006_0219ed5c(init, table);
    }
    for (i = 0; i < len; i++) {
        crc = (crc >> 8) ^ table[(data[i] ^ crc) & 0xff];
    }
    return crc;
}
