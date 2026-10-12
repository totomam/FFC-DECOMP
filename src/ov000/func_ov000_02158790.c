#include "ffc/types.h"

uint8_t func_ov000_02158790(uint8_t *p) {
    int cnt;
    int i = 0;
    int z = i;
    cnt = 0;
    do {
        int j = z;
        do {
            if ((p[i] >> j) & 1) {
                cnt++;
            }
            j++;
        } while (j < 8);
        i++;
    } while (i < 4);
    return (uint8_t)cnt;
}
