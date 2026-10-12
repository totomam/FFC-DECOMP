#include "ffc/types.h"

int32_t func_0207e810(int8_t *s, int32_t i) {
    int8_t c;
    int32_t k;
    while ((c = s[i]) != 0 && (c & 0xff) != 0x2f && (c & 0xff) != 0x5c) {
        if ((((uint8_t)c ^ 0x20) - 0xa1u) < 0x3cu) k = 1; else k = 0;
        i++;
        i += k;
    }
    return i;
}
