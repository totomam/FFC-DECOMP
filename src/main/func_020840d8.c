#include "ffc/types.h"

void func_020840d8(uint32_t *table, uint32_t *state, const uint8_t *data, uint32_t len) {
    uint32_t crc = *state;
    uint32_t i = 0;
    while (i < len) {
        crc = (crc >> 8) ^ table[(uint8_t)(*data ^ crc)];
        i++;
        data++;
    }
    *state = crc;
}
