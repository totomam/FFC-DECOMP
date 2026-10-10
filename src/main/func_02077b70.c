#include "ffc/types.h"

uint32_t func_02077b70(uint32_t *p, uint8_t *base) {
    if (base == 0) {
        return *p;
    }
    return *(uint32_t *)(base + *(uint16_t *)((uint8_t *)p + 10) + 4);
}
