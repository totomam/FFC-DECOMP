#include "ffc/types.h"

int func_0204bea0(int8_t *buf, uint32_t i) {
    int8_t c = buf[(i - 2) & 3];
    if (c == 13) {
        if (buf[(i - 1) & 3] == 13) {
            return 1;
        }
    }
    if (c == 10) {
        if (buf[(i - 1) & 3] == 10) {
            return 1;
        }
    }
    if (buf[(i - 4) & 3] == 13 && buf[(i - 3) & 3] == 10 && c == 13 && buf[(i - 1) & 3] == 10) {
        return 1;
    }
    return 0;
}
