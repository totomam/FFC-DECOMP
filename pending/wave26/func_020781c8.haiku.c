#include "ffc/types.h"

uint32_t func_020781c8(void *p) {
    if (*(uint32_t *)p != 0x4352414E) {
        return 0;
    }
    if (*(uint16_t *)((uint8_t *)p + 4) != 0xfffe) {
        return 0;
    }
    if (*(uint16_t *)((uint8_t *)p + 6) == 0x100) {
        return 1;
    }
    return 0;
}
