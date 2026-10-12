#include "ffc/types.h"

uint32_t func_0208bd70(const char *s) {
    uint32_t i = 0;
    if (((uint32_t)s & 3) != 0) {
        do {
            if (s[i] == 0) {
                return i;
            }
            i++;
        } while (((uint32_t)s + i) & 3);
    }
    for (;;) {
        uint32_t v = *(uint32_t *)(s + i);
        if (~((v & 0x7f7f7f7f) + 0x7f7f7f7f | v | 0x7f7f7f7f) != 0) {
            break;
        }
        i += 4;
    }
    while (s[i] != 0) {
        i++;
    }
    return i;
}
