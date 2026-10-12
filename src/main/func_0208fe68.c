#include "ffc/types.h"

extern uint8_t data_020a6154[];

int func_0208fe68(uint8_t *s1, uint8_t *s2, int n) {
    int i;
    uint8_t a;
    uint8_t b;
    for (i = 0; i < n; i++) {
        int c1 = *s1++;
        if (c1 >= 0 && c1 < 0x80) {
            c1 = data_020a6154[c1];
        }
        a = (uint8_t)c1;
        {
            int c2 = *s2++;
            if (c2 >= 0 && c2 < 0x80) {
                c2 = data_020a6154[c2];
            }
            b = (uint8_t)c2;
        }
        if (a < b) {
            return -1;
        }
        if (a > b) {
            return 1;
        }
        if (a == 0) {
            return 0;
        }
    }
    return 0;
}
