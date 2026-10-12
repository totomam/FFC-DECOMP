#include "ffc/types.h"

int func_0208be8c(const uint8_t *a, const uint8_t *b, int n) {
    int i;
    uint32_t mis;
    uint32_t w1, w2, t;
    uint8_t c1, c2;

    if (n != 0) {
    mis = (uint32_t)a & 3;
    i = 0;
    if ((((uint32_t)b & 3) ^ mis) == 0) {
        if (mis != 0) {
            while (i + mis < 4 && i < n) {
                c1 = a[i];
                c2 = b[i];
                if (c1 != c2 || c1 == 0) {
                    return c1 - c2;
                }
                i++;
            }
        }
        while (i <= n - 4) {
            w1 = *(const uint32_t *)(a + i);
            w2 = *(const uint32_t *)(b + i);
            if (w1 != w2) break;
            t = ~((((w1 & 0x7f7f7f7fu) + 0x7f7f7f7fu) | w1) | 0x7f7f7f7fu);
            if (t != 0) break;
            i += 4;
        }
    }
    while (i < n) {
        c1 = a[i];
        c2 = b[i];
        if (c1 != c2 || c1 == 0) {
            return c1 - c2;
        }
        i++;
    }
    }
    return 0;
}
