#include "ffc/types.h"

uint32_t func_ov004_021530bc(uint8_t *p) {
    void *q = *(void **)(p + 0x290);
    if (q != 0) {
        return ((uint32_t (*)(void *))(*(void ***)q)[9])(q);
    }
    return *(uint32_t *)(p + 0xe8);
}
