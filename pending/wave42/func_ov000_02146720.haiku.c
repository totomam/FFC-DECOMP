#include "ffc/types.h"

extern uint8_t data_02141510[];

#define SWAP16(v) ((uint16_t)((((uint16_t)(v)) >> 8) | (((uint16_t)(v)) << 8)))

void *func_ov000_02146720(uint8_t *a, uint8_t *b)
{
    uint8_t *obj;
    uint8_t *node;

    node = *(uint8_t **)(data_02141510 + 8);
    while (node != 0) {
        obj = *(uint8_t **)(node + 0xa4);
        if (obj != 0 && *(uint32_t *)obj != 0 && obj[8] == 1 &&
            *(uint16_t *)(obj + 0xa) == SWAP16(*(uint16_t *)(b + 2))) {
            if (*(uint16_t *)(obj + 0x18) == 0 ||
                *(uint16_t *)(obj + 0x18) == SWAP16(*(uint16_t *)(b))) {
                if (*(uint32_t *)(obj + 0x1c) == 0) {
                    return obj;
                }
                if (*(uint32_t *)(obj + 0x1c) ==
                    ((((uint32_t)SWAP16(*(uint16_t *)(a + 0xc))) << 16) |
                     (uint32_t)SWAP16(*(uint16_t *)(a + 0xe)))) {
                    return obj;
                }
            }
        }
        node = *(uint8_t **)(node + 0x68);
    }
    return 0;
}
