#include "ffc/types.h"

uint32_t func_0206940c(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0x90);
    if (v == 0xFFFFFFFFu) {
        uint8_t *q = *(uint8_t **)(p + 0x80);
        if (q != 0) {
            return *(uint32_t *)(q + 0x8c);
        }
    }
    return *(volatile uint32_t *)(p + 0x90);
}
