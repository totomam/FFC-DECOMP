#include "ffc/types.h"

uint8_t func_ov000_02158790(uint8_t *p) {
    int cnt = 0;
    int i;
    int j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 8; j++) {
            if ((p[i] >> j) & 1) {
                cnt++;
            }
        }
    }
    return (uint8_t)cnt;
}
