/* cflags: -nothumb */
#include "ffc/types.h"

#define CRC_STEP(v) do { if ((v) & 1) { (v) = (v) >> 1; } else { (v) = ((v) >> 1) ^ 0xEDB88320; } } while (0)

uint32_t func_ov016_02145cf0(const uint8_t *p, uint32_t n) {
    uint32_t crc = 0xFFFFFFFF;
    while (n--) {
        uint32_t x = crc ^ *p++;
        if (x & 1) {
            crc = x >> 1;
        } else {
            crc = (x >> 1) ^ 0xEDB88320;
        }
        CRC_STEP(crc);
        CRC_STEP(crc);
        CRC_STEP(crc);
        CRC_STEP(crc);
        CRC_STEP(crc);
        CRC_STEP(crc);
        CRC_STEP(crc);
    }
    return ~crc;
}
