#include "ffc/types.h"

extern int32_t func_0209831c(void *self, uint16_t v);

int32_t func_02098250(void *p) {
    uint8_t *b = (uint8_t *)p;
    if (b[0x26]) {
        if (b[0x27]) {
            if (func_0209831c(p, *(uint16_t *)(b + 0x24)) < 0) {
                return -1;
            }
        }
        b[0x27] = 0;
    }
    return 0;
}
