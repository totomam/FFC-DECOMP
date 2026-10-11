#include "ffc/types.h"

int func_ov009_021ad7d8(uint8_t *p, uint8_t v) {
    uint8_t x = p[0x278];
    if (x != v) {
        if (x == 0) {
            p[0x278] = 1;
        } else {
            p[0x278] = 0;
        }
        return 1;
    }
    return 0;
}
