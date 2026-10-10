#include "ffc/types.h"

int32_t func_02008400(void *p) {
    int16_t v = *(int16_t *)((uint8_t *)p + 16);
    if (v == 0) {
        return -1;
    }
    return v;
}
