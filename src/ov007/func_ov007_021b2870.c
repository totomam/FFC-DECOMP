#include "ffc/types.h"

uint8_t func_ov007_021b2870(uint8_t *p, int32_t i) {
    i = i - 1;
    if (i < 0 || i >= 0x40) {
        return 1;
    }
    return *(p + i + 0xbc);
}
