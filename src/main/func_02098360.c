#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t x);

int32_t func_02098360(uint8_t *p) {
    int32_t r4 = p[0x26];
    if (*(int32_t *)(p + 0x20) > 0) {
        r4 += func_0209a76c(*(int32_t *)(*(uint8_t **)(p + 0x1c) + 0x28));
    }
    return r4;
}
