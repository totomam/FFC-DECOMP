#include "ffc/types.h"

void func_ov003_0214dd90(uint8_t *p) {
    if (p[0x410]) {
        uint32_t *c = (uint32_t *)(p + 0x40C);
        *c = *c + 1;
    }
}
