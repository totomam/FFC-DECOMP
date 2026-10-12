#include "ffc/types.h"

uint8_t func_ov002_021aac18(uint8_t *p, uint32_t i) {
    switch (i) {
    case 2:
        return ((uint8_t *)(*(uint8_t **)(p + 0x138)))[0x23];
    case 3:
        return ((uint8_t *)(*(uint8_t **)(p + 0x138)))[0x24];
    case 4:
        return ((uint8_t *)(*(uint8_t **)(p + 0x138)))[0x25];
    case 5:
        return ((uint8_t *)(*(uint8_t **)(p + 0x138)))[0x26];
    case 6:
        return ((uint8_t *)(*(uint8_t **)(p + 0x138)))[0x27];
    case 7:
        return ((uint8_t *)(*(uint8_t **)(p + 0x138)))[0x28];
    default:
        return 0;
    }
}
