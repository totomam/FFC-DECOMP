#include "ffc/types.h"

int func_020369c0(uint8_t *base, int idx) {
    uint8_t *p = base + (idx << 2);
    return p[0x35] == 1 ? 1 : 0;
}
