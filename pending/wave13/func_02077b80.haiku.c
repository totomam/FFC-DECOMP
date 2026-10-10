#include "ffc/types.h"

uint32_t func_02077b80(void *a, void *b) {
    if (b == 0) {
        return *(uint32_t *)((uint8_t *)a + 4);
    }
    return *(uint32_t *)((uint8_t *)b + *(uint16_t *)((uint8_t *)a + 0xa));
}
