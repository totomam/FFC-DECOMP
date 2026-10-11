#include "ffc/types.h"

int func_ov000_02149540(uint8_t *p) {
    int i;
    for (i = 0; i < 0x20; i++) {
        if (p[i] != 0) {
            return 1;
        }
    }
    return 0;
}
