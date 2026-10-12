#include "ffc/types.h"

uint32_t func_02023dc0(uint8_t *p) {
    uint32_t *q;
    uint32_t cnt;
    uint32_t r = 1;

    if (*(uint32_t *)(p + 8) & 1) {
        q = *(uint32_t **)(p + 0xe4);
        cnt = q[6];
        if (cnt != 0) {
            if ((cnt - 1) > (*(uint32_t *)(p + 0x180) >> 4)) {
                r = 0;
            }
            return r;
        }
        q = *(uint32_t **)(p + 0xf0);
        cnt = q[3];
        if (cnt != 0) {
            if ((cnt - 1) > (*(uint32_t *)(p + 0x180) >> 4)) {
                r = 0;
            }
            return r;
        }
    }
    return 0;
}
