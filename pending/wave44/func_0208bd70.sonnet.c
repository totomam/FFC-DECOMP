#include "ffc/types.h"

int func_0208bd70(const char *s) {
    int i = 0;
    if (((uint32_t)s & 3) != 0) {
        do {
            if (s[i] == 0) {
                return i;
            }
            i++;
        } while (((uint32_t)(s + i)) & 3);
    }
    {
        const uint32_t m = 0x7f7f7f7f;
        const uint32_t *p = (const uint32_t *)(s + i);
        for (;;) {
            uint32_t v = *p;
            uint32_t t = ~(((v & m) + m) | v | m);
            if (t) break;
            p++;
            i += 4;
        }
    }
    while (s[i] != 0) i++;
    return i;
}
