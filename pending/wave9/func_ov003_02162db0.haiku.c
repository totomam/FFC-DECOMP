#include "ffc/types.h"

int func_ov003_02162db0(uint8_t *p, uint32_t v) {
    if (v == *(uint32_t *)(p + 0x84)) {
        return 1;
    }
    *(uint32_t *)(p + 0x84) = v;
    return 0;
}
