#include "ffc/types.h"

int func_ov003_0216c838(uint8_t *p) {
    uint16_t t = *(uint16_t *)p;
    switch (t) {
    case 0x5f:
        if (*(uint32_t *)(p + 4) >= 2) {
            uint8_t *q = p + *(uint32_t *)(p + 8);
            if (*(uint32_t *)(q + 4) != 0) {
                return 1;
            }
        }
        return 0;
    case 0xa9:
        if (*(uint32_t *)(p + 4) >= 4) {
            uint8_t *q = p + *(uint32_t *)(p + 8);
            if (*(uint32_t *)(q + 0xc) != 0) {
                return 1;
            }
        }
        return 0;
    default:
        return 0;
    }
}
