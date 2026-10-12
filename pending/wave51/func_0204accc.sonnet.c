#include "ffc/types.h"

int32_t func_0204accc(int8_t *a, int8_t *b, int32_t n) {
    int f1, f2, c2, c1;
    while (n > 0) {
        c1 = *a++;
        c2 = *b++;
        if ((c1 == 0 || c2 == 0) && c1 == 0 && c2 == 0) {
            n = 0;
            break;
        }
        f1 = 1; if (c2 < 'A') f1 = 0;
        f2 = 1; if (c2 > 'Z') f2 = 0;
        if (f1 & f2) c2 += 0x20;
        f1 = 1; if (c1 < 'A') f1 = 0;
        f2 = 1; if (c1 > 'Z') f2 = 0;
        if (f1 & f2) c1 += 0x20;
        if (c1 != c2) {
            break;
        }
        n--;
    }
    return n;
}
