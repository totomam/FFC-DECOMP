#include "ffc/types.h"

int func_0202ebc8(uint8_t *p) {
    int r = 1;
    uint32_t *q = *(uint32_t **)(p + 0x84);
    if (q != 0) {
        if ((int8_t)q[3] == 0) {
            r = 0;
        }
    }
    return r;
}
