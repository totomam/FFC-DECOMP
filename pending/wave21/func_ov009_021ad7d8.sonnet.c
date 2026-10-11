#include "ffc/types.h"

int func_ov009_021ad7d8(uint8_t *p, int v) {
    uint8_t *q = p + 0x278;
    int x = *q;
    if (x != v) {
        if (x == 0) {
            *q = 1;
        } else {
            *q = 0;
        }
        return 1;
    }
    return 0;
}
