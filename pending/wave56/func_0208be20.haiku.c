#include "ffc/types.h"

int func_0208be20(const uint8_t *s1, const uint8_t *s2) {
    uint32_t i = 0;
    uint32_t a = (uint32_t)s1 & 3;

    if (((uint32_t)s2 & 3) ^ a) goto bytes;
    if (a == 0) goto words;
    if (a >= 4) goto words;
    do {
        uint8_t c1 = s1[i];
        uint8_t c2 = s2[i];
        if (c1 != c2 || c1 == 0) return c1 - c2;
        i++;
    } while (i + a < 4);

words:
    for (;;) {
        uint32_t w1 = *(const uint32_t *)(s1 + i);
        uint32_t w2 = *(const uint32_t *)(s2 + i);
        if (w1 != w2) break;
        if (~((((w1 & 0x7f7f7f7fu) + 0x7f7f7f7fu) | w1) | 0x7f7f7f7fu) != 0) break;
        i += 4;
    }

bytes:
    for (;;) {
        uint8_t c1 = s1[i];
        uint8_t c2 = s2[i];
        if (c1 != c2 || c1 == 0) return c1 - c2;
        i++;
    }
}
