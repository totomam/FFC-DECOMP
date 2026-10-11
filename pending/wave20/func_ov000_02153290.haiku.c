#include "ffc/types.h"

extern int func_02084ca4(int8_t *s, int32_t *p, int n);

int func_ov000_02153290(int8_t *s, int32_t *p) {
    int ok = 0;
    int c = s[0];
    int v;
    if (c >= 0x30 && c <= 0x39) {
        ok = 1;
    }
    v = c - 0x30;
    if (!ok) {
        v = 0xff;
    }
    p[1] = v;
    return func_02084ca4(s + 1, p + 3, 9);
}
