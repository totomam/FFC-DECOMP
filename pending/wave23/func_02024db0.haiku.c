#include "ffc/types.h"

uint32_t func_02024db0(uint32_t *p, uint32_t flag) {
    uint32_t ret;
    if (p[2] & 0x100) {
        ret = 1;
    } else {
        ret = 0;
    }
    p[2] = p[2] & 0xfffffeff;
    if (flag != 0) {
        p[2] = p[2] | 0x100;
    }
    return ret;
}
