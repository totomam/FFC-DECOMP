#include "ffc/types.h"

int func_ov007_021bd87c(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0xb8);
    if (v == 0xffff5f95 || v == 0xffff5f9a) {
        return 0;
    }
    return 1;
}
