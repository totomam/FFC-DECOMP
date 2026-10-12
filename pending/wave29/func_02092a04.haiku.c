#include "ffc/types.h"

int func_02092a04(uint8_t *s1, uint8_t *s2, uint32_t n) {
    uint8_t c1;
    uint8_t c2;

    while (n != 0) {
        c2 = *s2;
        c1 = *s1;
        s2++;
        s1++;
        if (c1 != c2) {
            return c1 - c2;
        }
        if (c1 == 0) {
            break;
        }
        n--;
    }
    return 0;
}
