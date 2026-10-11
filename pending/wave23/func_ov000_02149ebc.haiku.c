#include "ffc/types.h"

int func_ov000_02149ebc(int8_t *s) {
    int8_t *start = s;
    while (*s != 0x2e && *s != 0) {
        s++;
    }
    return s - start;
}
