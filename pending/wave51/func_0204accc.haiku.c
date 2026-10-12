#include "ffc/types.h"

int32_t func_0204accc(int8_t *a, int8_t *b, int32_t n) {
    int c1, c2;
    if (n <= 0) {
        return n;
    }
    do {
        c1 = a[0];
        c2 = b[0];
        a++;
        b++;
        if (c1 == 0 && c2 == 0) {
            return 0;
        }
        if ((c2 >= 'A') & (c2 <= 'Z')) {
            c2 += 0x20;
        }
        if ((c1 >= 'A') & (c1 <= 'Z')) {
            c1 += 0x20;
        }
        if (c1 != c2) {
            return n;
        }
        n--;
    } while (n > 0);
    return n;
}
