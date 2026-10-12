#include "ffc/types.h"

static inline int lc_0204af58(int c) {
    int u = (c >= 'A') & (c <= 'Z');
    if (u) {
        return c + 0x20;
    }
    return c;
}

int func_0204af58(int8_t *s1, int8_t *s2) {
    int i = 0;
    int j = 0;
    while (lc_0204af58(s1[i]) == lc_0204af58(s2[j])) {
        if (s1[i] == 0 || s1[i] == 0x20) {
            return 0;
        }
        s1++;
        s2++;
    }
    return -1;
}
