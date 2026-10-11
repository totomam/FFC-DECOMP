#include "ffc/types.h"

void func_020707f8(uint8_t *s) {
    uint8_t *inner = *(uint8_t **)(s + 0x14);
    uint32_t v = *(uint32_t *)(s + 0x18);
    if (*(uint32_t *)(inner + 0x40) != v) {
        inner += 0x4c;
        if (*inner == 0) {
            return;
        }
    }
    *(uint32_t *)(s + 0xc) = (*(uint32_t *)(s + 0xc) & ~0xffu) | 2u;
}
