#include "ffc/types.h"

int func_0204ae04(int8_t *s, int n) {
    int i;
    int32_t val;
    int seen;
    if (n > 8) return ~0;
    if (n == 8) {
        int j = 0;
        if (s[j] > 0x37) return j - 1;
    }
    val = 0;
    seen = 0;
    for (i = 0; i < n; i++) {
        int8_t c = s[i];
        int lo = c >= 'A';
        int hi = c <= 'Z';
        if (lo & hi) c = c + 0x20;
        if (c >= '0' && c <= '9') {
            val = val * 16 + c - 0x30;
            seen = 1;
        } else if (c >= 'a' && c <= 'f') {
            val = val * 16 + c - 0x57;
            seen = 1;
        } else {
            if (seen) {
                if (c == ' ' || c == 0) break;
            } else {
                if (c == ' ') continue;
            }
            return ~0;
        }
    }
    return val;
}
