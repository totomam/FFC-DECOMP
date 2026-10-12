#include "ffc/types.h"

extern int func_02079790(uint32_t mask);

int func_0207a09c(uint8_t *p, int n, uint8_t *src) {
    uint32_t mask = 0;
    int i;
    for (i = 0; i < n; i++) {
        uint8_t v = src[i];
        p[0x54 + i] = v;
        mask |= 1u << v;
    }
    if (func_02079790(mask) == 0) {
        return 0;
    }
    *(int32_t *)(p + 0x50) = n;
    *(uint32_t *)(p + 0x4c) = mask;
    return 1;
}
