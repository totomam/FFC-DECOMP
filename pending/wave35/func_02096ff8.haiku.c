#include "ffc/types.h"

extern uint8_t data_020a6154[];

int func_02096ff8(uint8_t *s1, uint8_t *s2) {
    int c1, c2;
    for (;;) {
        c1 = *s1++;
        if (c1 >= 0 && c1 < 0x80) {
            c1 = data_020a6154[c1];
        }
        c1 = (uint8_t)c1;
        c2 = *s2++;
        if (c2 >= 0 && c2 < 0x80) {
            c2 = data_020a6154[c2];
        }
        c2 = (uint8_t)c2;
        if ((uint32_t)c1 < (uint32_t)c2) {
            return -1;
        }
        if ((uint32_t)c1 > (uint32_t)c2) {
            return 1;
        }
        if (c1 == 0) {
            return 0;
        }
    }
}
