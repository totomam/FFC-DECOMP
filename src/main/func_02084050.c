#include "ffc/types.h"

void func_02084050(uint16_t *tab, uint32_t poly) {
    uint32_t crc, i, j, t;
    for (i = 0; i < 256; i++) {
        crc = i;
        for (j = 0; j < 8; j++) {
            t = crc;
            if (t & 1) {
                crc = (crc >> 1) ^ poly;
            } else {
                crc >>= 1;
            }
        }
        tab[i] = (uint16_t)crc;
    }
}
