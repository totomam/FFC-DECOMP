#include "ffc/types.h"

extern int func_0208bd70(const int8_t *s);

int func_0208bcc8(int8_t *dst, const int8_t *src, int n) {
    const int8_t *s = src;
    uint32_t al = (uint32_t)dst & 3;
    const int8_t *p = s;
    int i = 0;

    if ((((uint32_t)s & 3) ^ al) == 0) {
        if (al != 0) {
            while ((i + al) < 4 && i < n - 1) {
                dst[i] = p[0];
                if (p[0] == 0) goto tail;
                p++;
                i++;
            }
        }
        while (i < n - 4) {
            uint32_t w = *(const uint32_t *)(s + i);
            if (~((((w & 0x7f7f7f7fu) + 0x7f7f7f7fu) | w | 0x7f7f7f7fu))) break;
            *(uint32_t *)(dst + i) = w;
            i += 4;
        }
        p = s + i;
    }
    while (i < n - 1) {
        dst[i] = p[0];
        if (p[0] == 0) goto tail;
        i++;
        p++;
    }
tail:
    if (i >= n - 1 && n > 0) {
        dst[i] = 0;
    }
    if (p[0] != 0) {
        i += func_0208bd70(p);
    }
    return i;
}
