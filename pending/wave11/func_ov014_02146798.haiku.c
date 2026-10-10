/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_ov014_02146798(uint8_t *p) {
    uint32_t idx = *(uint32_t *)(p + 0x90);
    return *(uint32_t *)(p + (idx << 2) + 0x88);
}
