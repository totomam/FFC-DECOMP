#include "ffc/types.h"

uint8_t func_ov002_021aaa98(uint8_t *p, int flag) {
    if (flag) {
        return ((uint8_t *)*(uint8_t **)(p + 0x138))[0x13];
    }
    return ((uint8_t *)*(uint8_t **)(p + 0x138))[0x12];
}
