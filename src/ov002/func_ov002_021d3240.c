#include "ffc/types.h"

void func_ov002_021d3240(uint8_t *p) {
    uint32_t v;
    v = *(uint32_t *)(p + 0xc8);
    if (v != 0) {
        *(uint32_t *)(p + 0xc8) = 0;
    }
}
