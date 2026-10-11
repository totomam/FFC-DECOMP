#include "ffc/types.h"

int32_t func_0204f854(void *p) {
    int32_t v = *(int32_t *)((uint8_t *)p + 0x64);
    if (v == 3 && *(int32_t *)((uint8_t *)p + 0x68) == 4) {
        return 12;
    }
    if (v == 3) {
        return 4;
    }
    if (v == 4) {
        return 8;
    }
    return 0;
}
