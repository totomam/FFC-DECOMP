#include "ffc/types.h"

void func_0201c210(uint8_t *p, uint32_t idx, uint32_t val) {
    uint32_t *arr = *(uint32_t **)(p + 0x34);
    arr[idx] = val;
}
