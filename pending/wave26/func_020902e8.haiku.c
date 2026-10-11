#include "ffc/types.h"

int32_t func_020902e8(uint16_t *a, uint8_t *b, void *c) {
    if (b == 0) {
        return 0;
    }
    if (c == 0) {
        return -1;
    }
    if (a != 0) {
        *a = *b;
    }
    if (*b == 0) {
        return 0;
    }
    return 1;
}
