#include "ffc/types.h"

int func_ov006_0219ef3c(uint8_t *s1, uint8_t *s2, int n) {
    int d = 0;
    while (n-- > 0 && (d = *s1 - *s2) == 0) {
        s1++;
        s2++;
    }
    return d;
}
