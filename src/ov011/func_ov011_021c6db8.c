#include "ffc/types.h"

void func_ov011_021c6db8(uint8_t *p) {
    uint32_t *q = *(uint32_t **)(p + 0x88);
    if (q != 0) {
        *q = *(uint32_t *)(p + 0x84);
    }
}
