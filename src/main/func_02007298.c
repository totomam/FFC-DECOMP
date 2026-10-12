#include "ffc/types.h"

int32_t func_02007298(uint8_t *p, uint32_t a, uint32_t b) {
    int32_t i = *(int32_t *)(p + 0x24);
    while (i != 1) {
        uint8_t *e = p + i * 20;
        if (a == *(uint32_t *)(e + 0x14) && b == *(uint32_t *)(e + 0x18)) {
            return i;
        }
        i = *(int32_t *)(e + 0x24);
    }
    return -1;
}
