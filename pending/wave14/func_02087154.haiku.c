#include "ffc/types.h"

void func_02087154(uint8_t *base, uint32_t v) {
    *(uint32_t *)(base + 0x98) = v;
    if (v != 0) {
        uint8_t *q = *(uint8_t **)(base + 0x90);
        *(uint32_t *)(q + v) = 0x597dfbd9;
    }
}
