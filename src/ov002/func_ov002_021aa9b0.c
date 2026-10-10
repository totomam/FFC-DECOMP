#include "ffc/types.h"

void func_ov002_021aa9b0(uint8_t *p, uint32_t v) {
    if (p[0x258] == 0) {
        p[0x258] = 1;
        *(uint32_t *)(p + 0x25C) = v;
    }
}
