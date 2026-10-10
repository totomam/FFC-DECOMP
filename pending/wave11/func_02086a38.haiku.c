#include "ffc/types.h"

void func_02086a38(void) {
    uint32_t addr = 0x04000204;
    uint16_t *p = (uint16_t *)addr;
    *p |= addr >> 15;
}
