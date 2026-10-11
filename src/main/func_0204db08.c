#include "ffc/types.h"

int32_t func_0204db08(uint8_t *p, int32_t a, int32_t b) {
    if (p == 0) {
        return -1;
    }
    *(int32_t *)(p + 0xc8) = 0;
    *(int32_t *)(p + 0xdc) = 0;
    *(int32_t *)(p + 0xc0) = a;
    *(int32_t *)(p + 0xc4) = b;
    return 0;
}
