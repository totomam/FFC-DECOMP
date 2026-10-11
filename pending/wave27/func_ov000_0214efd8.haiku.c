#include "ffc/types.h"

int32_t func_ov000_0214efd8(uint8_t *p, int32_t mode, uint32_t flags) {
    if (p == 0) {
        return -1;
    }
    switch (mode) {
    case 3:
        if (*(int8_t *)(p + 0xae) == 1) {
            return 0;
        }
        return 4;
    case 4:
        mode = 4;
        if (mode & flags) {
            p[0xae] = 0;
        } else {
            p[0xae] = 1;
        }
        break;
    default:
        break;
    }
    return 0;
}
