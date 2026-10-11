#include "ffc/types.h"

void *func_ov001_0217c148(uint8_t *p, uint32_t a, uint32_t b) {
    uint8_t *base = *(uint8_t **)p;
    uint8_t *node;

    if (a == 0 && b == 0) {
        return 0;
    }

    node = *(uint8_t **)(base + 0x5d8);
    while (node != 0) {
        if (*(uint32_t *)(node + 8) == a && *(uint16_t *)(node + 0xc) == b) {
            return node;
        }
        node = *(uint8_t **)(node + 0x4c);
    }
    return 0;
}
