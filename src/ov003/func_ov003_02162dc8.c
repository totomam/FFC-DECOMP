#include "ffc/types.h"

int func_ov003_02162dc8(uint8_t *p, uint32_t v) {
    if (v == *(uint32_t *)(p + 0x88)) {
        return 1;
    }
    *(uint32_t *)(p + 0x88) = v;
    return 0;
}
