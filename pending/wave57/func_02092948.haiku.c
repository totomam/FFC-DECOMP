#include "ffc/types.h"

int func_02092948(const uint8_t *s1, const uint8_t *s2) {
    uint32_t w1;
    int c1, c2, d;

    c1 = *s1;
    c2 = *s2;
    d = c1 - c2;
    if (d != 0) return d;
    if (((uint32_t)s1 & 3) != ((uint32_t)s2 & 3)) goto bytes;
    if (((uint32_t)s1 & 3) == 0) goto words;
    if (c1 == 0) return 0;
    {
        uint32_t n = 3 - ((uint32_t)s1 & 3);
        if (n != 0) {
            do {
                s1++;
                s2++;
                c1 = *s1;
                c2 = *s2;
                d = c1 - c2;
                if (d != 0) return d;
                if (c1 == 0) return 0;
                n--;
            } while (n != 0);
        }
    }
    s1++;
    s2++;
words:
    for (;;) {
        w1 = *(const uint32_t *)s1;
        if ((w1 - 0x01010101u) & ~w1 & 0x80808080u) break;
        if (w1 != *(const uint32_t *)s2) break;
        s1 += 4;
        s2 += 4;
    }
bytes:
    c1 = *s1;
    c2 = *s2;
    d = c1 - c2;
    if (d != 0) return d;
    while (c1 != 0) {
        s1++;
        s2++;
        c1 = *s1;
        c2 = *s2;
        d = c1 - c2;
        if (d != 0) return d;
    }
    return 0;
}
