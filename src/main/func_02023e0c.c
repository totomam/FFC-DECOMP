#include "ffc/types.h"

extern void func_02056858(uint32_t v);

void func_02023e0c(uint8_t *p) {
    if (p[0x1d0] != 0) {
        func_02056858(*(uint32_t *)(p + 0x1a0));
        *(uint32_t *)(p + 0x1a0) = 0;
        *(uint32_t *)(p + 0x1ac) = 0;
        p[0x1d0] = 0;
    }
}
