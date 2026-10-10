#include "ffc/types.h"

void func_ov011_021c6654(uint8_t *p) {
    uint32_t *q = *(uint32_t **)(p + 0x8c);
    if (q != 0) {
        *q = *(uint32_t *)(p + 0x88);
    }
}
