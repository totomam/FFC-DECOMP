#include "ffc/types.h"

uint32_t func_02023d9c(uint8_t *p) {
    uint32_t r;
    if (*(uint32_t *)(p + 8) & 1) {
        r = *(uint32_t *)(*(uint8_t **)(p + 0xe4) + 0x18);
        if (r != 0) {
            return r;
        }
        r = *(uint32_t *)(*(uint8_t **)(p + 0xf0) + 0xc);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
