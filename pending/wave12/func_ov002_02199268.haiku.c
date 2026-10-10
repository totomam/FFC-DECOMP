#include "ffc/types.h"

int32_t func_ov002_02199268(uint8_t *p) {
    int32_t v = *(int32_t *)(p + 0xc4);
    if (v != 0) {
        v -= 0x80;
    }
    return v;
}
