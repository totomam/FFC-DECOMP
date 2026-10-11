#include "ffc/types.h"

void func_0207bac8(uint8_t *p) {
    uint32_t *obj = *(uint32_t **)(p + 0x154);
    if (obj != 0) {
        *obj = 0;
        *(uint32_t *)(p + 0x154) = 0;
    }
    *(uint32_t *)(p + 0x118) &= ~(uint32_t)1;
    *(uint32_t *)(p + 0x118) &= ~(uint32_t)4;
    *(uint32_t *)(p + 0x118) &= ~(uint32_t)2;
}
