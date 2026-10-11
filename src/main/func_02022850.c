#include "ffc/types.h"

int func_02022850(int8_t **p) {
    int8_t *s = *p;
    if (*s == 0x2c) {
        *p = s + 1;
        return 1;
    }
    return 0;
}
