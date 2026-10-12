#include "ffc/types.h"

int func_0208bdc4(const int8_t *s, int n) {
    int i = 0;
    const int8_t *p;
    while ((((uint32_t)(s + i)) & 3) && i < n) {
        if (s[i] == 0) {
            return i;
        }
        i++;
    }
    p = s + i;
    while (i < n - 4) {
        uint32_t v = *(const uint32_t *)p;
        uint32_t t = (v & 0x7f7f7f7fu) + 0x7f7f7f7fu;
        if (~(v | t | 0x7f7f7f7fu)) {
            break;
        }
        i += 4;
        p += 4;
    }
    while (s[i] != 0 && i < n) {
        i++;
    }
    return i;
}
