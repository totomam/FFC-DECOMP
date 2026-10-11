#include "ffc/types.h"

int func_ov001_02175d40(void *p, uint32_t *out) {
    uint8_t *base;
    if (p == 0 || (base = *(uint8_t **)p) == 0) {
        return 2;
    }
    if (*(uint32_t *)(base + 0x108) != 0) {
        *out = 0;
        return 0;
    }
    *out = *(uint32_t *)(base + 0x5d0);
    return 0;
}
