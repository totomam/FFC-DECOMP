#include "ffc/types.h"

uint32_t func_02098678(uint8_t *p, uint32_t v) {
    uint32_t cur, lim, m;
    if (p[0x3a] == 0) {
        return 0xffff;
    }
    lim = ((uint32_t *)p)[1];
    cur = ((uint32_t *)p)[2];
    if (cur <= lim) {
        return 0xffff;
    }
    cur -= 2;
    ((uint32_t *)p)[2] = cur;
    m = 0xffff;
    if (v != m) {
        *(uint16_t *)cur = (uint16_t)v;
    }
    if (v == m) {
        v = m << 16;
    }
    return (uint16_t)v;
}
