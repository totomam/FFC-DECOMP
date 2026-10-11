#include "ffc/types.h"

int func_ov007_021bdfa0(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0xc0);
    if (q) {
        *q = 1;
    }
    if (*(uint32_t *)(p + 0xb8) == 0xffff62b6) {
        return 0;
    }
    return 1;
}
