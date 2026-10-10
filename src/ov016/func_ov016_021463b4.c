/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_ov016_021463b4(uint32_t a) {
    uint8_t v = (uint8_t)(a >> 24);
    if ((v & 0xe) == 0xa) {
        if ((v & 0xf0) == 0xf0) {
            return 1;
        }
        if (v & 1) {
            return 2;
        }
        return 3;
    } else {
        return 0;
    }
}
